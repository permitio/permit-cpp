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

#include "OAIOrgMemberUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrgMemberUpdate::OAIOrgMemberUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrgMemberUpdate::OAIOrgMemberUpdate() {
    this->initializeModel();
}

OAIOrgMemberUpdate::~OAIOrgMemberUpdate() {}

void OAIOrgMemberUpdate::initializeModel() {

    m_settings_isSet = false;
    m_settings_isValid = false;

    m_onboarding_step_isSet = false;
    m_onboarding_step_isValid = false;
}

void OAIOrgMemberUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrgMemberUpdate::fromJsonObject(QJsonObject json) {

    m_settings_isValid = ::OpenAPI::fromJsonValue(settings, json[QString("settings")]);
    m_settings_isSet = !json[QString("settings")].isNull() && m_settings_isValid;

    m_onboarding_step_isValid = ::OpenAPI::fromJsonValue(onboarding_step, json[QString("onboarding_step")]);
    m_onboarding_step_isSet = !json[QString("onboarding_step")].isNull() && m_onboarding_step_isValid;
}

QString OAIOrgMemberUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrgMemberUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_settings_isSet) {
        obj.insert(QString("settings"), ::OpenAPI::toJsonValue(settings));
    }
    if (onboarding_step.isSet()) {
        obj.insert(QString("onboarding_step"), ::OpenAPI::toJsonValue(onboarding_step));
    }
    return obj;
}

OAIObject OAIOrgMemberUpdate::getSettings() const {
    return settings;
}
void OAIOrgMemberUpdate::setSettings(const OAIObject &settings) {
    this->settings = settings;
    this->m_settings_isSet = true;
}

bool OAIOrgMemberUpdate::is_settings_Set() const{
    return m_settings_isSet;
}

bool OAIOrgMemberUpdate::is_settings_Valid() const{
    return m_settings_isValid;
}

OAIOnboardingStep OAIOrgMemberUpdate::getOnboardingStep() const {
    return onboarding_step;
}
void OAIOrgMemberUpdate::setOnboardingStep(const OAIOnboardingStep &onboarding_step) {
    this->onboarding_step = onboarding_step;
    this->m_onboarding_step_isSet = true;
}

bool OAIOrgMemberUpdate::is_onboarding_step_Set() const{
    return m_onboarding_step_isSet;
}

bool OAIOrgMemberUpdate::is_onboarding_step_Valid() const{
    return m_onboarding_step_isValid;
}

bool OAIOrgMemberUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_settings_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (onboarding_step.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrgMemberUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
