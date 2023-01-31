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

#include "OAILabels.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILabels::OAILabels(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILabels::OAILabels() {
    this->initializeModel();
}

OAILabels::~OAILabels() {}

void OAILabels::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_version_isSet = false;
    m_version_isValid = false;
}

void OAILabels::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILabels::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_version_isValid = ::OpenAPI::fromJsonValue(version, json[QString("version")]);
    m_version_isSet = !json[QString("version")].isNull() && m_version_isValid;
}

QString OAILabels::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILabels::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_version_isSet) {
        obj.insert(QString("version"), ::OpenAPI::toJsonValue(version));
    }
    return obj;
}

QString OAILabels::getId() const {
    return id;
}
void OAILabels::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAILabels::is_id_Set() const{
    return m_id_isSet;
}

bool OAILabels::is_id_Valid() const{
    return m_id_isValid;
}

QString OAILabels::getVersion() const {
    return version;
}
void OAILabels::setVersion(const QString &version) {
    this->version = version;
    this->m_version_isSet = true;
}

bool OAILabels::is_version_Set() const{
    return m_version_isSet;
}

bool OAILabels::is_version_Valid() const{
    return m_version_isValid;
}

bool OAILabels::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_version_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILabels::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_version_isValid && true;
}

} // namespace OpenAPI
