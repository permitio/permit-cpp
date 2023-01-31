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

#include "OAIEnvironmentUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEnvironmentUpdate::OAIEnvironmentUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEnvironmentUpdate::OAIEnvironmentUpdate() {
    this->initializeModel();
}

OAIEnvironmentUpdate::~OAIEnvironmentUpdate() {}

void OAIEnvironmentUpdate::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_custom_branch_name_isSet = false;
    m_custom_branch_name_isValid = false;
}

void OAIEnvironmentUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEnvironmentUpdate::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_custom_branch_name_isValid = ::OpenAPI::fromJsonValue(custom_branch_name, json[QString("custom_branch_name")]);
    m_custom_branch_name_isSet = !json[QString("custom_branch_name")].isNull() && m_custom_branch_name_isValid;
}

QString OAIEnvironmentUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEnvironmentUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (m_custom_branch_name_isSet) {
        obj.insert(QString("custom_branch_name"), ::OpenAPI::toJsonValue(custom_branch_name));
    }
    return obj;
}

QString OAIEnvironmentUpdate::getName() const {
    return name;
}
void OAIEnvironmentUpdate::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIEnvironmentUpdate::is_name_Set() const{
    return m_name_isSet;
}

bool OAIEnvironmentUpdate::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIEnvironmentUpdate::getDescription() const {
    return description;
}
void OAIEnvironmentUpdate::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIEnvironmentUpdate::is_description_Set() const{
    return m_description_isSet;
}

bool OAIEnvironmentUpdate::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIEnvironmentUpdate::getCustomBranchName() const {
    return custom_branch_name;
}
void OAIEnvironmentUpdate::setCustomBranchName(const QString &custom_branch_name) {
    this->custom_branch_name = custom_branch_name;
    this->m_custom_branch_name_isSet = true;
}

bool OAIEnvironmentUpdate::is_custom_branch_name_Set() const{
    return m_custom_branch_name_isSet;
}

bool OAIEnvironmentUpdate::is_custom_branch_name_Valid() const{
    return m_custom_branch_name_isValid;
}

bool OAIEnvironmentUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_branch_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEnvironmentUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
