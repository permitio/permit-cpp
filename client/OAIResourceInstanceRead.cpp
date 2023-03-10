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

#include "OAIResourceInstanceRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResourceInstanceRead::OAIResourceInstanceRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResourceInstanceRead::OAIResourceInstanceRead() {
    this->initializeModel();
}

OAIResourceInstanceRead::~OAIResourceInstanceRead() {}

void OAIResourceInstanceRead::initializeModel() {

    m_key_isSet = false;
    m_key_isValid = false;

    m_tenant_isSet = false;
    m_tenant_isValid = false;

    m_resource_isSet = false;
    m_resource_isValid = false;

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

    m_resource_id_isSet = false;
    m_resource_id_isValid = false;

    m_tenant_id_isSet = false;
    m_tenant_id_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;
}

void OAIResourceInstanceRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResourceInstanceRead::fromJsonObject(QJsonObject json) {

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_tenant_isValid = ::OpenAPI::fromJsonValue(tenant, json[QString("tenant")]);
    m_tenant_isSet = !json[QString("tenant")].isNull() && m_tenant_isValid;

    m_resource_isValid = ::OpenAPI::fromJsonValue(resource, json[QString("resource")]);
    m_resource_isSet = !json[QString("resource")].isNull() && m_resource_isValid;

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

    m_resource_id_isValid = ::OpenAPI::fromJsonValue(resource_id, json[QString("resource_id")]);
    m_resource_id_isSet = !json[QString("resource_id")].isNull() && m_resource_id_isValid;

    m_tenant_id_isValid = ::OpenAPI::fromJsonValue(tenant_id, json[QString("tenant_id")]);
    m_tenant_id_isSet = !json[QString("tenant_id")].isNull() && m_tenant_id_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;
}

QString OAIResourceInstanceRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResourceInstanceRead::asJsonObject() const {
    QJsonObject obj;
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    if (m_tenant_isSet) {
        obj.insert(QString("tenant"), ::OpenAPI::toJsonValue(tenant));
    }
    if (m_resource_isSet) {
        obj.insert(QString("resource"), ::OpenAPI::toJsonValue(resource));
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
    if (m_resource_id_isSet) {
        obj.insert(QString("resource_id"), ::OpenAPI::toJsonValue(resource_id));
    }
    if (m_tenant_id_isSet) {
        obj.insert(QString("tenant_id"), ::OpenAPI::toJsonValue(tenant_id));
    }
    if (m_attributes_isSet) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    return obj;
}

QString OAIResourceInstanceRead::getKey() const {
    return key;
}
void OAIResourceInstanceRead::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIResourceInstanceRead::is_key_Set() const{
    return m_key_isSet;
}

bool OAIResourceInstanceRead::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIResourceInstanceRead::getTenant() const {
    return tenant;
}
void OAIResourceInstanceRead::setTenant(const QString &tenant) {
    this->tenant = tenant;
    this->m_tenant_isSet = true;
}

bool OAIResourceInstanceRead::is_tenant_Set() const{
    return m_tenant_isSet;
}

bool OAIResourceInstanceRead::is_tenant_Valid() const{
    return m_tenant_isValid;
}

QString OAIResourceInstanceRead::getResource() const {
    return resource;
}
void OAIResourceInstanceRead::setResource(const QString &resource) {
    this->resource = resource;
    this->m_resource_isSet = true;
}

bool OAIResourceInstanceRead::is_resource_Set() const{
    return m_resource_isSet;
}

bool OAIResourceInstanceRead::is_resource_Valid() const{
    return m_resource_isValid;
}

QString OAIResourceInstanceRead::getId() const {
    return id;
}
void OAIResourceInstanceRead::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIResourceInstanceRead::is_id_Set() const{
    return m_id_isSet;
}

bool OAIResourceInstanceRead::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIResourceInstanceRead::getOrganizationId() const {
    return organization_id;
}
void OAIResourceInstanceRead::setOrganizationId(const QString &organization_id) {
    this->organization_id = organization_id;
    this->m_organization_id_isSet = true;
}

bool OAIResourceInstanceRead::is_organization_id_Set() const{
    return m_organization_id_isSet;
}

bool OAIResourceInstanceRead::is_organization_id_Valid() const{
    return m_organization_id_isValid;
}

QString OAIResourceInstanceRead::getProjectId() const {
    return project_id;
}
void OAIResourceInstanceRead::setProjectId(const QString &project_id) {
    this->project_id = project_id;
    this->m_project_id_isSet = true;
}

bool OAIResourceInstanceRead::is_project_id_Set() const{
    return m_project_id_isSet;
}

bool OAIResourceInstanceRead::is_project_id_Valid() const{
    return m_project_id_isValid;
}

QString OAIResourceInstanceRead::getEnvironmentId() const {
    return environment_id;
}
void OAIResourceInstanceRead::setEnvironmentId(const QString &environment_id) {
    this->environment_id = environment_id;
    this->m_environment_id_isSet = true;
}

bool OAIResourceInstanceRead::is_environment_id_Set() const{
    return m_environment_id_isSet;
}

bool OAIResourceInstanceRead::is_environment_id_Valid() const{
    return m_environment_id_isValid;
}

QDateTime OAIResourceInstanceRead::getCreatedAt() const {
    return created_at;
}
void OAIResourceInstanceRead::setCreatedAt(const QDateTime &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool OAIResourceInstanceRead::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIResourceInstanceRead::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QDateTime OAIResourceInstanceRead::getUpdatedAt() const {
    return updated_at;
}
void OAIResourceInstanceRead::setUpdatedAt(const QDateTime &updated_at) {
    this->updated_at = updated_at;
    this->m_updated_at_isSet = true;
}

bool OAIResourceInstanceRead::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool OAIResourceInstanceRead::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

QString OAIResourceInstanceRead::getResourceId() const {
    return resource_id;
}
void OAIResourceInstanceRead::setResourceId(const QString &resource_id) {
    this->resource_id = resource_id;
    this->m_resource_id_isSet = true;
}

bool OAIResourceInstanceRead::is_resource_id_Set() const{
    return m_resource_id_isSet;
}

bool OAIResourceInstanceRead::is_resource_id_Valid() const{
    return m_resource_id_isValid;
}

QString OAIResourceInstanceRead::getTenantId() const {
    return tenant_id;
}
void OAIResourceInstanceRead::setTenantId(const QString &tenant_id) {
    this->tenant_id = tenant_id;
    this->m_tenant_id_isSet = true;
}

bool OAIResourceInstanceRead::is_tenant_id_Set() const{
    return m_tenant_id_isSet;
}

bool OAIResourceInstanceRead::is_tenant_id_Valid() const{
    return m_tenant_id_isValid;
}

OAIObject OAIResourceInstanceRead::getAttributes() const {
    return attributes;
}
void OAIResourceInstanceRead::setAttributes(const OAIObject &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAIResourceInstanceRead::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAIResourceInstanceRead::is_attributes_Valid() const{
    return m_attributes_isValid;
}

bool OAIResourceInstanceRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tenant_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_resource_isSet) {
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

        if (m_resource_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tenant_id_isSet) {
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

bool OAIResourceInstanceRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_key_isValid && m_resource_isValid && m_id_isValid && m_organization_id_isValid && m_project_id_isValid && m_environment_id_isValid && m_created_at_isValid && m_updated_at_isValid && m_resource_id_isValid && true;
}

} // namespace OpenAPI
