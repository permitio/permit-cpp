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
 * OAIPdpValues.h
 *
 * 
 */

#ifndef OAIPdpValues_H
#define OAIPdpValues_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPdpValues : public OAIObject {
public:
    OAIPdpValues();
    OAIPdpValues(QString json);
    ~OAIPdpValues() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getBackendServiceUrl() const;
    void setBackendServiceUrl(const QString &backend_service_url);
    bool is_backend_service_url_Set() const;
    bool is_backend_service_url_Valid() const;

    QString getOpaDecisionLogIngressRoute() const;
    void setOpaDecisionLogIngressRoute(const QString &opa_decision_log_ingress_route);
    bool is_opa_decision_log_ingress_route_Set() const;
    bool is_opa_decision_log_ingress_route_Valid() const;

    QString getOpaDecisionLogIngressBackendTierUrl() const;
    void setOpaDecisionLogIngressBackendTierUrl(const QString &opa_decision_log_ingress_backend_tier_url);
    bool is_opa_decision_log_ingress_backend_tier_url_Set() const;
    bool is_opa_decision_log_ingress_backend_tier_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString backend_service_url;
    bool m_backend_service_url_isSet;
    bool m_backend_service_url_isValid;

    QString opa_decision_log_ingress_route;
    bool m_opa_decision_log_ingress_route_isSet;
    bool m_opa_decision_log_ingress_route_isValid;

    QString opa_decision_log_ingress_backend_tier_url;
    bool m_opa_decision_log_ingress_backend_tier_url_isSet;
    bool m_opa_decision_log_ingress_backend_tier_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPdpValues)

#endif // OAIPdpValues_H
