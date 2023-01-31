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
 * OAIUserRoleCreate.h
 *
 * 
 */

#ifndef OAIUserRoleCreate_H
#define OAIUserRoleCreate_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUserRoleCreate : public OAIObject {
public:
    OAIUserRoleCreate();
    OAIUserRoleCreate(QString json);
    ~OAIUserRoleCreate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getRole() const;
    void setRole(const QString &role);
    bool is_role_Set() const;
    bool is_role_Valid() const;

    QString getTenant() const;
    void setTenant(const QString &tenant);
    bool is_tenant_Set() const;
    bool is_tenant_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString role;
    bool m_role_isSet;
    bool m_role_isValid;

    QString tenant;
    bool m_tenant_isSet;
    bool m_tenant_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserRoleCreate)

#endif // OAIUserRoleCreate_H