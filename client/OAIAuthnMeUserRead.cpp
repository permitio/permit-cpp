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

#include "OAIAuthnMeUserRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAuthnMeUserRead::OAIAuthnMeUserRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAuthnMeUserRead::OAIAuthnMeUserRead() {
    this->initializeModel();
}

OAIAuthnMeUserRead::~OAIAuthnMeUserRead() {}

void OAIAuthnMeUserRead::initializeModel() {

    m_actor_type_isSet = false;
    m_actor_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_key_isSet = false;
    m_key_isValid = false;

    m_org_id_isSet = false;
    m_org_id_isValid = false;

    m_project_id_isSet = false;
    m_project_id_isValid = false;

    m_env_id_isSet = false;
    m_env_id_isValid = false;

    m_tenant_id_isSet = false;
    m_tenant_id_isValid = false;

    m_email_isSet = false;
    m_email_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_given_name_isSet = false;
    m_given_name_isValid = false;

    m_family_name_isSet = false;
    m_family_name_isValid = false;

    m_picture_isSet = false;
    m_picture_isValid = false;

    m_is_onboarding_isSet = false;
    m_is_onboarding_isValid = false;

    m_onboarding_step_isSet = false;
    m_onboarding_step_isValid = false;
}

void OAIAuthnMeUserRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAuthnMeUserRead::fromJsonObject(QJsonObject json) {

    m_actor_type_isValid = ::OpenAPI::fromJsonValue(actor_type, json[QString("actor_type")]);
    m_actor_type_isSet = !json[QString("actor_type")].isNull() && m_actor_type_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_org_id_isValid = ::OpenAPI::fromJsonValue(org_id, json[QString("org_id")]);
    m_org_id_isSet = !json[QString("org_id")].isNull() && m_org_id_isValid;

    m_project_id_isValid = ::OpenAPI::fromJsonValue(project_id, json[QString("project_id")]);
    m_project_id_isSet = !json[QString("project_id")].isNull() && m_project_id_isValid;

    m_env_id_isValid = ::OpenAPI::fromJsonValue(env_id, json[QString("env_id")]);
    m_env_id_isSet = !json[QString("env_id")].isNull() && m_env_id_isValid;

    m_tenant_id_isValid = ::OpenAPI::fromJsonValue(tenant_id, json[QString("tenant_id")]);
    m_tenant_id_isSet = !json[QString("tenant_id")].isNull() && m_tenant_id_isValid;

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_given_name_isValid = ::OpenAPI::fromJsonValue(given_name, json[QString("given_name")]);
    m_given_name_isSet = !json[QString("given_name")].isNull() && m_given_name_isValid;

    m_family_name_isValid = ::OpenAPI::fromJsonValue(family_name, json[QString("family_name")]);
    m_family_name_isSet = !json[QString("family_name")].isNull() && m_family_name_isValid;

    m_picture_isValid = ::OpenAPI::fromJsonValue(picture, json[QString("picture")]);
    m_picture_isSet = !json[QString("picture")].isNull() && m_picture_isValid;

    m_is_onboarding_isValid = ::OpenAPI::fromJsonValue(is_onboarding, json[QString("is_onboarding")]);
    m_is_onboarding_isSet = !json[QString("is_onboarding")].isNull() && m_is_onboarding_isValid;

    m_onboarding_step_isValid = ::OpenAPI::fromJsonValue(onboarding_step, json[QString("onboarding_step")]);
    m_onboarding_step_isSet = !json[QString("onboarding_step")].isNull() && m_onboarding_step_isValid;
}

QString OAIAuthnMeUserRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAuthnMeUserRead::asJsonObject() const {
    QJsonObject obj;
    if (m_actor_type_isSet) {
        obj.insert(QString("actor_type"), ::OpenAPI::toJsonValue(actor_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    if (m_org_id_isSet) {
        obj.insert(QString("org_id"), ::OpenAPI::toJsonValue(org_id));
    }
    if (m_project_id_isSet) {
        obj.insert(QString("project_id"), ::OpenAPI::toJsonValue(project_id));
    }
    if (m_env_id_isSet) {
        obj.insert(QString("env_id"), ::OpenAPI::toJsonValue(env_id));
    }
    if (m_tenant_id_isSet) {
        obj.insert(QString("tenant_id"), ::OpenAPI::toJsonValue(tenant_id));
    }
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_given_name_isSet) {
        obj.insert(QString("given_name"), ::OpenAPI::toJsonValue(given_name));
    }
    if (m_family_name_isSet) {
        obj.insert(QString("family_name"), ::OpenAPI::toJsonValue(family_name));
    }
    if (m_picture_isSet) {
        obj.insert(QString("picture"), ::OpenAPI::toJsonValue(picture));
    }
    if (m_is_onboarding_isSet) {
        obj.insert(QString("is_onboarding"), ::OpenAPI::toJsonValue(is_onboarding));
    }
    if (m_onboarding_step_isSet) {
        obj.insert(QString("onboarding_step"), ::OpenAPI::toJsonValue(onboarding_step));
    }
    return obj;
}

QString OAIAuthnMeUserRead::getActorType() const {
    return actor_type;
}
void OAIAuthnMeUserRead::setActorType(const QString &actor_type) {
    this->actor_type = actor_type;
    this->m_actor_type_isSet = true;
}

bool OAIAuthnMeUserRead::is_actor_type_Set() const{
    return m_actor_type_isSet;
}

bool OAIAuthnMeUserRead::is_actor_type_Valid() const{
    return m_actor_type_isValid;
}

QString OAIAuthnMeUserRead::getId() const {
    return id;
}
void OAIAuthnMeUserRead::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIAuthnMeUserRead::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAuthnMeUserRead::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIAuthnMeUserRead::getKey() const {
    return key;
}
void OAIAuthnMeUserRead::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIAuthnMeUserRead::is_key_Set() const{
    return m_key_isSet;
}

bool OAIAuthnMeUserRead::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIAuthnMeUserRead::getOrgId() const {
    return org_id;
}
void OAIAuthnMeUserRead::setOrgId(const QString &org_id) {
    this->org_id = org_id;
    this->m_org_id_isSet = true;
}

bool OAIAuthnMeUserRead::is_org_id_Set() const{
    return m_org_id_isSet;
}

bool OAIAuthnMeUserRead::is_org_id_Valid() const{
    return m_org_id_isValid;
}

QString OAIAuthnMeUserRead::getProjectId() const {
    return project_id;
}
void OAIAuthnMeUserRead::setProjectId(const QString &project_id) {
    this->project_id = project_id;
    this->m_project_id_isSet = true;
}

bool OAIAuthnMeUserRead::is_project_id_Set() const{
    return m_project_id_isSet;
}

bool OAIAuthnMeUserRead::is_project_id_Valid() const{
    return m_project_id_isValid;
}

QString OAIAuthnMeUserRead::getEnvId() const {
    return env_id;
}
void OAIAuthnMeUserRead::setEnvId(const QString &env_id) {
    this->env_id = env_id;
    this->m_env_id_isSet = true;
}

bool OAIAuthnMeUserRead::is_env_id_Set() const{
    return m_env_id_isSet;
}

bool OAIAuthnMeUserRead::is_env_id_Valid() const{
    return m_env_id_isValid;
}

QString OAIAuthnMeUserRead::getTenantId() const {
    return tenant_id;
}
void OAIAuthnMeUserRead::setTenantId(const QString &tenant_id) {
    this->tenant_id = tenant_id;
    this->m_tenant_id_isSet = true;
}

bool OAIAuthnMeUserRead::is_tenant_id_Set() const{
    return m_tenant_id_isSet;
}

bool OAIAuthnMeUserRead::is_tenant_id_Valid() const{
    return m_tenant_id_isValid;
}

QString OAIAuthnMeUserRead::getEmail() const {
    return email;
}
void OAIAuthnMeUserRead::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool OAIAuthnMeUserRead::is_email_Set() const{
    return m_email_isSet;
}

bool OAIAuthnMeUserRead::is_email_Valid() const{
    return m_email_isValid;
}

QString OAIAuthnMeUserRead::getName() const {
    return name;
}
void OAIAuthnMeUserRead::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIAuthnMeUserRead::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAuthnMeUserRead::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIAuthnMeUserRead::getGivenName() const {
    return given_name;
}
void OAIAuthnMeUserRead::setGivenName(const QString &given_name) {
    this->given_name = given_name;
    this->m_given_name_isSet = true;
}

bool OAIAuthnMeUserRead::is_given_name_Set() const{
    return m_given_name_isSet;
}

bool OAIAuthnMeUserRead::is_given_name_Valid() const{
    return m_given_name_isValid;
}

QString OAIAuthnMeUserRead::getFamilyName() const {
    return family_name;
}
void OAIAuthnMeUserRead::setFamilyName(const QString &family_name) {
    this->family_name = family_name;
    this->m_family_name_isSet = true;
}

bool OAIAuthnMeUserRead::is_family_name_Set() const{
    return m_family_name_isSet;
}

bool OAIAuthnMeUserRead::is_family_name_Valid() const{
    return m_family_name_isValid;
}

QString OAIAuthnMeUserRead::getPicture() const {
    return picture;
}
void OAIAuthnMeUserRead::setPicture(const QString &picture) {
    this->picture = picture;
    this->m_picture_isSet = true;
}

bool OAIAuthnMeUserRead::is_picture_Set() const{
    return m_picture_isSet;
}

bool OAIAuthnMeUserRead::is_picture_Valid() const{
    return m_picture_isValid;
}

bool OAIAuthnMeUserRead::isIsOnboarding() const {
    return is_onboarding;
}
void OAIAuthnMeUserRead::setIsOnboarding(const bool &is_onboarding) {
    this->is_onboarding = is_onboarding;
    this->m_is_onboarding_isSet = true;
}

bool OAIAuthnMeUserRead::is_is_onboarding_Set() const{
    return m_is_onboarding_isSet;
}

bool OAIAuthnMeUserRead::is_is_onboarding_Valid() const{
    return m_is_onboarding_isValid;
}

QString OAIAuthnMeUserRead::getOnboardingStep() const {
    return onboarding_step;
}
void OAIAuthnMeUserRead::setOnboardingStep(const QString &onboarding_step) {
    this->onboarding_step = onboarding_step;
    this->m_onboarding_step_isSet = true;
}

bool OAIAuthnMeUserRead::is_onboarding_step_Set() const{
    return m_onboarding_step_isSet;
}

bool OAIAuthnMeUserRead::is_onboarding_step_Valid() const{
    return m_onboarding_step_isValid;
}

bool OAIAuthnMeUserRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_actor_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_org_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_project_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_env_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tenant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_given_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_family_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_picture_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_onboarding_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_onboarding_step_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAuthnMeUserRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_key_isValid && m_org_id_isValid && m_project_id_isValid && m_env_id_isValid && m_tenant_id_isValid && m_email_isValid && true;
}

} // namespace OpenAPI
