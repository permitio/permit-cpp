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

#include "OAIResourceRoleUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResourceRoleUpdate::OAIResourceRoleUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResourceRoleUpdate::OAIResourceRoleUpdate() {
    this->initializeModel();
}

OAIResourceRoleUpdate::~OAIResourceRoleUpdate() {}

void OAIResourceRoleUpdate::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;

    m_extends_isSet = false;
    m_extends_isValid = false;
}

void OAIResourceRoleUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResourceRoleUpdate::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_permissions_isValid = ::OpenAPI::fromJsonValue(permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;

    m_extends_isValid = ::OpenAPI::fromJsonValue(extends, json[QString("extends")]);
    m_extends_isSet = !json[QString("extends")].isNull() && m_extends_isValid;
}

QString OAIResourceRoleUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResourceRoleUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (permissions.size() > 0) {
        obj.insert(QString("permissions"), ::OpenAPI::toJsonValue(permissions));
    }
    if (extends.size() > 0) {
        obj.insert(QString("extends"), ::OpenAPI::toJsonValue(extends));
    }
    return obj;
}

QString OAIResourceRoleUpdate::getName() const {
    return name;
}
void OAIResourceRoleUpdate::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIResourceRoleUpdate::is_name_Set() const{
    return m_name_isSet;
}

bool OAIResourceRoleUpdate::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIResourceRoleUpdate::getDescription() const {
    return description;
}
void OAIResourceRoleUpdate::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIResourceRoleUpdate::is_description_Set() const{
    return m_description_isSet;
}

bool OAIResourceRoleUpdate::is_description_Valid() const{
    return m_description_isValid;
}

QList<QString> OAIResourceRoleUpdate::getPermissions() const {
    return permissions;
}
void OAIResourceRoleUpdate::setPermissions(const QList<QString> &permissions) {
    this->permissions = permissions;
    this->m_permissions_isSet = true;
}

bool OAIResourceRoleUpdate::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAIResourceRoleUpdate::is_permissions_Valid() const{
    return m_permissions_isValid;
}

QList<QString> OAIResourceRoleUpdate::getExtends() const {
    return extends;
}
void OAIResourceRoleUpdate::setExtends(const QList<QString> &extends) {
    this->extends = extends;
    this->m_extends_isSet = true;
}

bool OAIResourceRoleUpdate::is_extends_Set() const{
    return m_extends_isSet;
}

bool OAIResourceRoleUpdate::is_extends_Valid() const{
    return m_extends_isValid;
}

bool OAIResourceRoleUpdate::isSet() const {
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

        if (permissions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (extends.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResourceRoleUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
