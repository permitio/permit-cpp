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

#include "OAIMemberAccessObj.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMemberAccessObj::OAIMemberAccessObj(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMemberAccessObj::OAIMemberAccessObj() {
    this->initializeModel();
}

OAIMemberAccessObj::~OAIMemberAccessObj() {}

void OAIMemberAccessObj::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIMemberAccessObj::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIMemberAccessObj::fromJson(QString jsonString) {
    
    if ( jsonString.compare("org", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMemberAccessObj::ORG;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("project", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMemberAccessObj::PROJECT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("env", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMemberAccessObj::ENV;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIMemberAccessObj::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIMemberAccessObj::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIMemberAccessObj::ORG:
            val = "org";
            break;
        case eOAIMemberAccessObj::PROJECT:
            val = "project";
            break;
        case eOAIMemberAccessObj::ENV:
            val = "env";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIMemberAccessObj::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIMemberAccessObj::eOAIMemberAccessObj OAIMemberAccessObj::getValue() const {
    return m_value;
}

void OAIMemberAccessObj::setValue(const OAIMemberAccessObj::eOAIMemberAccessObj& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIMemberAccessObj::isSet() const {
    
    return m_value_isSet;
}

bool OAIMemberAccessObj::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI