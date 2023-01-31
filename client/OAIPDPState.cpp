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

#include "OAIPDPState.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPDPState::OAIPDPState(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPDPState::OAIPDPState() {
    this->initializeModel();
}

OAIPDPState::~OAIPDPState() {}

void OAIPDPState::initializeModel() {

    m_api_version_isSet = false;
    m_api_version_isValid = false;
}

void OAIPDPState::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPDPState::fromJsonObject(QJsonObject json) {

    m_api_version_isValid = ::OpenAPI::fromJsonValue(api_version, json[QString("api_version")]);
    m_api_version_isSet = !json[QString("api_version")].isNull() && m_api_version_isValid;
}

QString OAIPDPState::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPDPState::asJsonObject() const {
    QJsonObject obj;
    if (m_api_version_isSet) {
        obj.insert(QString("api_version"), ::OpenAPI::toJsonValue(api_version));
    }
    return obj;
}

qint32 OAIPDPState::getApiVersion() const {
    return api_version;
}
void OAIPDPState::setApiVersion(const qint32 &api_version) {
    this->api_version = api_version;
    this->m_api_version_isSet = true;
}

bool OAIPDPState::is_api_version_Set() const{
    return m_api_version_isSet;
}

bool OAIPDPState::is_api_version_Valid() const{
    return m_api_version_isValid;
}

bool OAIPDPState::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_api_version_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPDPState::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_api_version_isValid && true;
}

} // namespace OpenAPI
