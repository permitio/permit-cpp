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
 * OAIStatistics.h
 *
 * 
 */

#ifndef OAIStatistics_H
#define OAIStatistics_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIStatistics : public OAIObject {
public:
    OAIStatistics();
    OAIStatistics(QString json);
    ~OAIStatistics() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getRoles() const;
    void setRoles(const qint32 &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    qint32 getUsers() const;
    void setUsers(const qint32 &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    qint32 getPolicies() const;
    void setPolicies(const qint32 &policies);
    bool is_policies_Set() const;
    bool is_policies_Valid() const;

    qint32 getResources() const;
    void setResources(const qint32 &resources);
    bool is_resources_Set() const;
    bool is_resources_Valid() const;

    qint32 getTenants() const;
    void setTenants(const qint32 &tenants);
    bool is_tenants_Set() const;
    bool is_tenants_Valid() const;

    bool isHasDecisionLogs() const;
    void setHasDecisionLogs(const bool &has_decision_logs);
    bool is_has_decision_logs_Set() const;
    bool is_has_decision_logs_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 roles;
    bool m_roles_isSet;
    bool m_roles_isValid;

    qint32 users;
    bool m_users_isSet;
    bool m_users_isValid;

    qint32 policies;
    bool m_policies_isSet;
    bool m_policies_isValid;

    qint32 resources;
    bool m_resources_isSet;
    bool m_resources_isValid;

    qint32 tenants;
    bool m_tenants_isSet;
    bool m_tenants_isValid;

    bool has_decision_logs;
    bool m_has_decision_logs_isSet;
    bool m_has_decision_logs_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIStatistics)

#endif // OAIStatistics_H
