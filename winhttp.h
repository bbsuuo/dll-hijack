#define __WINE_WINHTTP_H
#define DLL_NAME "winhttp"
#include "hijack.h"

EXPORT DllCanUnloadNow() NOP_FUNC(1);
EXPORT DllGetClassObject() NOP_FUNC(2);
EXPORT Private1() NOP_FUNC(3);
EXPORT SvchostPushServiceGlobals() NOP_FUNC(4);
EXPORT WinHttpAddRequestHeaders() NOP_FUNC(5);
EXPORT WinHttpAutoProxySvcMain() NOP_FUNC(6);
EXPORT WinHttpCheckPlatform() NOP_FUNC(7);
EXPORT WinHttpCloseHandle() NOP_FUNC(8);
EXPORT WinHttpConnect() NOP_FUNC(9);
EXPORT WinHttpConnectionDeleteProxyInfo() NOP_FUNC(10);
EXPORT WinHttpConnectionFreeNameList() NOP_FUNC(11);
EXPORT WinHttpConnectionFreeProxyInfo() NOP_FUNC(12);
EXPORT WinHttpConnectionFreeProxyList() NOP_FUNC(13);
EXPORT WinHttpConnectionGetNameList() NOP_FUNC(14);
EXPORT WinHttpConnectionGetProxyInfo() NOP_FUNC(15);
EXPORT WinHttpConnectionGetProxyList() NOP_FUNC(16);
EXPORT WinHttpConnectionSetProxyInfo() NOP_FUNC(17);
EXPORT WinHttpCrackUrl() NOP_FUNC(18);
EXPORT WinHttpCreateProxyResolver() NOP_FUNC(19);
EXPORT WinHttpCreateUrl() NOP_FUNC(20);
EXPORT WinHttpDetectAutoProxyConfigUrl() NOP_FUNC(21);
EXPORT WinHttpFreeProxyResult() NOP_FUNC(22);
EXPORT WinHttpGetDefaultProxyConfiguration() NOP_FUNC(23);
EXPORT WinHttpGetIEProxyConfigForCurrentUser() NOP_FUNC(24);
EXPORT WinHttpGetProxyForUrl() NOP_FUNC(25);
EXPORT WinHttpGetProxyForUrlEx() NOP_FUNC(26);
EXPORT WinHttpGetProxyResult() NOP_FUNC(27);
EXPORT WinHttpGetTunnelSocket() NOP_FUNC(28);
EXPORT WinHttpOpen() NOP_FUNC(29);
EXPORT WinHttpOpenRequest() NOP_FUNC(30);
EXPORT WinHttpProbeConnectivity() NOP_FUNC(31);
EXPORT WinHttpQueryAuthSchemes() NOP_FUNC(32);
EXPORT WinHttpQueryDataAvailable() NOP_FUNC(33);
EXPORT WinHttpQueryHeaders() NOP_FUNC(34);
EXPORT WinHttpQueryOption() NOP_FUNC(35);
EXPORT WinHttpReadData() NOP_FUNC(36);
EXPORT WinHttpReceiveResponse() NOP_FUNC(37);
EXPORT WinHttpResetAutoProxy() NOP_FUNC(38);
EXPORT WinHttpSaveProxyCredentials() NOP_FUNC(39);
EXPORT WinHttpSendRequest() NOP_FUNC(40);
EXPORT WinHttpSetCredentials() NOP_FUNC(41);
EXPORT WinHttpSetDefaultProxyConfiguration() NOP_FUNC(42);
EXPORT WinHttpSetOption() NOP_FUNC(43);
EXPORT WinHttpSetStatusCallback() NOP_FUNC(44);
EXPORT WinHttpSetTimeouts() NOP_FUNC(45);
EXPORT WinHttpTimeFromSystemTime() NOP_FUNC(46);
EXPORT WinHttpTimeToSystemTime() NOP_FUNC(47);
EXPORT WinHttpWebSocketClose() NOP_FUNC(48);
EXPORT WinHttpWebSocketCompleteUpgrade() NOP_FUNC(49);
EXPORT WinHttpWebSocketQueryCloseStatus() NOP_FUNC(50);
EXPORT WinHttpWebSocketReceive() NOP_FUNC(51);
EXPORT WinHttpWebSocketSend() NOP_FUNC(52);
EXPORT WinHttpWebSocketShutdown() NOP_FUNC(53);
EXPORT WinHttpWriteData() NOP_FUNC(54);
