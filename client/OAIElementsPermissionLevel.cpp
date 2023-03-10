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

#include "OAIElementsPermissionLevel.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIElementsPermissionLevel::OAIElementsPermissionLevel(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIElementsPermissionLevel::OAIElementsPermissionLevel() {
    this->initializeModel();
}

OAIElementsPermissionLevel::~OAIElementsPermissionLevel() {}

void OAIElementsPermissionLevel::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIElementsPermissionLevel::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIElementsPermissionLevel::fromJson(QString jsonString) {
    
    if ( jsonString.compare("LEVEL_1", Qt::CaseInsensitive) == 0) {
        m_value = eOAIElementsPermissionLevel::LEVEL_1;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("LEVEL_2", Qt::CaseInsensitive) == 0) {
        m_value = eOAIElementsPermissionLevel::LEVEL_2;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("LEVEL_3", Qt::CaseInsensitive) == 0) {
        m_value = eOAIElementsPermissionLevel::LEVEL_3;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("LEVEL_4", Qt::CaseInsensitive) == 0) {
        m_value = eOAIElementsPermissionLevel::LEVEL_4;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("HIDDEN", Qt::CaseInsensitive) == 0) {
        m_value = eOAIElementsPermissionLevel::HIDDEN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UNCONFIGURED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIElementsPermissionLevel::UNCONFIGURED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIElementsPermissionLevel::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIElementsPermissionLevel::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIElementsPermissionLevel::LEVEL_1:
            val = "LEVEL_1";
            break;
        case eOAIElementsPermissionLevel::LEVEL_2:
            val = "LEVEL_2";
            break;
        case eOAIElementsPermissionLevel::LEVEL_3:
            val = "LEVEL_3";
            break;
        case eOAIElementsPermissionLevel::LEVEL_4:
            val = "LEVEL_4";
            break;
        case eOAIElementsPermissionLevel::HIDDEN:
            val = "HIDDEN";
            break;
        case eOAIElementsPermissionLevel::UNCONFIGURED:
            val = "UNCONFIGURED";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIElementsPermissionLevel::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIElementsPermissionLevel::eOAIElementsPermissionLevel OAIElementsPermissionLevel::getValue() const {
    return m_value;
}

void OAIElementsPermissionLevel::setValue(const OAIElementsPermissionLevel::eOAIElementsPermissionLevel& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIElementsPermissionLevel::isSet() const {
    
    return m_value_isSet;
}

bool OAIElementsPermissionLevel::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
