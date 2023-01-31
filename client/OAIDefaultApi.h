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

#ifndef OAI_OAIDefaultApi_H
#define OAI_OAIDefaultApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIHTTPValidationError.h"
#include "OAIOrganizationRead.h"
#include <QJsonValue>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIDefaultApi : public QObject {
    Q_OBJECT

public:
    OAIDefaultApi(const int timeOut = 0);
    ~OAIDefaultApi();

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


    void dummy();


    void dummyDb();


    void getOrganizationV2StressDbOrganizationGet();


    void getOrganizationWithAuthn();


    void getOrganizationWithAuthz();


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

    void dummyCallback(OAIHttpRequestWorker *worker);
    void dummyDbCallback(OAIHttpRequestWorker *worker);
    void getOrganizationV2StressDbOrganizationGetCallback(OAIHttpRequestWorker *worker);
    void getOrganizationWithAuthnCallback(OAIHttpRequestWorker *worker);
    void getOrganizationWithAuthzCallback(OAIHttpRequestWorker *worker);

signals:

    void dummySignal(QJsonValue summary);
    void dummyDbSignal(QJsonValue summary);
    void getOrganizationV2StressDbOrganizationGetSignal(OAIOrganizationRead summary);
    void getOrganizationWithAuthnSignal(OAIOrganizationRead summary);
    void getOrganizationWithAuthzSignal(OAIOrganizationRead summary);

    void dummySignalFull(OAIHttpRequestWorker *worker, QJsonValue summary);
    void dummyDbSignalFull(OAIHttpRequestWorker *worker, QJsonValue summary);
    void getOrganizationV2StressDbOrganizationGetSignalFull(OAIHttpRequestWorker *worker, OAIOrganizationRead summary);
    void getOrganizationWithAuthnSignalFull(OAIHttpRequestWorker *worker, OAIOrganizationRead summary);
    void getOrganizationWithAuthzSignalFull(OAIHttpRequestWorker *worker, OAIOrganizationRead summary);

    void dummySignalE(QJsonValue summary, QNetworkReply::NetworkError error_type, QString error_str);
    void dummyDbSignalE(QJsonValue summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationV2StressDbOrganizationGetSignalE(OAIOrganizationRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationWithAuthnSignalE(OAIOrganizationRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationWithAuthzSignalE(OAIOrganizationRead summary, QNetworkReply::NetworkError error_type, QString error_str);

    void dummySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void dummyDbSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationV2StressDbOrganizationGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationWithAuthnSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationWithAuthzSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
