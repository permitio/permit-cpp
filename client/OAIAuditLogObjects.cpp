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

#include "OAIAuditLogObjects.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAuditLogObjects::OAIAuditLogObjects(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAuditLogObjects::OAIAuditLogObjects() {
    this->initializeModel();
}

OAIAuditLogObjects::~OAIAuditLogObjects() {}

void OAIAuditLogObjects::initializeModel() {

    m_organization_object_isSet = false;
    m_organization_object_isValid = false;

    m_project_object_isSet = false;
    m_project_object_isValid = false;

    m_environment_object_isSet = false;
    m_environment_object_isValid = false;

    m_pdp_config_object_isSet = false;
    m_pdp_config_object_isValid = false;

    m_user_object_isSet = false;
    m_user_object_isValid = false;

    m_action_object_isSet = false;
    m_action_object_isValid = false;

    m_resource_type_object_isSet = false;
    m_resource_type_object_isValid = false;

    m_tenant_object_isSet = false;
    m_tenant_object_isValid = false;
}

void OAIAuditLogObjects::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAuditLogObjects::fromJsonObject(QJsonObject json) {

    m_organization_object_isValid = ::OpenAPI::fromJsonValue(organization_object, json[QString("organization_object")]);
    m_organization_object_isSet = !json[QString("organization_object")].isNull() && m_organization_object_isValid;

    m_project_object_isValid = ::OpenAPI::fromJsonValue(project_object, json[QString("project_object")]);
    m_project_object_isSet = !json[QString("project_object")].isNull() && m_project_object_isValid;

    m_environment_object_isValid = ::OpenAPI::fromJsonValue(environment_object, json[QString("environment_object")]);
    m_environment_object_isSet = !json[QString("environment_object")].isNull() && m_environment_object_isValid;

    m_pdp_config_object_isValid = ::OpenAPI::fromJsonValue(pdp_config_object, json[QString("pdp_config_object")]);
    m_pdp_config_object_isSet = !json[QString("pdp_config_object")].isNull() && m_pdp_config_object_isValid;

    m_user_object_isValid = ::OpenAPI::fromJsonValue(user_object, json[QString("user_object")]);
    m_user_object_isSet = !json[QString("user_object")].isNull() && m_user_object_isValid;

    m_action_object_isValid = ::OpenAPI::fromJsonValue(action_object, json[QString("action_object")]);
    m_action_object_isSet = !json[QString("action_object")].isNull() && m_action_object_isValid;

    m_resource_type_object_isValid = ::OpenAPI::fromJsonValue(resource_type_object, json[QString("resource_type_object")]);
    m_resource_type_object_isSet = !json[QString("resource_type_object")].isNull() && m_resource_type_object_isValid;

    m_tenant_object_isValid = ::OpenAPI::fromJsonValue(tenant_object, json[QString("tenant_object")]);
    m_tenant_object_isSet = !json[QString("tenant_object")].isNull() && m_tenant_object_isValid;
}

QString OAIAuditLogObjects::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAuditLogObjects::asJsonObject() const {
    QJsonObject obj;
    if (organization_object.isSet()) {
        obj.insert(QString("organization_object"), ::OpenAPI::toJsonValue(organization_object));
    }
    if (project_object.isSet()) {
        obj.insert(QString("project_object"), ::OpenAPI::toJsonValue(project_object));
    }
    if (environment_object.isSet()) {
        obj.insert(QString("environment_object"), ::OpenAPI::toJsonValue(environment_object));
    }
    if (pdp_config_object.isSet()) {
        obj.insert(QString("pdp_config_object"), ::OpenAPI::toJsonValue(pdp_config_object));
    }
    if (user_object.isSet()) {
        obj.insert(QString("user_object"), ::OpenAPI::toJsonValue(user_object));
    }
    if (action_object.isSet()) {
        obj.insert(QString("action_object"), ::OpenAPI::toJsonValue(action_object));
    }
    if (resource_type_object.isSet()) {
        obj.insert(QString("resource_type_object"), ::OpenAPI::toJsonValue(resource_type_object));
    }
    if (tenant_object.isSet()) {
        obj.insert(QString("tenant_object"), ::OpenAPI::toJsonValue(tenant_object));
    }
    return obj;
}

OAIOrganization_Object OAIAuditLogObjects::getOrganizationObject() const {
    return organization_object;
}
void OAIAuditLogObjects::setOrganizationObject(const OAIOrganization_Object &organization_object) {
    this->organization_object = organization_object;
    this->m_organization_object_isSet = true;
}

bool OAIAuditLogObjects::is_organization_object_Set() const{
    return m_organization_object_isSet;
}

bool OAIAuditLogObjects::is_organization_object_Valid() const{
    return m_organization_object_isValid;
}

OAIProject_Object OAIAuditLogObjects::getProjectObject() const {
    return project_object;
}
void OAIAuditLogObjects::setProjectObject(const OAIProject_Object &project_object) {
    this->project_object = project_object;
    this->m_project_object_isSet = true;
}

bool OAIAuditLogObjects::is_project_object_Set() const{
    return m_project_object_isSet;
}

bool OAIAuditLogObjects::is_project_object_Valid() const{
    return m_project_object_isValid;
}

OAIEnvironment_Object OAIAuditLogObjects::getEnvironmentObject() const {
    return environment_object;
}
void OAIAuditLogObjects::setEnvironmentObject(const OAIEnvironment_Object &environment_object) {
    this->environment_object = environment_object;
    this->m_environment_object_isSet = true;
}

bool OAIAuditLogObjects::is_environment_object_Set() const{
    return m_environment_object_isSet;
}

bool OAIAuditLogObjects::is_environment_object_Valid() const{
    return m_environment_object_isValid;
}

OAIPdp_Config_Object OAIAuditLogObjects::getPdpConfigObject() const {
    return pdp_config_object;
}
void OAIAuditLogObjects::setPdpConfigObject(const OAIPdp_Config_Object &pdp_config_object) {
    this->pdp_config_object = pdp_config_object;
    this->m_pdp_config_object_isSet = true;
}

bool OAIAuditLogObjects::is_pdp_config_object_Set() const{
    return m_pdp_config_object_isSet;
}

bool OAIAuditLogObjects::is_pdp_config_object_Valid() const{
    return m_pdp_config_object_isValid;
}

OAIUserObject OAIAuditLogObjects::getUserObject() const {
    return user_object;
}
void OAIAuditLogObjects::setUserObject(const OAIUserObject &user_object) {
    this->user_object = user_object;
    this->m_user_object_isSet = true;
}

bool OAIAuditLogObjects::is_user_object_Set() const{
    return m_user_object_isSet;
}

bool OAIAuditLogObjects::is_user_object_Valid() const{
    return m_user_object_isValid;
}

OAIActionObject OAIAuditLogObjects::getActionObject() const {
    return action_object;
}
void OAIAuditLogObjects::setActionObject(const OAIActionObject &action_object) {
    this->action_object = action_object;
    this->m_action_object_isSet = true;
}

bool OAIAuditLogObjects::is_action_object_Set() const{
    return m_action_object_isSet;
}

bool OAIAuditLogObjects::is_action_object_Valid() const{
    return m_action_object_isValid;
}

OAIResourceTypeObject OAIAuditLogObjects::getResourceTypeObject() const {
    return resource_type_object;
}
void OAIAuditLogObjects::setResourceTypeObject(const OAIResourceTypeObject &resource_type_object) {
    this->resource_type_object = resource_type_object;
    this->m_resource_type_object_isSet = true;
}

bool OAIAuditLogObjects::is_resource_type_object_Set() const{
    return m_resource_type_object_isSet;
}

bool OAIAuditLogObjects::is_resource_type_object_Valid() const{
    return m_resource_type_object_isValid;
}

OAITenantObject OAIAuditLogObjects::getTenantObject() const {
    return tenant_object;
}
void OAIAuditLogObjects::setTenantObject(const OAITenantObject &tenant_object) {
    this->tenant_object = tenant_object;
    this->m_tenant_object_isSet = true;
}

bool OAIAuditLogObjects::is_tenant_object_Set() const{
    return m_tenant_object_isSet;
}

bool OAIAuditLogObjects::is_tenant_object_Valid() const{
    return m_tenant_object_isValid;
}

bool OAIAuditLogObjects::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (organization_object.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (project_object.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (environment_object.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (pdp_config_object.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (user_object.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (action_object.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (resource_type_object.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (tenant_object.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAuditLogObjects::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
