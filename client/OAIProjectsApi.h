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

#ifndef OAI_OAIProjectsApi_H
#define OAI_OAIProjectsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIHTTPValidationError.h"
#include "OAIProjectCreate.h"
#include "OAIProjectRead.h"
#include "OAIProjectUpdate.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIProjectsApi : public QObject {
    Q_OBJECT

public:
    OAIProjectsApi(const int timeOut = 0);
    ~OAIProjectsApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  oai_project_create OAIProjectCreate [required]
    */
    void createProject(const OAIProjectCreate &oai_project_create);

    /**
    * @param[in]  proj_id QString [required]
    */
    void deleteProject(const QString &proj_id);

    /**
    * @param[in]  proj_id QString [required]
    */
    void getProject(const QString &proj_id);

    /**
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listProjects(const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  oai_project_update OAIProjectUpdate [required]
    */
    void updateProject(const QString &proj_id, const OAIProjectUpdate &oai_project_update);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void createProjectCallback(OAIHttpRequestWorker *worker);
    void deleteProjectCallback(OAIHttpRequestWorker *worker);
    void getProjectCallback(OAIHttpRequestWorker *worker);
    void listProjectsCallback(OAIHttpRequestWorker *worker);
    void updateProjectCallback(OAIHttpRequestWorker *worker);

signals:

    void createProjectSignal(OAIProjectRead summary);
    void deleteProjectSignal();
    void getProjectSignal(OAIProjectRead summary);
    void listProjectsSignal(QList<OAIProjectRead> summary);
    void updateProjectSignal(OAIProjectRead summary);

    void createProjectSignalFull(OAIHttpRequestWorker *worker, OAIProjectRead summary);
    void deleteProjectSignalFull(OAIHttpRequestWorker *worker);
    void getProjectSignalFull(OAIHttpRequestWorker *worker, OAIProjectRead summary);
    void listProjectsSignalFull(OAIHttpRequestWorker *worker, QList<OAIProjectRead> summary);
    void updateProjectSignalFull(OAIHttpRequestWorker *worker, OAIProjectRead summary);

    void createProjectSignalE(OAIProjectRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteProjectSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getProjectSignalE(OAIProjectRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listProjectsSignalE(QList<OAIProjectRead> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateProjectSignalE(OAIProjectRead summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createProjectSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteProjectSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getProjectSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listProjectsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateProjectSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
