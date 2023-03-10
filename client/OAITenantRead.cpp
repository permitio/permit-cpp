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

#include "OAITenantRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITenantRead::OAITenantRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITenantRead::OAITenantRead() {
    this->initializeModel();
}

OAITenantRead::~OAITenantRead() {}

void OAITenantRead::initializeModel() {

    m_key_isSet = false;
    m_key_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_organization_id_isSet = false;
    m_organization_id_isValid = false;

    m_project_id_isSet = false;
    m_project_id_isValid = false;

    m_environment_id_isSet = false;
    m_environment_id_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;

    m_last_action_at_isSet = false;
    m_last_action_at_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;
}

void OAITenantRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITenantRead::fromJsonObject(QJsonObject json) {

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_organization_id_isValid = ::OpenAPI::fromJsonValue(organization_id, json[QString("organization_id")]);
    m_organization_id_isSet = !json[QString("organization_id")].isNull() && m_organization_id_isValid;

    m_project_id_isValid = ::OpenAPI::fromJsonValue(project_id, json[QString("project_id")]);
    m_project_id_isSet = !json[QString("project_id")].isNull() && m_project_id_isValid;

    m_environment_id_isValid = ::OpenAPI::fromJsonValue(environment_id, json[QString("environment_id")]);
    m_environment_id_isSet = !json[QString("environment_id")].isNull() && m_environment_id_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_updated_at_isValid = ::OpenAPI::fromJsonValue(updated_at, json[QString("updated_at")]);
    m_updated_at_isSet = !json[QString("updated_at")].isNull() && m_updated_at_isValid;

    m_last_action_at_isValid = ::OpenAPI::fromJsonValue(last_action_at, json[QString("last_action_at")]);
    m_last_action_at_isSet = !json[QString("last_action_at")].isNull() && m_last_action_at_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;
}

QString OAITenantRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITenantRead::asJsonObject() const {
    QJsonObject obj;
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_organization_id_isSet) {
        obj.insert(QString("organization_id"), ::OpenAPI::toJsonValue(organization_id));
    }
    if (m_project_id_isSet) {
        obj.insert(QString("project_id"), ::OpenAPI::toJsonValue(project_id));
    }
    if (m_environment_id_isSet) {
        obj.insert(QString("environment_id"), ::OpenAPI::toJsonValue(environment_id));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(created_at));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("updated_at"), ::OpenAPI::toJsonValue(updated_at));
    }
    if (m_last_action_at_isSet) {
        obj.insert(QString("last_action_at"), ::OpenAPI::toJsonValue(last_action_at));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (m_attributes_isSet) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    return obj;
}

QString OAITenantRead::getKey() const {
    return key;
}
void OAITenantRead::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAITenantRead::is_key_Set() const{
    return m_key_isSet;
}

bool OAITenantRead::is_key_Valid() const{
    return m_key_isValid;
}

QString OAITenantRead::getId() const {
    return id;
}
void OAITenantRead::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAITenantRead::is_id_Set() const{
    return m_id_isSet;
}

bool OAITenantRead::is_id_Valid() const{
    return m_id_isValid;
}

QString OAITenantRead::getOrganizationId() const {
    return organization_id;
}
void OAITenantRead::setOrganizationId(const QString &organization_id) {
    this->organization_id = organization_id;
    this->m_organization_id_isSet = true;
}

bool OAITenantRead::is_organization_id_Set() const{
    return m_organization_id_isSet;
}

bool OAITenantRead::is_organization_id_Valid() const{
    return m_organization_id_isValid;
}

QString OAITenantRead::getProjectId() const {
    return project_id;
}
void OAITenantRead::setProjectId(const QString &project_id) {
    this->project_id = project_id;
    this->m_project_id_isSet = true;
}

bool OAITenantRead::is_project_id_Set() const{
    return m_project_id_isSet;
}

bool OAITenantRead::is_project_id_Valid() const{
    return m_project_id_isValid;
}

QString OAITenantRead::getEnvironmentId() const {
    return environment_id;
}
void OAITenantRead::setEnvironmentId(const QString &environment_id) {
    this->environment_id = environment_id;
    this->m_environment_id_isSet = true;
}

bool OAITenantRead::is_environment_id_Set() const{
    return m_environment_id_isSet;
}

bool OAITenantRead::is_environment_id_Valid() const{
    return m_environment_id_isValid;
}

QDateTime OAITenantRead::getCreatedAt() const {
    return created_at;
}
void OAITenantRead::setCreatedAt(const QDateTime &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool OAITenantRead::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAITenantRead::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QDateTime OAITenantRead::getUpdatedAt() const {
    return updated_at;
}
void OAITenantRead::setUpdatedAt(const QDateTime &updated_at) {
    this->updated_at = updated_at;
    this->m_updated_at_isSet = true;
}

bool OAITenantRead::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool OAITenantRead::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

QDateTime OAITenantRead::getLastActionAt() const {
    return last_action_at;
}
void OAITenantRead::setLastActionAt(const QDateTime &last_action_at) {
    this->last_action_at = last_action_at;
    this->m_last_action_at_isSet = true;
}

bool OAITenantRead::is_last_action_at_Set() const{
    return m_last_action_at_isSet;
}

bool OAITenantRead::is_last_action_at_Valid() const{
    return m_last_action_at_isValid;
}

QString OAITenantRead::getName() const {
    return name;
}
void OAITenantRead::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAITenantRead::is_name_Set() const{
    return m_name_isSet;
}

bool OAITenantRead::is_name_Valid() const{
    return m_name_isValid;
}

QString OAITenantRead::getDescription() const {
    return description;
}
void OAITenantRead::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAITenantRead::is_description_Set() const{
    return m_description_isSet;
}

bool OAITenantRead::is_description_Valid() const{
    return m_description_isValid;
}

OAIObject OAITenantRead::getAttributes() const {
    return attributes;
}
void OAITenantRead::setAttributes(const OAIObject &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAITenantRead::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAITenantRead::is_attributes_Valid() const{
    return m_attributes_isValid;
}

bool OAITenantRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_organization_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_project_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_environment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_action_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_attributes_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITenantRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_key_isValid && m_id_isValid && m_organization_id_isValid && m_project_id_isValid && m_environment_id_isValid && m_created_at_isValid && m_updated_at_isValid && m_last_action_at_isValid && m_name_isValid && true;
}

} // namespace OpenAPI
