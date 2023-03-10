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

/*
 * OAIOrgMemberUpdate.h
 *
 * 
 */

#ifndef OAIOrgMemberUpdate_H
#define OAIOrgMemberUpdate_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIOnboardingStep.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgMemberUpdate : public OAIObject {
public:
    OAIOrgMemberUpdate();
    OAIOrgMemberUpdate(QString json);
    ~OAIOrgMemberUpdate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIObject getSettings() const;
    void setSettings(const OAIObject &settings);
    bool is_settings_Set() const;
    bool is_settings_Valid() const;

    OAIOnboardingStep getOnboardingStep() const;
    void setOnboardingStep(const OAIOnboardingStep &onboarding_step);
    bool is_onboarding_step_Set() const;
    bool is_onboarding_step_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIObject settings;
    bool m_settings_isSet;
    bool m_settings_isValid;

    OAIOnboardingStep onboarding_step;
    bool m_onboarding_step_isSet;
    bool m_onboarding_step_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrgMemberUpdate)

#endif // OAIOrgMemberUpdate_H
