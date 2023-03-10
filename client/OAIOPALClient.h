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
 * OAIOPALClient.h
 *
 * 
 */

#ifndef OAIOPALClient_H
#define OAIOPALClient_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOPALClient : public OAIObject {
public:
    OAIOPALClient();
    OAIOPALClient(QString json);
    ~OAIOPALClient() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getDataTopics() const;
    void setDataTopics(const QList<QString> &data_topics);
    bool is_data_topics_Set() const;
    bool is_data_topics_Valid() const;

    QString getClientToken() const;
    void setClientToken(const QString &client_token);
    bool is_client_token_Set() const;
    bool is_client_token_Valid() const;

    QString getServerUrl() const;
    void setServerUrl(const QString &server_url);
    bool is_server_url_Set() const;
    bool is_server_url_Valid() const;

    QString getServerWsUrl() const;
    void setServerWsUrl(const QString &server_ws_url);
    bool is_server_ws_url_Set() const;
    bool is_server_ws_url_Valid() const;

    QString getServerPubsubUrl() const;
    void setServerPubsubUrl(const QString &server_pubsub_url);
    bool is_server_pubsub_url_Set() const;
    bool is_server_pubsub_url_Valid() const;

    QString getDefaultDataSourcesConfigUrl() const;
    void setDefaultDataSourcesConfigUrl(const QString &default_data_sources_config_url);
    bool is_default_data_sources_config_url_Set() const;
    bool is_default_data_sources_config_url_Valid() const;

    QString getScopeId() const;
    void setScopeId(const QString &scope_id);
    bool is_scope_id_Set() const;
    bool is_scope_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> data_topics;
    bool m_data_topics_isSet;
    bool m_data_topics_isValid;

    QString client_token;
    bool m_client_token_isSet;
    bool m_client_token_isValid;

    QString server_url;
    bool m_server_url_isSet;
    bool m_server_url_isValid;

    QString server_ws_url;
    bool m_server_ws_url_isSet;
    bool m_server_ws_url_isValid;

    QString server_pubsub_url;
    bool m_server_pubsub_url_isSet;
    bool m_server_pubsub_url_isValid;

    QString default_data_sources_config_url;
    bool m_default_data_sources_config_url_isSet;
    bool m_default_data_sources_config_url_isValid;

    QString scope_id;
    bool m_scope_id_isSet;
    bool m_scope_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOPALClient)

#endif // OAIOPALClient_H
