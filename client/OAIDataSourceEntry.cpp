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

#include "OAIDataSourceEntry.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDataSourceEntry::OAIDataSourceEntry(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDataSourceEntry::OAIDataSourceEntry() {
    this->initializeModel();
}

OAIDataSourceEntry::~OAIDataSourceEntry() {}

void OAIDataSourceEntry::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;

    m_config_isSet = false;
    m_config_isValid = false;

    m_topics_isSet = false;
    m_topics_isValid = false;

    m_dst_path_isSet = false;
    m_dst_path_isValid = false;

    m_save_method_isSet = false;
    m_save_method_isValid = false;
}

void OAIDataSourceEntry::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDataSourceEntry::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_config_isValid = ::OpenAPI::fromJsonValue(config, json[QString("config")]);
    m_config_isSet = !json[QString("config")].isNull() && m_config_isValid;

    m_topics_isValid = ::OpenAPI::fromJsonValue(topics, json[QString("topics")]);
    m_topics_isSet = !json[QString("topics")].isNull() && m_topics_isValid;

    m_dst_path_isValid = ::OpenAPI::fromJsonValue(dst_path, json[QString("dst_path")]);
    m_dst_path_isSet = !json[QString("dst_path")].isNull() && m_dst_path_isValid;

    m_save_method_isValid = ::OpenAPI::fromJsonValue(save_method, json[QString("save_method")]);
    m_save_method_isSet = !json[QString("save_method")].isNull() && m_save_method_isValid;
}

QString OAIDataSourceEntry::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDataSourceEntry::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    if (m_config_isSet) {
        obj.insert(QString("config"), ::OpenAPI::toJsonValue(config));
    }
    if (topics.size() > 0) {
        obj.insert(QString("topics"), ::OpenAPI::toJsonValue(topics));
    }
    if (m_dst_path_isSet) {
        obj.insert(QString("dst_path"), ::OpenAPI::toJsonValue(dst_path));
    }
    if (m_save_method_isSet) {
        obj.insert(QString("save_method"), ::OpenAPI::toJsonValue(save_method));
    }
    return obj;
}

QString OAIDataSourceEntry::getUrl() const {
    return url;
}
void OAIDataSourceEntry::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool OAIDataSourceEntry::is_url_Set() const{
    return m_url_isSet;
}

bool OAIDataSourceEntry::is_url_Valid() const{
    return m_url_isValid;
}

OAIObject OAIDataSourceEntry::getConfig() const {
    return config;
}
void OAIDataSourceEntry::setConfig(const OAIObject &config) {
    this->config = config;
    this->m_config_isSet = true;
}

bool OAIDataSourceEntry::is_config_Set() const{
    return m_config_isSet;
}

bool OAIDataSourceEntry::is_config_Valid() const{
    return m_config_isValid;
}

QList<QString> OAIDataSourceEntry::getTopics() const {
    return topics;
}
void OAIDataSourceEntry::setTopics(const QList<QString> &topics) {
    this->topics = topics;
    this->m_topics_isSet = true;
}

bool OAIDataSourceEntry::is_topics_Set() const{
    return m_topics_isSet;
}

bool OAIDataSourceEntry::is_topics_Valid() const{
    return m_topics_isValid;
}

QString OAIDataSourceEntry::getDstPath() const {
    return dst_path;
}
void OAIDataSourceEntry::setDstPath(const QString &dst_path) {
    this->dst_path = dst_path;
    this->m_dst_path_isSet = true;
}

bool OAIDataSourceEntry::is_dst_path_Set() const{
    return m_dst_path_isSet;
}

bool OAIDataSourceEntry::is_dst_path_Valid() const{
    return m_dst_path_isValid;
}

QString OAIDataSourceEntry::getSaveMethod() const {
    return save_method;
}
void OAIDataSourceEntry::setSaveMethod(const QString &save_method) {
    this->save_method = save_method;
    this->m_save_method_isSet = true;
}

bool OAIDataSourceEntry::is_save_method_Set() const{
    return m_save_method_isSet;
}

bool OAIDataSourceEntry::is_save_method_Valid() const{
    return m_save_method_isValid;
}

bool OAIDataSourceEntry::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_config_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (topics.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_dst_path_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_save_method_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDataSourceEntry::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_url_isValid && true;
}

} // namespace OpenAPI
