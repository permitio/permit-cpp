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

#include "OAIPolicyDecisionPointsApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIPolicyDecisionPointsApi::OAIPolicyDecisionPointsApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIPolicyDecisionPointsApi::~OAIPolicyDecisionPointsApi() {
}

void OAIPolicyDecisionPointsApi::initializeServerConfigs() {
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    defaultConf.append(OAIServerConfiguration(
    QUrl("/"),
    "No description provided",
    QMap<QString, OAIServerVariable>()));
    _serverConfigs.insert("getAuthenticatingPdpConfigValues", defaultConf);
    _serverIndices.insert("getAuthenticatingPdpConfigValues", 0);
    _serverConfigs.insert("getAuthenticatingPdpConfigValuesLegacy", defaultConf);
    _serverIndices.insert("getAuthenticatingPdpConfigValuesLegacy", 0);
    _serverConfigs.insert("getPdpConfigValues", defaultConf);
    _serverIndices.insert("getPdpConfigValues", 0);
    _serverConfigs.insert("listPdpConfigs", defaultConf);
    _serverIndices.insert("listPdpConfigs", 0);
    _serverConfigs.insert("rotatePdpApiKey", defaultConf);
    _serverIndices.insert("rotatePdpApiKey", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIPolicyDecisionPointsApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIPolicyDecisionPointsApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIPolicyDecisionPointsApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void OAIPolicyDecisionPointsApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIPolicyDecisionPointsApi::setUsername(const QString &username) {
    _username = username;
}

void OAIPolicyDecisionPointsApi::setPassword(const QString &password) {
    _password = password;
}


void OAIPolicyDecisionPointsApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIPolicyDecisionPointsApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIPolicyDecisionPointsApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int OAIPolicyDecisionPointsApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIPolicyDecisionPointsApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
#else
    for (auto &e : _serverIndices.keys()) {
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
#endif
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIPolicyDecisionPointsApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIPolicyDecisionPointsApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIPolicyDecisionPointsApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIPolicyDecisionPointsApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIPolicyDecisionPointsApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIPolicyDecisionPointsApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString OAIPolicyDecisionPointsApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString OAIPolicyDecisionPointsApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void OAIPolicyDecisionPointsApi::getAuthenticatingPdpConfigValues(const OAIPDPStateUpdate &oaipdp_state_update) {
    QString fullPath = QString(_serverConfigs["getAuthenticatingPdpConfigValues"][_serverIndices.value("getAuthenticatingPdpConfigValues")].URL()+"/v2/pdps/me/config");
    
    if (!_bearerToken.isEmpty())
        addHeaders("Authorization", "Bearer " + _bearerToken);
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = oaipdp_state_update.asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyDecisionPointsApi::getAuthenticatingPdpConfigValuesCallback);
    connect(this, &OAIPolicyDecisionPointsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyDecisionPointsApi::getAuthenticatingPdpConfigValuesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRemoteConfig output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getAuthenticatingPdpConfigValuesSignal(output);
        emit getAuthenticatingPdpConfigValuesSignalFull(worker, output);
    } else {
        emit getAuthenticatingPdpConfigValuesSignalE(output, error_type, error_str);
        emit getAuthenticatingPdpConfigValuesSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyDecisionPointsApi::getAuthenticatingPdpConfigValuesLegacy() {
    QString fullPath = QString(_serverConfigs["getAuthenticatingPdpConfigValuesLegacy"][_serverIndices.value("getAuthenticatingPdpConfigValuesLegacy")].URL()+"/v2/pdps/me/config");
    
    if (!_bearerToken.isEmpty())
        addHeaders("Authorization", "Bearer " + _bearerToken);
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyDecisionPointsApi::getAuthenticatingPdpConfigValuesLegacyCallback);
    connect(this, &OAIPolicyDecisionPointsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyDecisionPointsApi::getAuthenticatingPdpConfigValuesLegacyCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRemoteConfig output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getAuthenticatingPdpConfigValuesLegacySignal(output);
        emit getAuthenticatingPdpConfigValuesLegacySignalFull(worker, output);
    } else {
        emit getAuthenticatingPdpConfigValuesLegacySignalE(output, error_type, error_str);
        emit getAuthenticatingPdpConfigValuesLegacySignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyDecisionPointsApi::getPdpConfigValues(const QString &proj_id, const QString &env_id, const QString &pdp_id) {
    QString fullPath = QString(_serverConfigs["getPdpConfigValues"][_serverIndices.value("getPdpConfigValues")].URL()+"/v2/pdps/{proj_id}/{env_id}/configs/{pdp_id}/values");
    
    if (!_bearerToken.isEmpty())
        addHeaders("Authorization", "Bearer " + _bearerToken);
    
    
    {
        QString proj_idPathParam("{");
        proj_idPathParam.append("proj_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "proj_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"proj_id"+pathSuffix : pathPrefix;
        fullPath.replace(proj_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(proj_id)));
    }
    
    {
        QString env_idPathParam("{");
        env_idPathParam.append("env_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "env_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"env_id"+pathSuffix : pathPrefix;
        fullPath.replace(env_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(env_id)));
    }
    
    {
        QString pdp_idPathParam("{");
        pdp_idPathParam.append("pdp_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pdp_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pdp_id"+pathSuffix : pathPrefix;
        fullPath.replace(pdp_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pdp_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyDecisionPointsApi::getPdpConfigValuesCallback);
    connect(this, &OAIPolicyDecisionPointsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyDecisionPointsApi::getPdpConfigValuesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRemoteConfig output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getPdpConfigValuesSignal(output);
        emit getPdpConfigValuesSignalFull(worker, output);
    } else {
        emit getPdpConfigValuesSignalE(output, error_type, error_str);
        emit getPdpConfigValuesSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyDecisionPointsApi::listPdpConfigs(const QString &proj_id, const QString &env_id, const ::OpenAPI::OptionalParam<qint32> &page, const ::OpenAPI::OptionalParam<qint32> &per_page) {
    QString fullPath = QString(_serverConfigs["listPdpConfigs"][_serverIndices.value("listPdpConfigs")].URL()+"/v2/pdps/{proj_id}/{env_id}/configs");
    
    if (!_bearerToken.isEmpty())
        addHeaders("Authorization", "Bearer " + _bearerToken);
    
    
    {
        QString proj_idPathParam("{");
        proj_idPathParam.append("proj_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "proj_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"proj_id"+pathSuffix : pathPrefix;
        fullPath.replace(proj_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(proj_id)));
    }
    
    {
        QString env_idPathParam("{");
        env_idPathParam.append("env_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "env_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"env_id"+pathSuffix : pathPrefix;
        fullPath.replace(env_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(env_id)));
    }
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    if (page.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "page", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("page")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(page.value())));
    }
    if (per_page.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "per_page", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("per_page")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(per_page.value())));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyDecisionPointsApi::listPdpConfigsCallback);
    connect(this, &OAIPolicyDecisionPointsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyDecisionPointsApi::listPdpConfigsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    QList<OAIPDPConfigRead> output;
    QString json(worker->response);
    QByteArray array(json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    for (QJsonValue obj : jsonArray) {
        OAIPDPConfigRead val;
        ::OpenAPI::fromJsonValue(val, obj);
        output.append(val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit listPdpConfigsSignal(output);
        emit listPdpConfigsSignalFull(worker, output);
    } else {
        emit listPdpConfigsSignalE(output, error_type, error_str);
        emit listPdpConfigsSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyDecisionPointsApi::rotatePdpApiKey(const QString &proj_id, const QString &env_id, const QString &pdp_id) {
    QString fullPath = QString(_serverConfigs["rotatePdpApiKey"][_serverIndices.value("rotatePdpApiKey")].URL()+"/v2/pdps/{proj_id}/{env_id}/configs/{pdp_id}/rotate-api-key");
    
    if (!_bearerToken.isEmpty())
        addHeaders("Authorization", "Bearer " + _bearerToken);
    
    
    {
        QString proj_idPathParam("{");
        proj_idPathParam.append("proj_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "proj_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"proj_id"+pathSuffix : pathPrefix;
        fullPath.replace(proj_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(proj_id)));
    }
    
    {
        QString env_idPathParam("{");
        env_idPathParam.append("env_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "env_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"env_id"+pathSuffix : pathPrefix;
        fullPath.replace(env_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(env_id)));
    }
    
    {
        QString pdp_idPathParam("{");
        pdp_idPathParam.append("pdp_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pdp_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pdp_id"+pathSuffix : pathPrefix;
        fullPath.replace(pdp_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pdp_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyDecisionPointsApi::rotatePdpApiKeyCallback);
    connect(this, &OAIPolicyDecisionPointsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyDecisionPointsApi::rotatePdpApiKeyCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPDPConfigRead output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit rotatePdpApiKeySignal(output);
        emit rotatePdpApiKeySignalFull(worker, output);
    } else {
        emit rotatePdpApiKeySignalE(output, error_type, error_str);
        emit rotatePdpApiKeySignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyDecisionPointsApi::tokenAvailable(){

    oauthToken token;
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace OpenAPI