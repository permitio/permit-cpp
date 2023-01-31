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
 * OAIDataSourceEntry.h
 *
 * Data source configuration - where client&#39;s should retrive data from and how they should store it
 */

#ifndef OAIDataSourceEntry_H
#define OAIDataSourceEntry_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDataSourceEntry : public OAIObject {
public:
    OAIDataSourceEntry();
    OAIDataSourceEntry(QString json);
    ~OAIDataSourceEntry() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    OAIObject getConfig() const;
    void setConfig(const OAIObject &config);
    bool is_config_Set() const;
    bool is_config_Valid() const;

    QList<QString> getTopics() const;
    void setTopics(const QList<QString> &topics);
    bool is_topics_Set() const;
    bool is_topics_Valid() const;

    QString getDstPath() const;
    void setDstPath(const QString &dst_path);
    bool is_dst_path_Set() const;
    bool is_dst_path_Valid() const;

    QString getSaveMethod() const;
    void setSaveMethod(const QString &save_method);
    bool is_save_method_Set() const;
    bool is_save_method_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString url;
    bool m_url_isSet;
    bool m_url_isValid;

    OAIObject config;
    bool m_config_isSet;
    bool m_config_isValid;

    QList<QString> topics;
    bool m_topics_isSet;
    bool m_topics_isValid;

    QString dst_path;
    bool m_dst_path_isSet;
    bool m_dst_path_isValid;

    QString save_method;
    bool m_save_method_isSet;
    bool m_save_method_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDataSourceEntry)

#endif // OAIDataSourceEntry_H