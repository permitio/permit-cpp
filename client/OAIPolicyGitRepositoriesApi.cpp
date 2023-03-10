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

#include "OAIPolicyGitRepositoriesApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIPolicyGitRepositoriesApi::OAIPolicyGitRepositoriesApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIPolicyGitRepositoriesApi::~OAIPolicyGitRepositoriesApi() {
}

void OAIPolicyGitRepositoriesApi::initializeServerConfigs() {
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    defaultConf.append(OAIServerConfiguration(
    QUrl("/"),
    "No description provided",
    QMap<QString, OAIServerVariable>()));
    _serverConfigs.insert("activatePolicyRepo", defaultConf);
    _serverIndices.insert("activatePolicyRepo", 0);
    _serverConfigs.insert("createPolicyRepo", defaultConf);
    _serverIndices.insert("createPolicyRepo", 0);
    _serverConfigs.insert("deletePolicyRepo", defaultConf);
    _serverIndices.insert("deletePolicyRepo", 0);
    _serverConfigs.insert("disableActivePolicyRepo", defaultConf);
    _serverIndices.insert("disableActivePolicyRepo", 0);
    _serverConfigs.insert("getActivePolicyRepo", defaultConf);
    _serverIndices.insert("getActivePolicyRepo", 0);
    _serverConfigs.insert("getPolicyRepo", defaultConf);
    _serverIndices.insert("getPolicyRepo", 0);
    _serverConfigs.insert("listPolicyRepos", defaultConf);
    _serverIndices.insert("listPolicyRepos", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIPolicyGitRepositoriesApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIPolicyGitRepositoriesApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIPolicyGitRepositoriesApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void OAIPolicyGitRepositoriesApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIPolicyGitRepositoriesApi::setUsername(const QString &username) {
    _username = username;
}

void OAIPolicyGitRepositoriesApi::setPassword(const QString &password) {
    _password = password;
}


void OAIPolicyGitRepositoriesApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIPolicyGitRepositoriesApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIPolicyGitRepositoriesApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIPolicyGitRepositoriesApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIPolicyGitRepositoriesApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIPolicyGitRepositoriesApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIPolicyGitRepositoriesApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIPolicyGitRepositoriesApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIPolicyGitRepositoriesApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIPolicyGitRepositoriesApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIPolicyGitRepositoriesApi::getParamStylePrefix(const QString &style) {
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

QString OAIPolicyGitRepositoriesApi::getParamStyleSuffix(const QString &style) {
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

QString OAIPolicyGitRepositoriesApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void OAIPolicyGitRepositoriesApi::activatePolicyRepo(const QString &proj_id, const QString &repo_id) {
    QString fullPath = QString(_serverConfigs["activatePolicyRepo"][_serverIndices.value("activatePolicyRepo")].URL()+"/v2/projects/{proj_id}/repos/{repo_id}/activate");
    
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
        QString repo_idPathParam("{");
        repo_idPathParam.append("repo_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "repo_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"repo_id"+pathSuffix : pathPrefix;
        fullPath.replace(repo_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(repo_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyGitRepositoriesApi::activatePolicyRepoCallback);
    connect(this, &OAIPolicyGitRepositoriesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyGitRepositoriesApi::activatePolicyRepoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIProjectRead output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit activatePolicyRepoSignal(output);
        emit activatePolicyRepoSignalFull(worker, output);
    } else {
        emit activatePolicyRepoSignalE(output, error_type, error_str);
        emit activatePolicyRepoSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyGitRepositoriesApi::createPolicyRepo(const QString &proj_id, const OAIPolicyRepoCreate &oai_policy_repo_create) {
    QString fullPath = QString(_serverConfigs["createPolicyRepo"][_serverIndices.value("createPolicyRepo")].URL()+"/v2/projects/{proj_id}/repos");
    
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
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = oai_policy_repo_create.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyGitRepositoriesApi::createPolicyRepoCallback);
    connect(this, &OAIPolicyGitRepositoriesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyGitRepositoriesApi::createPolicyRepoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPolicyRepoRead output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit createPolicyRepoSignal(output);
        emit createPolicyRepoSignalFull(worker, output);
    } else {
        emit createPolicyRepoSignalE(output, error_type, error_str);
        emit createPolicyRepoSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyGitRepositoriesApi::deletePolicyRepo(const QString &proj_id, const QString &repo_id) {
    QString fullPath = QString(_serverConfigs["deletePolicyRepo"][_serverIndices.value("deletePolicyRepo")].URL()+"/v2/projects/{proj_id}/repos/{repo_id}");
    
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
        QString repo_idPathParam("{");
        repo_idPathParam.append("repo_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "repo_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"repo_id"+pathSuffix : pathPrefix;
        fullPath.replace(repo_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(repo_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyGitRepositoriesApi::deletePolicyRepoCallback);
    connect(this, &OAIPolicyGitRepositoriesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyGitRepositoriesApi::deletePolicyRepoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit deletePolicyRepoSignal();
        emit deletePolicyRepoSignalFull(worker);
    } else {
        emit deletePolicyRepoSignalE(error_type, error_str);
        emit deletePolicyRepoSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyGitRepositoriesApi::disableActivePolicyRepo(const QString &proj_id) {
    QString fullPath = QString(_serverConfigs["disableActivePolicyRepo"][_serverIndices.value("disableActivePolicyRepo")].URL()+"/v2/projects/{proj_id}/repos/disable");
    
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
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyGitRepositoriesApi::disableActivePolicyRepoCallback);
    connect(this, &OAIPolicyGitRepositoriesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyGitRepositoriesApi::disableActivePolicyRepoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIProjectRead output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit disableActivePolicyRepoSignal(output);
        emit disableActivePolicyRepoSignalFull(worker, output);
    } else {
        emit disableActivePolicyRepoSignalE(output, error_type, error_str);
        emit disableActivePolicyRepoSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyGitRepositoriesApi::getActivePolicyRepo(const QString &proj_id) {
    QString fullPath = QString(_serverConfigs["getActivePolicyRepo"][_serverIndices.value("getActivePolicyRepo")].URL()+"/v2/projects/{proj_id}/repos/active");
    
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyGitRepositoriesApi::getActivePolicyRepoCallback);
    connect(this, &OAIPolicyGitRepositoriesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyGitRepositoriesApi::getActivePolicyRepoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPolicyRepoRead output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getActivePolicyRepoSignal(output);
        emit getActivePolicyRepoSignalFull(worker, output);
    } else {
        emit getActivePolicyRepoSignalE(output, error_type, error_str);
        emit getActivePolicyRepoSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyGitRepositoriesApi::getPolicyRepo(const QString &proj_id, const QString &repo_id) {
    QString fullPath = QString(_serverConfigs["getPolicyRepo"][_serverIndices.value("getPolicyRepo")].URL()+"/v2/projects/{proj_id}/repos/{repo_id}");
    
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
        QString repo_idPathParam("{");
        repo_idPathParam.append("repo_id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "repo_id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"repo_id"+pathSuffix : pathPrefix;
        fullPath.replace(repo_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(repo_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyGitRepositoriesApi::getPolicyRepoCallback);
    connect(this, &OAIPolicyGitRepositoriesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyGitRepositoriesApi::getPolicyRepoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPolicyRepoRead output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getPolicyRepoSignal(output);
        emit getPolicyRepoSignalFull(worker, output);
    } else {
        emit getPolicyRepoSignalE(output, error_type, error_str);
        emit getPolicyRepoSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyGitRepositoriesApi::listPolicyRepos(const QString &proj_id, const ::OpenAPI::OptionalParam<qint32> &page, const ::OpenAPI::OptionalParam<qint32> &per_page) {
    QString fullPath = QString(_serverConfigs["listPolicyRepos"][_serverIndices.value("listPolicyRepos")].URL()+"/v2/projects/{proj_id}/repos");
    
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIPolicyGitRepositoriesApi::listPolicyReposCallback);
    connect(this, &OAIPolicyGitRepositoriesApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIPolicyGitRepositoriesApi::listPolicyReposCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    QList<OAIPolicyRepoRead> output;
    QString json(worker->response);
    QByteArray array(json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    for (QJsonValue obj : jsonArray) {
        OAIPolicyRepoRead val;
        ::OpenAPI::fromJsonValue(val, obj);
        output.append(val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit listPolicyReposSignal(output);
        emit listPolicyReposSignalFull(worker, output);
    } else {
        emit listPolicyReposSignalE(output, error_type, error_str);
        emit listPolicyReposSignalEFull(worker, error_type, error_str);
    }
}

void OAIPolicyGitRepositoriesApi::tokenAvailable(){

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
