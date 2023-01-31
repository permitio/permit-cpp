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

#include "OAIOPAEngineDecisionLog.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOPAEngineDecisionLog::OAIOPAEngineDecisionLog(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOPAEngineDecisionLog::OAIOPAEngineDecisionLog() {
    this->initializeModel();
}

OAIOPAEngineDecisionLog::~OAIOPAEngineDecisionLog() {}

void OAIOPAEngineDecisionLog::initializeModel() {

    m_engine_isSet = false;
    m_engine_isValid = false;

    m_decision_id_isSet = false;
    m_decision_id_isValid = false;

    m_labels_isSet = false;
    m_labels_isValid = false;

    m_timestamp_isSet = false;
    m_timestamp_isValid = false;

    m_path_isSet = false;
    m_path_isValid = false;

    m_input_isSet = false;
    m_input_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;

    m_metrics_isSet = false;
    m_metrics_isValid = false;
}

void OAIOPAEngineDecisionLog::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOPAEngineDecisionLog::fromJsonObject(QJsonObject json) {

    m_engine_isValid = ::OpenAPI::fromJsonValue(engine, json[QString("engine")]);
    m_engine_isSet = !json[QString("engine")].isNull() && m_engine_isValid;

    m_decision_id_isValid = ::OpenAPI::fromJsonValue(decision_id, json[QString("decision_id")]);
    m_decision_id_isSet = !json[QString("decision_id")].isNull() && m_decision_id_isValid;

    m_labels_isValid = ::OpenAPI::fromJsonValue(labels, json[QString("labels")]);
    m_labels_isSet = !json[QString("labels")].isNull() && m_labels_isValid;

    m_timestamp_isValid = ::OpenAPI::fromJsonValue(timestamp, json[QString("timestamp")]);
    m_timestamp_isSet = !json[QString("timestamp")].isNull() && m_timestamp_isValid;

    m_path_isValid = ::OpenAPI::fromJsonValue(path, json[QString("path")]);
    m_path_isSet = !json[QString("path")].isNull() && m_path_isValid;

    m_input_isValid = ::OpenAPI::fromJsonValue(input, json[QString("input")]);
    m_input_isSet = !json[QString("input")].isNull() && m_input_isValid;

    m_result_isValid = ::OpenAPI::fromJsonValue(result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;

    m_metrics_isValid = ::OpenAPI::fromJsonValue(metrics, json[QString("metrics")]);
    m_metrics_isSet = !json[QString("metrics")].isNull() && m_metrics_isValid;
}

QString OAIOPAEngineDecisionLog::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOPAEngineDecisionLog::asJsonObject() const {
    QJsonObject obj;
    if (m_engine_isSet) {
        obj.insert(QString("engine"), ::OpenAPI::toJsonValue(engine));
    }
    if (m_decision_id_isSet) {
        obj.insert(QString("decision_id"), ::OpenAPI::toJsonValue(decision_id));
    }
    if (labels.isSet()) {
        obj.insert(QString("labels"), ::OpenAPI::toJsonValue(labels));
    }
    if (m_timestamp_isSet) {
        obj.insert(QString("timestamp"), ::OpenAPI::toJsonValue(timestamp));
    }
    if (m_path_isSet) {
        obj.insert(QString("path"), ::OpenAPI::toJsonValue(path));
    }
    if (m_input_isSet) {
        obj.insert(QString("input"), ::OpenAPI::toJsonValue(input));
    }
    if (m_result_isSet) {
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(result));
    }
    if (metrics.isSet()) {
        obj.insert(QString("metrics"), ::OpenAPI::toJsonValue(metrics));
    }
    return obj;
}

QString OAIOPAEngineDecisionLog::getEngine() const {
    return engine;
}
void OAIOPAEngineDecisionLog::setEngine(const QString &engine) {
    this->engine = engine;
    this->m_engine_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_engine_Set() const{
    return m_engine_isSet;
}

bool OAIOPAEngineDecisionLog::is_engine_Valid() const{
    return m_engine_isValid;
}

QString OAIOPAEngineDecisionLog::getDecisionId() const {
    return decision_id;
}
void OAIOPAEngineDecisionLog::setDecisionId(const QString &decision_id) {
    this->decision_id = decision_id;
    this->m_decision_id_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_decision_id_Set() const{
    return m_decision_id_isSet;
}

bool OAIOPAEngineDecisionLog::is_decision_id_Valid() const{
    return m_decision_id_isValid;
}

OAIOPALabels OAIOPAEngineDecisionLog::getLabels() const {
    return labels;
}
void OAIOPAEngineDecisionLog::setLabels(const OAIOPALabels &labels) {
    this->labels = labels;
    this->m_labels_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_labels_Set() const{
    return m_labels_isSet;
}

bool OAIOPAEngineDecisionLog::is_labels_Valid() const{
    return m_labels_isValid;
}

QDateTime OAIOPAEngineDecisionLog::getTimestamp() const {
    return timestamp;
}
void OAIOPAEngineDecisionLog::setTimestamp(const QDateTime &timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_timestamp_Set() const{
    return m_timestamp_isSet;
}

bool OAIOPAEngineDecisionLog::is_timestamp_Valid() const{
    return m_timestamp_isValid;
}

QString OAIOPAEngineDecisionLog::getPath() const {
    return path;
}
void OAIOPAEngineDecisionLog::setPath(const QString &path) {
    this->path = path;
    this->m_path_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_path_Set() const{
    return m_path_isSet;
}

bool OAIOPAEngineDecisionLog::is_path_Valid() const{
    return m_path_isValid;
}

QJsonValue OAIOPAEngineDecisionLog::getInput() const {
    return input;
}
void OAIOPAEngineDecisionLog::setInput(const QJsonValue &input) {
    this->input = input;
    this->m_input_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_input_Set() const{
    return m_input_isSet;
}

bool OAIOPAEngineDecisionLog::is_input_Valid() const{
    return m_input_isValid;
}

QJsonValue OAIOPAEngineDecisionLog::getResult() const {
    return result;
}
void OAIOPAEngineDecisionLog::setResult(const QJsonValue &result) {
    this->result = result;
    this->m_result_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_result_Set() const{
    return m_result_isSet;
}

bool OAIOPAEngineDecisionLog::is_result_Valid() const{
    return m_result_isValid;
}

OAIOPAMetrics OAIOPAEngineDecisionLog::getMetrics() const {
    return metrics;
}
void OAIOPAEngineDecisionLog::setMetrics(const OAIOPAMetrics &metrics) {
    this->metrics = metrics;
    this->m_metrics_isSet = true;
}

bool OAIOPAEngineDecisionLog::is_metrics_Set() const{
    return m_metrics_isSet;
}

bool OAIOPAEngineDecisionLog::is_metrics_Valid() const{
    return m_metrics_isValid;
}

bool OAIOPAEngineDecisionLog::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_engine_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_decision_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (labels.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_path_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_input_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (metrics.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOPAEngineDecisionLog::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_decision_id_isValid && m_labels_isValid && m_timestamp_isValid && m_path_isValid && m_metrics_isValid && true;
}

} // namespace OpenAPI
