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

#include "OAIElementsConfigRuntimeRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIElementsConfigRuntimeRead::OAIElementsConfigRuntimeRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIElementsConfigRuntimeRead::OAIElementsConfigRuntimeRead() {
    this->initializeModel();
}

OAIElementsConfigRuntimeRead::~OAIElementsConfigRuntimeRead() {}

void OAIElementsConfigRuntimeRead::initializeModel() {

    m_config_isSet = false;
    m_config_isValid = false;

    m_current_permission_level_isSet = false;
    m_current_permission_level_isValid = false;
}

void OAIElementsConfigRuntimeRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIElementsConfigRuntimeRead::fromJsonObject(QJsonObject json) {

    m_config_isValid = ::OpenAPI::fromJsonValue(config, json[QString("config")]);
    m_config_isSet = !json[QString("config")].isNull() && m_config_isValid;

    m_current_permission_level_isValid = ::OpenAPI::fromJsonValue(current_permission_level, json[QString("current_permission_level")]);
    m_current_permission_level_isSet = !json[QString("current_permission_level")].isNull() && m_current_permission_level_isValid;
}

QString OAIElementsConfigRuntimeRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIElementsConfigRuntimeRead::asJsonObject() const {
    QJsonObject obj;
    if (config.isSet()) {
        obj.insert(QString("config"), ::OpenAPI::toJsonValue(config));
    }
    if (current_permission_level.isSet()) {
        obj.insert(QString("current_permission_level"), ::OpenAPI::toJsonValue(current_permission_level));
    }
    return obj;
}

OAIElementsConfigRead OAIElementsConfigRuntimeRead::getConfig() const {
    return config;
}
void OAIElementsConfigRuntimeRead::setConfig(const OAIElementsConfigRead &config) {
    this->config = config;
    this->m_config_isSet = true;
}

bool OAIElementsConfigRuntimeRead::is_config_Set() const{
    return m_config_isSet;
}

bool OAIElementsConfigRuntimeRead::is_config_Valid() const{
    return m_config_isValid;
}

OAIElementsPermissionLevel OAIElementsConfigRuntimeRead::getCurrentPermissionLevel() const {
    return current_permission_level;
}
void OAIElementsConfigRuntimeRead::setCurrentPermissionLevel(const OAIElementsPermissionLevel &current_permission_level) {
    this->current_permission_level = current_permission_level;
    this->m_current_permission_level_isSet = true;
}

bool OAIElementsConfigRuntimeRead::is_current_permission_level_Set() const{
    return m_current_permission_level_isSet;
}

bool OAIElementsConfigRuntimeRead::is_current_permission_level_Valid() const{
    return m_current_permission_level_isValid;
}

bool OAIElementsConfigRuntimeRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (config.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (current_permission_level.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIElementsConfigRuntimeRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_config_isValid && m_current_permission_level_isValid && true;
}

} // namespace OpenAPI