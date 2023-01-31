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

#include "OAIResource_Id.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResource_Id::OAIResource_Id(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResource_Id::OAIResource_Id() {
    this->initializeModel();
}

OAIResource_Id::~OAIResource_Id() {}

void OAIResource_Id::initializeModel() {

}

void OAIResource_Id::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResource_Id::fromJsonObject(QJsonObject json) {

}

QString OAIResource_Id::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResource_Id::asJsonObject() const {
    QJsonObject obj;
    return obj;
}

bool OAIResource_Id::isSet() const {
    bool isObjectUpdated = false;
    do {

    } while (false);
    return isObjectUpdated;
}

bool OAIResource_Id::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI