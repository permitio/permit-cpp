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
 * OAIOrganizationUpdate.h
 *
 * 
 */

#ifndef OAIOrganizationUpdate_H
#define OAIOrganizationUpdate_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrganizationUpdate : public OAIObject {
public:
    OAIOrganizationUpdate();
    OAIOrganizationUpdate(QString json);
    ~OAIOrganizationUpdate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIObject getSettings() const;
    void setSettings(const OAIObject &settings);
    bool is_settings_Set() const;
    bool is_settings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIObject settings;
    bool m_settings_isSet;
    bool m_settings_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrganizationUpdate)

#endif // OAIOrganizationUpdate_H