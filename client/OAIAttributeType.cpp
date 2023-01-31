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

#include "OAIAttributeType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAttributeType::OAIAttributeType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAttributeType::OAIAttributeType() {
    this->initializeModel();
}

OAIAttributeType::~OAIAttributeType() {}

void OAIAttributeType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIAttributeType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIAttributeType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("bool", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAttributeType::BOOL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("number", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAttributeType::NUMBER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("string", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAttributeType::STRING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("time", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAttributeType::TIME;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("array", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAttributeType::ARRAY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("json", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAttributeType::JSON;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIAttributeType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIAttributeType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIAttributeType::BOOL:
            val = "bool";
            break;
        case eOAIAttributeType::NUMBER:
            val = "number";
            break;
        case eOAIAttributeType::STRING:
            val = "string";
            break;
        case eOAIAttributeType::TIME:
            val = "time";
            break;
        case eOAIAttributeType::ARRAY:
            val = "array";
            break;
        case eOAIAttributeType::JSON:
            val = "json";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIAttributeType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIAttributeType::eOAIAttributeType OAIAttributeType::getValue() const {
    return m_value;
}

void OAIAttributeType::setValue(const OAIAttributeType::eOAIAttributeType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIAttributeType::isSet() const {
    
    return m_value_isSet;
}

bool OAIAttributeType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI