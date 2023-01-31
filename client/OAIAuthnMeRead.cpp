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

#include "OAIAuthnMeRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAuthnMeRead::OAIAuthnMeRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAuthnMeRead::OAIAuthnMeRead() {
    this->initializeModel();
}

OAIAuthnMeRead::~OAIAuthnMeRead() {}

void OAIAuthnMeRead::initializeModel() {

    m_actor_isSet = false;
    m_actor_isValid = false;
}

void OAIAuthnMeRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAuthnMeRead::fromJsonObject(QJsonObject json) {

    m_actor_isValid = ::OpenAPI::fromJsonValue(actor, json[QString("actor")]);
    m_actor_isSet = !json[QString("actor")].isNull() && m_actor_isValid;
}

QString OAIAuthnMeRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAuthnMeRead::asJsonObject() const {
    QJsonObject obj;
    if (actor.isSet()) {
        obj.insert(QString("actor"), ::OpenAPI::toJsonValue(actor));
    }
    return obj;
}

OAIActor OAIAuthnMeRead::getActor() const {
    return actor;
}
void OAIAuthnMeRead::setActor(const OAIActor &actor) {
    this->actor = actor;
    this->m_actor_isSet = true;
}

bool OAIAuthnMeRead::is_actor_Set() const{
    return m_actor_isSet;
}

bool OAIAuthnMeRead::is_actor_Valid() const{
    return m_actor_isValid;
}

bool OAIAuthnMeRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (actor.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAuthnMeRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_actor_isValid && true;
}

} // namespace OpenAPI
