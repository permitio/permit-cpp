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

#include "OAIWebhookUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhookUpdate::OAIWebhookUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhookUpdate::OAIWebhookUpdate() {
    this->initializeModel();
}

OAIWebhookUpdate::~OAIWebhookUpdate() {}

void OAIWebhookUpdate::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;

    m_bearer_token_isSet = false;
    m_bearer_token_isValid = false;
}

void OAIWebhookUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhookUpdate::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_bearer_token_isValid = ::OpenAPI::fromJsonValue(bearer_token, json[QString("bearer_token")]);
    m_bearer_token_isSet = !json[QString("bearer_token")].isNull() && m_bearer_token_isValid;
}

QString OAIWebhookUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhookUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    if (m_bearer_token_isSet) {
        obj.insert(QString("bearer_token"), ::OpenAPI::toJsonValue(bearer_token));
    }
    return obj;
}

QString OAIWebhookUpdate::getUrl() const {
    return url;
}
void OAIWebhookUpdate::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool OAIWebhookUpdate::is_url_Set() const{
    return m_url_isSet;
}

bool OAIWebhookUpdate::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIWebhookUpdate::getBearerToken() const {
    return bearer_token;
}
void OAIWebhookUpdate::setBearerToken(const QString &bearer_token) {
    this->bearer_token = bearer_token;
    this->m_bearer_token_isSet = true;
}

bool OAIWebhookUpdate::is_bearer_token_Set() const{
    return m_bearer_token_isSet;
}

bool OAIWebhookUpdate::is_bearer_token_Valid() const{
    return m_bearer_token_isValid;
}

bool OAIWebhookUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bearer_token_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhookUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
