/**
 * Permit.io API
 *  Authorization as a service 
 *
 * The version of the OpenAPI document: 2.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIInviteStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIInviteStatus::OAIInviteStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInviteStatus::OAIInviteStatus() {
    this->initializeModel();
}

OAIInviteStatus::~OAIInviteStatus() {}

void OAIInviteStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIInviteStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIInviteStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("pending", Qt::CaseInsensitive) == 0) {
        m_value = eOAIInviteStatus::PENDING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("accepted", Qt::CaseInsensitive) == 0) {
        m_value = eOAIInviteStatus::ACCEPTED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("failed", Qt::CaseInsensitive) == 0) {
        m_value = eOAIInviteStatus::FAILED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("canceled", Qt::CaseInsensitive) == 0) {
        m_value = eOAIInviteStatus::CANCELED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIInviteStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIInviteStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIInviteStatus::PENDING:
            val = "pending";
            break;
        case eOAIInviteStatus::ACCEPTED:
            val = "accepted";
            break;
        case eOAIInviteStatus::FAILED:
            val = "failed";
            break;
        case eOAIInviteStatus::CANCELED:
            val = "canceled";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIInviteStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIInviteStatus::eOAIInviteStatus OAIInviteStatus::getValue() const {
    return m_value;
}

void OAIInviteStatus::setValue(const OAIInviteStatus::eOAIInviteStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIInviteStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAIInviteStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
