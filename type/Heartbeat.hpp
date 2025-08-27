

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Heartbeat.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Heartbeat_816432136_hpp
#define Heartbeat_816432136_hpp

#include <iosfwd>
#include "HeartbeatImpl.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "MessageHeader.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace heartbeat {
    struct SatelliteStatus_def {
        enum type {
            OPERATIONAL,      
            MAINTENANCE,      
            EMERGENCY,      
            OFFLINE,      
            RECONFIGURING     
        };
        static type get_default(){ return OPERATIONAL;}
    };

    typedef dds::core::safe_enum<SatelliteStatus_def> SatelliteStatus;
    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SatelliteStatus& sample);

    class NDDSUSERDllExport TelemetryData {

      public:
        TelemetryData();
        TelemetryData(
            const dds::core::string& satelliteId,
            rti::core::int64 timestamp,
            double batteryLevel,
            double solarPanelOutput,
            double temperature,
            double cpuUsage,
            double memoryUsage,
            double dataStorageUsage,
            bool antennaStatus,
            bool cameraStatus,
            const dds::core::string& systemHealth);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        TelemetryData (TelemetryData&& other_) = default;
        TelemetryData& operator=(TelemetryData&&  other_) = default;
        TelemetryData& operator=(const TelemetryData&) = default;
        TelemetryData(const TelemetryData&) = default;
        #else
        TelemetryData(TelemetryData&& other_) OMG_NOEXCEPT;  
        TelemetryData& operator=(TelemetryData&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        dds::core::string& satelliteId() OMG_NOEXCEPT; 
        const dds::core::string& satelliteId() const OMG_NOEXCEPT;
        void satelliteId(const dds::core::string& value);

        rti::core::int64 timestamp() const OMG_NOEXCEPT;
        void timestamp(rti::core::int64 value);

        double batteryLevel() const OMG_NOEXCEPT;
        void batteryLevel(double value);

        double solarPanelOutput() const OMG_NOEXCEPT;
        void solarPanelOutput(double value);

        double temperature() const OMG_NOEXCEPT;
        void temperature(double value);

        double cpuUsage() const OMG_NOEXCEPT;
        void cpuUsage(double value);

        double memoryUsage() const OMG_NOEXCEPT;
        void memoryUsage(double value);

        double dataStorageUsage() const OMG_NOEXCEPT;
        void dataStorageUsage(double value);

        bool antennaStatus() const OMG_NOEXCEPT;
        void antennaStatus(bool value);

        bool cameraStatus() const OMG_NOEXCEPT;
        void cameraStatus(bool value);

        dds::core::string& systemHealth() OMG_NOEXCEPT; 
        const dds::core::string& systemHealth() const OMG_NOEXCEPT;
        void systemHealth(const dds::core::string& value);

        bool operator == (const TelemetryData& other_) const;
        bool operator != (const TelemetryData& other_) const;

        void swap(TelemetryData& other_) OMG_NOEXCEPT ;

      private:

        dds::core::string m_satelliteId_;
        rti::core::int64 m_timestamp_;
        double m_batteryLevel_;
        double m_solarPanelOutput_;
        double m_temperature_;
        double m_cpuUsage_;
        double m_memoryUsage_;
        double m_dataStorageUsage_;
        bool m_antennaStatus_;
        bool m_cameraStatus_;
        dds::core::string m_systemHealth_;

    };

    inline void swap(TelemetryData& a, TelemetryData& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TelemetryData& sample);

    class NDDSUSERDllExport SatelliteInfo {

      public:
        SatelliteInfo();
        SatelliteInfo(
            const dds::core::string& satelliteId,
            const dds::core::string& satelliteName,
            const dds::core::string& constellation,
            double latitude,
            double longitude,
            double altitude,
            double velocity,
            rti::core::int64 timestamp,
            const heartbeat::SatelliteStatus& status);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        SatelliteInfo (SatelliteInfo&& other_) = default;
        SatelliteInfo& operator=(SatelliteInfo&&  other_) = default;
        SatelliteInfo& operator=(const SatelliteInfo&) = default;
        SatelliteInfo(const SatelliteInfo&) = default;
        #else
        SatelliteInfo(SatelliteInfo&& other_) OMG_NOEXCEPT;  
        SatelliteInfo& operator=(SatelliteInfo&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        dds::core::string& satelliteId() OMG_NOEXCEPT; 
        const dds::core::string& satelliteId() const OMG_NOEXCEPT;
        void satelliteId(const dds::core::string& value);

        dds::core::string& satelliteName() OMG_NOEXCEPT; 
        const dds::core::string& satelliteName() const OMG_NOEXCEPT;
        void satelliteName(const dds::core::string& value);

        dds::core::string& constellation() OMG_NOEXCEPT; 
        const dds::core::string& constellation() const OMG_NOEXCEPT;
        void constellation(const dds::core::string& value);

        double latitude() const OMG_NOEXCEPT;
        void latitude(double value);

        double longitude() const OMG_NOEXCEPT;
        void longitude(double value);

        double altitude() const OMG_NOEXCEPT;
        void altitude(double value);

        double velocity() const OMG_NOEXCEPT;
        void velocity(double value);

        rti::core::int64 timestamp() const OMG_NOEXCEPT;
        void timestamp(rti::core::int64 value);

        heartbeat::SatelliteStatus& status() OMG_NOEXCEPT; 
        const heartbeat::SatelliteStatus& status() const OMG_NOEXCEPT;
        void status(const heartbeat::SatelliteStatus& value);

        bool operator == (const SatelliteInfo& other_) const;
        bool operator != (const SatelliteInfo& other_) const;

        void swap(SatelliteInfo& other_) OMG_NOEXCEPT ;

      private:

        dds::core::string m_satelliteId_;
        dds::core::string m_satelliteName_;
        dds::core::string m_constellation_;
        double m_latitude_;
        double m_longitude_;
        double m_altitude_;
        double m_velocity_;
        rti::core::int64 m_timestamp_;
        heartbeat::SatelliteStatus m_status_;

    };

    inline void swap(SatelliteInfo& a, SatelliteInfo& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SatelliteInfo& sample);

    class NDDSUSERDllExport HeartbeatMessage {

      public:
        HeartbeatMessage();
        HeartbeatMessage(
            const MessageHeader& header,
            const heartbeat::SatelliteInfo& satelliteInfo,
            const heartbeat::TelemetryData& telemetry,
            int32_t uptime);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        HeartbeatMessage (HeartbeatMessage&& other_) = default;
        HeartbeatMessage& operator=(HeartbeatMessage&&  other_) = default;
        HeartbeatMessage& operator=(const HeartbeatMessage&) = default;
        HeartbeatMessage(const HeartbeatMessage&) = default;
        #else
        HeartbeatMessage(HeartbeatMessage&& other_) OMG_NOEXCEPT;  
        HeartbeatMessage& operator=(HeartbeatMessage&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        MessageHeader& header() OMG_NOEXCEPT; 
        const MessageHeader& header() const OMG_NOEXCEPT;
        void header(const MessageHeader& value);

        heartbeat::SatelliteInfo& satelliteInfo() OMG_NOEXCEPT; 
        const heartbeat::SatelliteInfo& satelliteInfo() const OMG_NOEXCEPT;
        void satelliteInfo(const heartbeat::SatelliteInfo& value);

        heartbeat::TelemetryData& telemetry() OMG_NOEXCEPT; 
        const heartbeat::TelemetryData& telemetry() const OMG_NOEXCEPT;
        void telemetry(const heartbeat::TelemetryData& value);

        int32_t uptime() const OMG_NOEXCEPT;
        void uptime(int32_t value);

        bool operator == (const HeartbeatMessage& other_) const;
        bool operator != (const HeartbeatMessage& other_) const;

        void swap(HeartbeatMessage& other_) OMG_NOEXCEPT ;

      private:

        MessageHeader m_header_;
        heartbeat::SatelliteInfo m_satelliteInfo_;
        heartbeat::TelemetryData m_telemetry_;
        int32_t m_uptime_;

    };

    inline void swap(HeartbeatMessage& a, HeartbeatMessage& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HeartbeatMessage& sample);

} // namespace heartbeat  
namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<heartbeat::TelemetryData> {
            NDDSUSERDllExport static std::string value() {
                return "heartbeat::TelemetryData";
            }
        };

        template<>
        struct is_topic_type<heartbeat::TelemetryData> : public dds::core::true_type {};

        template<>
        struct topic_type_support<heartbeat::TelemetryData> {

            NDDSUSERDllExport static void initialize_sample(heartbeat::TelemetryData& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const heartbeat::TelemetryData& sample);

            NDDSUSERDllExport static void from_cdr_buffer(heartbeat::TelemetryData& sample, const std::vector<char>& buffer);
        };

        template<>
        struct topic_type_name<heartbeat::SatelliteInfo> {
            NDDSUSERDllExport static std::string value() {
                return "heartbeat::SatelliteInfo";
            }
        };

        template<>
        struct is_topic_type<heartbeat::SatelliteInfo> : public dds::core::true_type {};

        template<>
        struct topic_type_support<heartbeat::SatelliteInfo> {

            NDDSUSERDllExport static void initialize_sample(heartbeat::SatelliteInfo& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const heartbeat::SatelliteInfo& sample);

            NDDSUSERDllExport static void from_cdr_buffer(heartbeat::SatelliteInfo& sample, const std::vector<char>& buffer);
        };

        template<>
        struct topic_type_name<heartbeat::HeartbeatMessage> {
            NDDSUSERDllExport static std::string value() {
                return "heartbeat::HeartbeatMessage";
            }
        };

        template<>
        struct is_topic_type<heartbeat::HeartbeatMessage> : public dds::core::true_type {};

        template<>
        struct topic_type_support<heartbeat::HeartbeatMessage> {

            NDDSUSERDllExport static void initialize_sample(heartbeat::HeartbeatMessage& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const heartbeat::HeartbeatMessage& sample);

            NDDSUSERDllExport static void from_cdr_buffer(heartbeat::HeartbeatMessage& sample, const std::vector<char>& buffer);
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<heartbeat::SatelliteStatus> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template<>
        struct dynamic_type<heartbeat::TelemetryData> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<heartbeat::TelemetryData> {
            typedef heartbeat_TelemetryData_c type;
        };

        template<>
        struct dynamic_type<heartbeat::SatelliteInfo> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<heartbeat::SatelliteInfo> {
            typedef heartbeat_SatelliteInfo_c type;
        };

        template<>
        struct dynamic_type<heartbeat::HeartbeatMessage> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<heartbeat::HeartbeatMessage> {
            typedef heartbeat_HeartbeatMessage_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // Heartbeat_816432136_hpp

