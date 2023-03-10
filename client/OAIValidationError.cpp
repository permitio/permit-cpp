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

#include "OAIValidationError.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIValidationError::OAIValidationError(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIValidationError::OAIValidationError() {
    this->initializeModel();
}

OAIValidationError::~OAIValidationError() {}

void OAIValidationError::initializeModel() {

    m_loc_isSet = false;
    m_loc_isValid = false;

    m_msg_isSet = false;
    m_msg_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void OAIValidationError::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIValidationError::fromJsonObject(QJsonObject json) {

    m_loc_isValid = ::OpenAPI::fromJsonValue(loc, json[QString("loc")]);
    m_loc_isSet = !json[QString("loc")].isNull() && m_loc_isValid;

    m_msg_isValid = ::OpenAPI::fromJsonValue(msg, json[QString("msg")]);
    m_msg_isSet = !json[QString("msg")].isNull() && m_msg_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString OAIValidationError::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIValidationError::asJsonObject() const {
    QJsonObject obj;
    if (loc.size() > 0) {
        obj.insert(QString("loc"), ::OpenAPI::toJsonValue(loc));
    }
    if (m_msg_isSet) {
        obj.insert(QString("msg"), ::OpenAPI::toJsonValue(msg));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    return obj;
}

QList<OAILocation_inner> OAIValidationError::getLoc() const {
    return loc;
}
void OAIValidationError::setLoc(const QList<OAILocation_inner> &loc) {
    this->loc = loc;
    this->m_loc_isSet = true;
}

bool OAIValidationError::is_loc_Set() const{
    return m_loc_isSet;
}

bool OAIValidationError::is_loc_Valid() const{
    return m_loc_isValid;
}

QString OAIValidationError::getMsg() const {
    return msg;
}
void OAIValidationError::setMsg(const QString &msg) {
    this->msg = msg;
    this->m_msg_isSet = true;
}

bool OAIValidationError::is_msg_Set() const{
    return m_msg_isSet;
}

bool OAIValidationError::is_msg_Valid() const{
    return m_msg_isValid;
}

QString OAIValidationError::getType() const {
    return type;
}
void OAIValidationError::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIValidationError::is_type_Set() const{
    return m_type_isSet;
}

bool OAIValidationError::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIValidationError::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (loc.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_msg_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIValidationError::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_loc_isValid && m_msg_isValid && m_type_isValid && true;
}

} // namespace OpenAPI
