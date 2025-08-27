

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Heartbeat.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>
#include "Heartbeat.hpp"
#include "HeartbeatImplPlugin.h"

namespace heartbeat {
    std::ostream& operator << (std::ostream& o,const SatelliteStatus& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        switch(sample.underlying()){
            case SatelliteStatus::OPERATIONAL:
            o << "SatelliteStatus::OPERATIONAL" << " ";
            break;
            case SatelliteStatus::MAINTENANCE:
            o << "SatelliteStatus::MAINTENANCE" << " ";
            break;
            case SatelliteStatus::EMERGENCY:
            o << "SatelliteStatus::EMERGENCY" << " ";
            break;
            case SatelliteStatus::OFFLINE:
            o << "SatelliteStatus::OFFLINE" << " ";
            break;
            case SatelliteStatus::RECONFIGURING:
            o << "SatelliteStatus::RECONFIGURING" << " ";
            break;
        }
        return o;
    }

    // ---- TelemetryData: 

    TelemetryData::TelemetryData() :
        m_timestamp_ (0ll) ,
        m_batteryLevel_ (0.0) ,
        m_solarPanelOutput_ (0.0) ,
        m_temperature_ (0.0) ,
        m_cpuUsage_ (0.0) ,
        m_memoryUsage_ (0.0) ,
        m_dataStorageUsage_ (0.0) ,
        m_antennaStatus_ (false) ,
        m_cameraStatus_ (false) {
    }   

    TelemetryData::TelemetryData (
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
        const dds::core::string& systemHealth)
        :
            m_satelliteId_( satelliteId ),
            m_timestamp_( timestamp ),
            m_batteryLevel_( batteryLevel ),
            m_solarPanelOutput_( solarPanelOutput ),
            m_temperature_( temperature ),
            m_cpuUsage_( cpuUsage ),
            m_memoryUsage_( memoryUsage ),
            m_dataStorageUsage_( dataStorageUsage ),
            m_antennaStatus_( antennaStatus ),
            m_cameraStatus_( cameraStatus ),
            m_systemHealth_( systemHealth ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TelemetryData::TelemetryData(TelemetryData&& other_) OMG_NOEXCEPT  :m_satelliteId_ (std::move(other_.m_satelliteId_))
    ,
    m_timestamp_ (std::move(other_.m_timestamp_))
    ,
    m_batteryLevel_ (std::move(other_.m_batteryLevel_))
    ,
    m_solarPanelOutput_ (std::move(other_.m_solarPanelOutput_))
    ,
    m_temperature_ (std::move(other_.m_temperature_))
    ,
    m_cpuUsage_ (std::move(other_.m_cpuUsage_))
    ,
    m_memoryUsage_ (std::move(other_.m_memoryUsage_))
    ,
    m_dataStorageUsage_ (std::move(other_.m_dataStorageUsage_))
    ,
    m_antennaStatus_ (std::move(other_.m_antennaStatus_))
    ,
    m_cameraStatus_ (std::move(other_.m_cameraStatus_))
    ,
    m_systemHealth_ (std::move(other_.m_systemHealth_))
    {
    } 

    TelemetryData& TelemetryData::operator=(TelemetryData&&  other_) OMG_NOEXCEPT {
        TelemetryData tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void TelemetryData::swap(TelemetryData& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_satelliteId_, other_.m_satelliteId_);
        swap(m_timestamp_, other_.m_timestamp_);
        swap(m_batteryLevel_, other_.m_batteryLevel_);
        swap(m_solarPanelOutput_, other_.m_solarPanelOutput_);
        swap(m_temperature_, other_.m_temperature_);
        swap(m_cpuUsage_, other_.m_cpuUsage_);
        swap(m_memoryUsage_, other_.m_memoryUsage_);
        swap(m_dataStorageUsage_, other_.m_dataStorageUsage_);
        swap(m_antennaStatus_, other_.m_antennaStatus_);
        swap(m_cameraStatus_, other_.m_cameraStatus_);
        swap(m_systemHealth_, other_.m_systemHealth_);
    }  

    bool TelemetryData::operator == (const TelemetryData& other_) const {
        if (m_satelliteId_ != other_.m_satelliteId_) {
            return false;
        }
        if (m_timestamp_ != other_.m_timestamp_) {
            return false;
        }
        if (m_batteryLevel_ != other_.m_batteryLevel_) {
            return false;
        }
        if (m_solarPanelOutput_ != other_.m_solarPanelOutput_) {
            return false;
        }
        if (m_temperature_ != other_.m_temperature_) {
            return false;
        }
        if (m_cpuUsage_ != other_.m_cpuUsage_) {
            return false;
        }
        if (m_memoryUsage_ != other_.m_memoryUsage_) {
            return false;
        }
        if (m_dataStorageUsage_ != other_.m_dataStorageUsage_) {
            return false;
        }
        if (m_antennaStatus_ != other_.m_antennaStatus_) {
            return false;
        }
        if (m_cameraStatus_ != other_.m_cameraStatus_) {
            return false;
        }
        if (m_systemHealth_ != other_.m_systemHealth_) {
            return false;
        }
        return true;
    }
    bool TelemetryData::operator != (const TelemetryData& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    dds::core::string& heartbeat::TelemetryData::satelliteId() OMG_NOEXCEPT {
        return m_satelliteId_;
    }

    const dds::core::string& heartbeat::TelemetryData::satelliteId() const OMG_NOEXCEPT {
        return m_satelliteId_;
    }

    void heartbeat::TelemetryData::satelliteId(const dds::core::string& value) {
        m_satelliteId_ = value;
    }

    rti::core::int64 heartbeat::TelemetryData::timestamp() const OMG_NOEXCEPT{
        return m_timestamp_;
    }

    void heartbeat::TelemetryData::timestamp(rti::core::int64 value) {
        m_timestamp_ = value;
    }

    double heartbeat::TelemetryData::batteryLevel() const OMG_NOEXCEPT{
        return m_batteryLevel_;
    }

    void heartbeat::TelemetryData::batteryLevel(double value) {
        m_batteryLevel_ = value;
    }

    double heartbeat::TelemetryData::solarPanelOutput() const OMG_NOEXCEPT{
        return m_solarPanelOutput_;
    }

    void heartbeat::TelemetryData::solarPanelOutput(double value) {
        m_solarPanelOutput_ = value;
    }

    double heartbeat::TelemetryData::temperature() const OMG_NOEXCEPT{
        return m_temperature_;
    }

    void heartbeat::TelemetryData::temperature(double value) {
        m_temperature_ = value;
    }

    double heartbeat::TelemetryData::cpuUsage() const OMG_NOEXCEPT{
        return m_cpuUsage_;
    }

    void heartbeat::TelemetryData::cpuUsage(double value) {
        m_cpuUsage_ = value;
    }

    double heartbeat::TelemetryData::memoryUsage() const OMG_NOEXCEPT{
        return m_memoryUsage_;
    }

    void heartbeat::TelemetryData::memoryUsage(double value) {
        m_memoryUsage_ = value;
    }

    double heartbeat::TelemetryData::dataStorageUsage() const OMG_NOEXCEPT{
        return m_dataStorageUsage_;
    }

    void heartbeat::TelemetryData::dataStorageUsage(double value) {
        m_dataStorageUsage_ = value;
    }

    bool heartbeat::TelemetryData::antennaStatus() const OMG_NOEXCEPT{
        return m_antennaStatus_;
    }

    void heartbeat::TelemetryData::antennaStatus(bool value) {
        m_antennaStatus_ = value;
    }

    bool heartbeat::TelemetryData::cameraStatus() const OMG_NOEXCEPT{
        return m_cameraStatus_;
    }

    void heartbeat::TelemetryData::cameraStatus(bool value) {
        m_cameraStatus_ = value;
    }

    dds::core::string& heartbeat::TelemetryData::systemHealth() OMG_NOEXCEPT {
        return m_systemHealth_;
    }

    const dds::core::string& heartbeat::TelemetryData::systemHealth() const OMG_NOEXCEPT {
        return m_systemHealth_;
    }

    void heartbeat::TelemetryData::systemHealth(const dds::core::string& value) {
        m_systemHealth_ = value;
    }

    std::ostream& operator << (std::ostream& o,const TelemetryData& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "satelliteId: " << sample.satelliteId()<<", ";
        o << "timestamp: " << sample.timestamp()<<", ";
        o << "batteryLevel: " << std::fixed << std::setprecision(6) <<sample.batteryLevel()<<", ";
        o << "solarPanelOutput: " << std::fixed << std::setprecision(6) <<sample.solarPanelOutput()<<", ";
        o << "temperature: " << std::fixed << std::setprecision(6) <<sample.temperature()<<", ";
        o << "cpuUsage: " << std::fixed << std::setprecision(6) <<sample.cpuUsage()<<", ";
        o << "memoryUsage: " << std::fixed << std::setprecision(6) <<sample.memoryUsage()<<", ";
        o << "dataStorageUsage: " << std::fixed << std::setprecision(6) <<sample.dataStorageUsage()<<", ";
        o << "antennaStatus: " << sample.antennaStatus()<<", ";
        o << "cameraStatus: " << sample.cameraStatus()<<", ";
        o << "systemHealth: " << sample.systemHealth() ;
        o <<"]";
        return o;
    }

    // ---- SatelliteInfo: 

    SatelliteInfo::SatelliteInfo() :
        m_latitude_ (0.0) ,
        m_longitude_ (0.0) ,
        m_altitude_ (0.0) ,
        m_velocity_ (0.0) ,
        m_timestamp_ (0ll) ,
        m_status_(heartbeat::SatelliteStatus::get_default()) {
    }   

    SatelliteInfo::SatelliteInfo (
        const dds::core::string& satelliteId,
        const dds::core::string& satelliteName,
        const dds::core::string& constellation,
        double latitude,
        double longitude,
        double altitude,
        double velocity,
        rti::core::int64 timestamp,
        const heartbeat::SatelliteStatus& status)
        :
            m_satelliteId_( satelliteId ),
            m_satelliteName_( satelliteName ),
            m_constellation_( constellation ),
            m_latitude_( latitude ),
            m_longitude_( longitude ),
            m_altitude_( altitude ),
            m_velocity_( velocity ),
            m_timestamp_( timestamp ),
            m_status_( status ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SatelliteInfo::SatelliteInfo(SatelliteInfo&& other_) OMG_NOEXCEPT  :m_satelliteId_ (std::move(other_.m_satelliteId_))
    ,
    m_satelliteName_ (std::move(other_.m_satelliteName_))
    ,
    m_constellation_ (std::move(other_.m_constellation_))
    ,
    m_latitude_ (std::move(other_.m_latitude_))
    ,
    m_longitude_ (std::move(other_.m_longitude_))
    ,
    m_altitude_ (std::move(other_.m_altitude_))
    ,
    m_velocity_ (std::move(other_.m_velocity_))
    ,
    m_timestamp_ (std::move(other_.m_timestamp_))
    ,
    m_status_ (std::move(other_.m_status_))
    {
    } 

    SatelliteInfo& SatelliteInfo::operator=(SatelliteInfo&&  other_) OMG_NOEXCEPT {
        SatelliteInfo tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void SatelliteInfo::swap(SatelliteInfo& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_satelliteId_, other_.m_satelliteId_);
        swap(m_satelliteName_, other_.m_satelliteName_);
        swap(m_constellation_, other_.m_constellation_);
        swap(m_latitude_, other_.m_latitude_);
        swap(m_longitude_, other_.m_longitude_);
        swap(m_altitude_, other_.m_altitude_);
        swap(m_velocity_, other_.m_velocity_);
        swap(m_timestamp_, other_.m_timestamp_);
        swap(m_status_, other_.m_status_);
    }  

    bool SatelliteInfo::operator == (const SatelliteInfo& other_) const {
        if (m_satelliteId_ != other_.m_satelliteId_) {
            return false;
        }
        if (m_satelliteName_ != other_.m_satelliteName_) {
            return false;
        }
        if (m_constellation_ != other_.m_constellation_) {
            return false;
        }
        if (m_latitude_ != other_.m_latitude_) {
            return false;
        }
        if (m_longitude_ != other_.m_longitude_) {
            return false;
        }
        if (m_altitude_ != other_.m_altitude_) {
            return false;
        }
        if (m_velocity_ != other_.m_velocity_) {
            return false;
        }
        if (m_timestamp_ != other_.m_timestamp_) {
            return false;
        }
        if (m_status_ != other_.m_status_) {
            return false;
        }
        return true;
    }
    bool SatelliteInfo::operator != (const SatelliteInfo& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    dds::core::string& heartbeat::SatelliteInfo::satelliteId() OMG_NOEXCEPT {
        return m_satelliteId_;
    }

    const dds::core::string& heartbeat::SatelliteInfo::satelliteId() const OMG_NOEXCEPT {
        return m_satelliteId_;
    }

    void heartbeat::SatelliteInfo::satelliteId(const dds::core::string& value) {
        m_satelliteId_ = value;
    }

    dds::core::string& heartbeat::SatelliteInfo::satelliteName() OMG_NOEXCEPT {
        return m_satelliteName_;
    }

    const dds::core::string& heartbeat::SatelliteInfo::satelliteName() const OMG_NOEXCEPT {
        return m_satelliteName_;
    }

    void heartbeat::SatelliteInfo::satelliteName(const dds::core::string& value) {
        m_satelliteName_ = value;
    }

    dds::core::string& heartbeat::SatelliteInfo::constellation() OMG_NOEXCEPT {
        return m_constellation_;
    }

    const dds::core::string& heartbeat::SatelliteInfo::constellation() const OMG_NOEXCEPT {
        return m_constellation_;
    }

    void heartbeat::SatelliteInfo::constellation(const dds::core::string& value) {
        m_constellation_ = value;
    }

    double heartbeat::SatelliteInfo::latitude() const OMG_NOEXCEPT{
        return m_latitude_;
    }

    void heartbeat::SatelliteInfo::latitude(double value) {
        m_latitude_ = value;
    }

    double heartbeat::SatelliteInfo::longitude() const OMG_NOEXCEPT{
        return m_longitude_;
    }

    void heartbeat::SatelliteInfo::longitude(double value) {
        m_longitude_ = value;
    }

    double heartbeat::SatelliteInfo::altitude() const OMG_NOEXCEPT{
        return m_altitude_;
    }

    void heartbeat::SatelliteInfo::altitude(double value) {
        m_altitude_ = value;
    }

    double heartbeat::SatelliteInfo::velocity() const OMG_NOEXCEPT{
        return m_velocity_;
    }

    void heartbeat::SatelliteInfo::velocity(double value) {
        m_velocity_ = value;
    }

    rti::core::int64 heartbeat::SatelliteInfo::timestamp() const OMG_NOEXCEPT{
        return m_timestamp_;
    }

    void heartbeat::SatelliteInfo::timestamp(rti::core::int64 value) {
        m_timestamp_ = value;
    }

    heartbeat::SatelliteStatus& heartbeat::SatelliteInfo::status() OMG_NOEXCEPT {
        return m_status_;
    }

    const heartbeat::SatelliteStatus& heartbeat::SatelliteInfo::status() const OMG_NOEXCEPT {
        return m_status_;
    }

    void heartbeat::SatelliteInfo::status(const heartbeat::SatelliteStatus& value) {
        m_status_ = value;
    }

    std::ostream& operator << (std::ostream& o,const SatelliteInfo& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "satelliteId: " << sample.satelliteId()<<", ";
        o << "satelliteName: " << sample.satelliteName()<<", ";
        o << "constellation: " << sample.constellation()<<", ";
        o << "latitude: " << std::fixed << std::setprecision(6) <<sample.latitude()<<", ";
        o << "longitude: " << std::fixed << std::setprecision(6) <<sample.longitude()<<", ";
        o << "altitude: " << std::fixed << std::setprecision(6) <<sample.altitude()<<", ";
        o << "velocity: " << std::fixed << std::setprecision(6) <<sample.velocity()<<", ";
        o << "timestamp: " << sample.timestamp()<<", ";
        o << "status: " << sample.status() ;
        o <<"]";
        return o;
    }

    // ---- HeartbeatMessage: 

    HeartbeatMessage::HeartbeatMessage() :
        m_uptime_ (0) {
    }   

    HeartbeatMessage::HeartbeatMessage (
        const MessageHeader& header,
        const heartbeat::SatelliteInfo& satelliteInfo,
        const heartbeat::TelemetryData& telemetry,
        int32_t uptime)
        :
            m_header_( header ),
            m_satelliteInfo_( satelliteInfo ),
            m_telemetry_( telemetry ),
            m_uptime_( uptime ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HeartbeatMessage::HeartbeatMessage(HeartbeatMessage&& other_) OMG_NOEXCEPT  :m_header_ (std::move(other_.m_header_))
    ,
    m_satelliteInfo_ (std::move(other_.m_satelliteInfo_))
    ,
    m_telemetry_ (std::move(other_.m_telemetry_))
    ,
    m_uptime_ (std::move(other_.m_uptime_))
    {
    } 

    HeartbeatMessage& HeartbeatMessage::operator=(HeartbeatMessage&&  other_) OMG_NOEXCEPT {
        HeartbeatMessage tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void HeartbeatMessage::swap(HeartbeatMessage& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_header_, other_.m_header_);
        swap(m_satelliteInfo_, other_.m_satelliteInfo_);
        swap(m_telemetry_, other_.m_telemetry_);
        swap(m_uptime_, other_.m_uptime_);
    }  

    bool HeartbeatMessage::operator == (const HeartbeatMessage& other_) const {
        if (m_header_ != other_.m_header_) {
            return false;
        }
        if (m_satelliteInfo_ != other_.m_satelliteInfo_) {
            return false;
        }
        if (m_telemetry_ != other_.m_telemetry_) {
            return false;
        }
        if (m_uptime_ != other_.m_uptime_) {
            return false;
        }
        return true;
    }
    bool HeartbeatMessage::operator != (const HeartbeatMessage& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    MessageHeader& heartbeat::HeartbeatMessage::header() OMG_NOEXCEPT {
        return m_header_;
    }

    const MessageHeader& heartbeat::HeartbeatMessage::header() const OMG_NOEXCEPT {
        return m_header_;
    }

    void heartbeat::HeartbeatMessage::header(const MessageHeader& value) {
        m_header_ = value;
    }

    heartbeat::SatelliteInfo& heartbeat::HeartbeatMessage::satelliteInfo() OMG_NOEXCEPT {
        return m_satelliteInfo_;
    }

    const heartbeat::SatelliteInfo& heartbeat::HeartbeatMessage::satelliteInfo() const OMG_NOEXCEPT {
        return m_satelliteInfo_;
    }

    void heartbeat::HeartbeatMessage::satelliteInfo(const heartbeat::SatelliteInfo& value) {
        m_satelliteInfo_ = value;
    }

    heartbeat::TelemetryData& heartbeat::HeartbeatMessage::telemetry() OMG_NOEXCEPT {
        return m_telemetry_;
    }

    const heartbeat::TelemetryData& heartbeat::HeartbeatMessage::telemetry() const OMG_NOEXCEPT {
        return m_telemetry_;
    }

    void heartbeat::HeartbeatMessage::telemetry(const heartbeat::TelemetryData& value) {
        m_telemetry_ = value;
    }

    int32_t heartbeat::HeartbeatMessage::uptime() const OMG_NOEXCEPT{
        return m_uptime_;
    }

    void heartbeat::HeartbeatMessage::uptime(int32_t value) {
        m_uptime_ = value;
    }

    std::ostream& operator << (std::ostream& o,const HeartbeatMessage& sample){
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "header: " << sample.header()<<", ";
        o << "satelliteInfo: " << sample.satelliteInfo()<<", ";
        o << "telemetry: " << sample.telemetry()<<", ";
        o << "uptime: " << sample.uptime() ;
        o <<"]";
        return o;
    }

} // namespace heartbeat  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::EnumType& dynamic_type<heartbeat::SatelliteStatus>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(heartbeat_SatelliteStatus_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<heartbeat::TelemetryData>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(heartbeat_TelemetryData_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<heartbeat::SatelliteInfo>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(heartbeat_SatelliteInfo_c_get_typecode())));
        }

        const dds::core::xtypes::StructType& dynamic_type<heartbeat::HeartbeatMessage>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(heartbeat_HeartbeatMessage_c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<heartbeat::TelemetryData>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                heartbeat_TelemetryData_cPlugin_new,
                heartbeat_TelemetryData_cPlugin_delete);
        }

        void topic_type_support<heartbeat::TelemetryData>::initialize_sample(heartbeat::TelemetryData& sample){

            heartbeat_TelemetryData_c* native_sample=reinterpret_cast<heartbeat_TelemetryData_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            heartbeat_TelemetryData_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=heartbeat_TelemetryData_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<heartbeat::TelemetryData>::to_cdr_buffer(
            std::vector<char>& buffer, const heartbeat::TelemetryData& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = heartbeat_TelemetryData_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const heartbeat_TelemetryData_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = heartbeat_TelemetryData_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const heartbeat_TelemetryData_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<heartbeat::TelemetryData>::from_cdr_buffer(heartbeat::TelemetryData& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = heartbeat_TelemetryData_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<heartbeat_TelemetryData_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create heartbeat::TelemetryData from cdr buffer");
        }

        void topic_type_support<heartbeat::SatelliteInfo>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                heartbeat_SatelliteInfo_cPlugin_new,
                heartbeat_SatelliteInfo_cPlugin_delete);
        }

        void topic_type_support<heartbeat::SatelliteInfo>::initialize_sample(heartbeat::SatelliteInfo& sample){

            heartbeat_SatelliteInfo_c* native_sample=reinterpret_cast<heartbeat_SatelliteInfo_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            heartbeat_SatelliteInfo_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=heartbeat_SatelliteInfo_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<heartbeat::SatelliteInfo>::to_cdr_buffer(
            std::vector<char>& buffer, const heartbeat::SatelliteInfo& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = heartbeat_SatelliteInfo_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const heartbeat_SatelliteInfo_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = heartbeat_SatelliteInfo_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const heartbeat_SatelliteInfo_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<heartbeat::SatelliteInfo>::from_cdr_buffer(heartbeat::SatelliteInfo& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = heartbeat_SatelliteInfo_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<heartbeat_SatelliteInfo_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create heartbeat::SatelliteInfo from cdr buffer");
        }

        void topic_type_support<heartbeat::HeartbeatMessage>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                heartbeat_HeartbeatMessage_cPlugin_new,
                heartbeat_HeartbeatMessage_cPlugin_delete);
        }

        void topic_type_support<heartbeat::HeartbeatMessage>::initialize_sample(heartbeat::HeartbeatMessage& sample){

            heartbeat_HeartbeatMessage_c* native_sample=reinterpret_cast<heartbeat_HeartbeatMessage_c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            heartbeat_HeartbeatMessage_c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=heartbeat_HeartbeatMessage_c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<heartbeat::HeartbeatMessage>::to_cdr_buffer(
            std::vector<char>& buffer, const heartbeat::HeartbeatMessage& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = heartbeat_HeartbeatMessage_cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const heartbeat_HeartbeatMessage_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = heartbeat_HeartbeatMessage_cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const heartbeat_HeartbeatMessage_c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<heartbeat::HeartbeatMessage>::from_cdr_buffer(heartbeat::HeartbeatMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = heartbeat_HeartbeatMessage_cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<heartbeat_HeartbeatMessage_c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create heartbeat::HeartbeatMessage from cdr buffer");
        }

    }
}  

