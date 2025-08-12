#include <dds/dds.hpp>
#include <rti/core/policy/CorePolicy.hpp>
#include <rti/core/status/Status.hpp>
#include <dds/domain/ddsdomain.hpp>
#include <dds/domain/DomainParticipantListener.hpp>
#include <dds/domain/DomainParticipant.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
#include <set>
#include "application.hpp"
class DiscoveryServerListener : public dds::domain::NoOpDomainParticipantListener {
public:
    virtual void on_requested_deadline_missed(
        dds::pub::AnyDataWriter& writer,
        const dds::core::status::OfferedDeadlineMissedStatus& status)
    {
        std::cout << "ParticipantListener: on_requested_deadline_missed()"
                  << std::endl;
    }

    virtual void on_offered_incompatible_qos(
        dds::pub::AnyDataWriter& writer,
        const ::dds::core::status::OfferedIncompatibleQosStatus& status)
    {
        std::cout << "ParticipantListener: on_offered_incompatible_qos()"
                  << std::endl;
    }

    virtual void on_sample_rejected(
        dds::sub::AnyDataReader& the_reader,
        const dds::core::status::SampleRejectedStatus& status)
    {
        std::cout << "ParticipantListener: on_sample_rejected()"
                  << std::endl;
    }

    virtual void on_liveliness_changed(
        dds::sub::AnyDataReader& the_reader,
        const dds::core::status::LivelinessChangedStatus& status)
    {
        std::cout << "ParticipantListener: on_liveliness_changed()"
                  << std::endl;
    }


    virtual void on_sample_lost(
        dds::sub::AnyDataReader& the_reader,
        const dds::core::status::SampleLostStatus& status)
    {
        std::cout << "ParticipantListener: on_sample_lost()"
                  << std::endl;
    }

    virtual void on_subscription_matched(
        dds::sub::AnyDataReader& the_reader,
        const dds::core::status::SubscriptionMatchedStatus& status)
    {
        std::cout << "ParticipantListener: on_subscription_matched()"
                  << std::endl;
    }

    virtual void on_data_available(dds::sub::AnyDataReader& the_reader)
    {
        std::cout << "ParticipantListener: on_data_available()"
                  << std::endl;
    }


    virtual void on_data_on_readers(dds::sub::Subscriber& sub)
    {
        // Notify DataReaders only calls on_data_available for
        // DataReaders with unread samples.
        sub.notify_datareaders();
        std::cout << "ParticipantListener: on_data_on_readers()"
                  << std::endl;
    }

    virtual void on_inconsistent_topic(
        dds::topic::AnyTopic& topic,
        const dds::core::status::InconsistentTopicStatus& status)
    {
        std::cout << "ParticipantListener: on_inconsistent_topic()"
                  << std::endl;
    }
};

class RTIDiscoveryServer {
public:
    bool start(const std::string &bind_address = "192.168.5.165", int port = 8080)
    {
        dds::domain::qos::DomainParticipantQos qos;

        // 配置Discovery Server
        rti::core::policy::Discovery discovery;

        rti::core::policy::Property server_props;
        server_props.set({
            { "dds.discovery.enable_discovery_server", "1" },
            { "dds.discovery.participant_role", "DISCOVERY_SERVER" },
            { "dds.discovery.server_id", "0" },
            { "dds.discovery.servers", "0@udpv4://" + bind_address + ":" + std::to_string(port) },
            { "dds.discovery.server_bind_address", bind_address },
            { "dds.discovery.server_bind_port", std::to_string(port) },
            // 增加服务器容量
            { "dds.discovery.max_participants_in_database", "1000" },
            { "dds.discovery.max_endpoints_in_database", "10000" },
        });

        qos << discovery;
        qos << server_props;

        try {
            discovery_listener_ = std::make_unique<DiscoveryServerListener>();
            participant_ = std::make_unique<dds::domain::DomainParticipant>(0, qos,discovery_listener_.get());
            std::cout << "🏢 RTI Discovery Server启动成功!" << std::endl;
            std::cout << "   地址: " << bind_address << ":" << port << std::endl;
            std::cout << "   客户端连接字符串: 0@udpv4://" << bind_address << ":" << port << std::endl;
            return true;
        } catch (const std::exception &e) {
            std::cerr << "❌ Discovery Server启动失败: " << e.what() << std::endl;
            return false;
        }
    }

    void run()
    {
        std::cout << "Discovery Server运行中... 按Ctrl+C退出" << std::endl;
        std::cout << "等待客户端连接...\n" << std::endl;

        while (true) {

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

private:
    std::unique_ptr<dds::domain::DomainParticipant> participant_;
    std::shared_ptr<DiscoveryServerListener> discovery_listener_;
};

int main()
{
    RTIDiscoveryServer server;

    if (server.start("192.168.5.165", 8080)) {
        server.run();
    }

    return 0;
}