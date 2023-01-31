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

#include "OAIOrganizationUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrganizationUpdate::OAIOrganizationUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrganizationUpdate::OAIOrganizationUpdate() {
    this->initializeModel();
}

OAIOrganizationUpdate::~OAIOrganizationUpdate() {}

void OAIOrganizationUpdate::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_settings_isSet = false;
    m_settings_isValid = false;
}

void OAIOrganizationUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrganizationUpdate::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_settings_isValid = ::OpenAPI::fromJsonValue(settings, json[QString("settings")]);
    m_settings_isSet = !json[QString("settings")].isNull() && m_settings_isValid;
}

QString OAIOrganizationUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrganizationUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_settings_isSet) {
        obj.insert(QString("settings"), ::OpenAPI::toJsonValue(settings));
    }
    return obj;
}

QString OAIOrganizationUpdate::getName() const {
    return name;
}
void OAIOrganizationUpdate::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIOrganizationUpdate::is_name_Set() const{
    return m_name_isSet;
}

bool OAIOrganizationUpdate::is_name_Valid() const{
    return m_name_isValid;
}

OAIObject OAIOrganizationUpdate::getSettings() const {
    return settings;
}
void OAIOrganizationUpdate::setSettings(const OAIObject &settings) {
    this->settings = settings;
    this->m_settings_isSet = true;
}

bool OAIOrganizationUpdate::is_settings_Set() const{
    return m_settings_isSet;
}

bool OAIOrganizationUpdate::is_settings_Valid() const{
    return m_settings_isValid;
}

bool OAIOrganizationUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_settings_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrganizationUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI