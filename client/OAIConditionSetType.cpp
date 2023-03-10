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

#include "OAIConditionSetType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIConditionSetType::OAIConditionSetType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIConditionSetType::OAIConditionSetType() {
    this->initializeModel();
}

OAIConditionSetType::~OAIConditionSetType() {}

void OAIConditionSetType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIConditionSetType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIConditionSetType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("userset", Qt::CaseInsensitive) == 0) {
        m_value = eOAIConditionSetType::USERSET;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("resourceset", Qt::CaseInsensitive) == 0) {
        m_value = eOAIConditionSetType::RESOURCESET;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIConditionSetType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIConditionSetType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIConditionSetType::USERSET:
            val = "userset";
            break;
        case eOAIConditionSetType::RESOURCESET:
            val = "resourceset";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIConditionSetType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIConditionSetType::eOAIConditionSetType OAIConditionSetType::getValue() const {
    return m_value;
}

void OAIConditionSetType::setValue(const OAIConditionSetType::eOAIConditionSetType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIConditionSetType::isSet() const {
    
    return m_value_isSet;
}

bool OAIConditionSetType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
