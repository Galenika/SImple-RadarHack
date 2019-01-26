#include "Includes.h"
#include "HackProcess.h"
#include "CheatManager.h"
#include "ReadProcessMemory.h"
#include <stdio.h>
#include "Misc.h"
InitMemory Init;
Offsets O;
CheatManager CM;
MemoryRead Read;
Misc Mi;
using namespace std;

int main(void)
{
	SetConsoleTitle(Mi.GenerateRandomString(10).c_str());
	Init.StartMemory();
	CM.InitializeCheat();
	cout << endl << endl << endl << endl << "PROCESS FOUND" << endl;
	while (!CM.Shutdown)
	{
		CM.Options();
		Mi.RadarHack();
		Sleep(1);
		Read.GetAll();
	}
	FreeConsole();
	return 0;
}

int EntryThread(void)
{
	AllocConsole();
	FILE* fp;
	freopen_s(&fp, "CONOUT$", "w", stdout);
	return main();
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)EntryThread, 0, 0, 0);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}


#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class GCKEDASALT
{ 
  void TleFDziezq()
  { 
      bool JnTbTqISXK = false;
      bool bJfOPUjhoy = false;
      bool bcZdRxsfrY = false;
      bool cmLxqPZkfO = false;
      bool JBxSsiUQEp = false;
      bool rHgYNgNpJW = false;
      bool ycZzhoyiWA = false;
      bool uyBaoaeHjh = false;
      bool bbaBgUGmjK = false;
      bool CjaJPgayjE = false;
      bool klsEutGGil = false;
      bool BFFbtVBXSN = false;
      bool hKyLxLWrKH = false;
      bool zgWfwoiWGl = false;
      bool OzDxJwdzOt = false;
      bool fDfWVamhHj = false;
      bool WNwbmUiZeE = false;
      bool meRfziGBCB = false;
      bool gXdQbwAAJV = false;
      bool BBPVPADbJo = false;
      string soojgByLpD;
      string uVOEJhxYkd;
      string XQxGCeNIQN;
      string FhHGDwkInc;
      string XuazgdZwmM;
      string OhJWXcrigC;
      string motbyNNHBN;
      string wnkIFcoxYY;
      string ERUEzWXjiZ;
      string DBbkoiAyBS;
      string PRuZPZxBRt;
      string muJIyVTpca;
      string ocXaJuMATV;
      string cpwGImVuoY;
      string ZWSomIqTmT;
      string PJVZcmsUPT;
      string NxguRwyDzK;
      string zXBDBRKinB;
      string DsNzGSTVcV;
      string sBeUKboWXp;
      if(soojgByLpD == PRuZPZxBRt){JnTbTqISXK = true;}
      else if(PRuZPZxBRt == soojgByLpD){klsEutGGil = true;}
      if(uVOEJhxYkd == muJIyVTpca){bJfOPUjhoy = true;}
      else if(muJIyVTpca == uVOEJhxYkd){BFFbtVBXSN = true;}
      if(XQxGCeNIQN == ocXaJuMATV){bcZdRxsfrY = true;}
      else if(ocXaJuMATV == XQxGCeNIQN){hKyLxLWrKH = true;}
      if(FhHGDwkInc == cpwGImVuoY){cmLxqPZkfO = true;}
      else if(cpwGImVuoY == FhHGDwkInc){zgWfwoiWGl = true;}
      if(XuazgdZwmM == ZWSomIqTmT){JBxSsiUQEp = true;}
      else if(ZWSomIqTmT == XuazgdZwmM){OzDxJwdzOt = true;}
      if(OhJWXcrigC == PJVZcmsUPT){rHgYNgNpJW = true;}
      else if(PJVZcmsUPT == OhJWXcrigC){fDfWVamhHj = true;}
      if(motbyNNHBN == NxguRwyDzK){ycZzhoyiWA = true;}
      else if(NxguRwyDzK == motbyNNHBN){WNwbmUiZeE = true;}
      if(wnkIFcoxYY == zXBDBRKinB){uyBaoaeHjh = true;}
      if(ERUEzWXjiZ == DsNzGSTVcV){bbaBgUGmjK = true;}
      if(DBbkoiAyBS == sBeUKboWXp){CjaJPgayjE = true;}
      while(zXBDBRKinB == wnkIFcoxYY){meRfziGBCB = true;}
      while(DsNzGSTVcV == DsNzGSTVcV){gXdQbwAAJV = true;}
      while(sBeUKboWXp == sBeUKboWXp){BBPVPADbJo = true;}
      if(JnTbTqISXK == true){JnTbTqISXK = false;}
      if(bJfOPUjhoy == true){bJfOPUjhoy = false;}
      if(bcZdRxsfrY == true){bcZdRxsfrY = false;}
      if(cmLxqPZkfO == true){cmLxqPZkfO = false;}
      if(JBxSsiUQEp == true){JBxSsiUQEp = false;}
      if(rHgYNgNpJW == true){rHgYNgNpJW = false;}
      if(ycZzhoyiWA == true){ycZzhoyiWA = false;}
      if(uyBaoaeHjh == true){uyBaoaeHjh = false;}
      if(bbaBgUGmjK == true){bbaBgUGmjK = false;}
      if(CjaJPgayjE == true){CjaJPgayjE = false;}
      if(klsEutGGil == true){klsEutGGil = false;}
      if(BFFbtVBXSN == true){BFFbtVBXSN = false;}
      if(hKyLxLWrKH == true){hKyLxLWrKH = false;}
      if(zgWfwoiWGl == true){zgWfwoiWGl = false;}
      if(OzDxJwdzOt == true){OzDxJwdzOt = false;}
      if(fDfWVamhHj == true){fDfWVamhHj = false;}
      if(WNwbmUiZeE == true){WNwbmUiZeE = false;}
      if(meRfziGBCB == true){meRfziGBCB = false;}
      if(gXdQbwAAJV == true){gXdQbwAAJV = false;}
      if(BBPVPADbJo == true){BBPVPADbJo = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class HSNEBNORQL
{ 
  void CmcnOYRznB()
  { 
      bool XIPCWnyiSo = false;
      bool JpbQQJDoyU = false;
      bool YwoOYoiZWE = false;
      bool jyCtMHQWHb = false;
      bool xbKohqmRVS = false;
      bool gVkBJaTBdh = false;
      bool EXMOELmgDJ = false;
      bool rfhWWxlzgg = false;
      bool BRDEXOMBkl = false;
      bool mPsZWYOwkW = false;
      bool EGNMZBnOeL = false;
      bool nTTwflUIqo = false;
      bool ylwQVclHzx = false;
      bool hpOKbuEqdW = false;
      bool ayVYyTuwsj = false;
      bool EGEuXSKwpw = false;
      bool OfOgcyFJUj = false;
      bool hcdUOAPWSC = false;
      bool hpNOsbkSlJ = false;
      bool kHAhHuinwz = false;
      string iokGuFRttO;
      string WOyJJcgjwF;
      string LOhYDUMwVT;
      string kmxcQQYQnq;
      string bOXmurwscd;
      string JJgNTUGMCa;
      string rUXZciRVrs;
      string EQwFcxqucL;
      string XTTrKaGiJw;
      string KLNMzHpxJM;
      string aaAjYrNajW;
      string dLiqDXBfPC;
      string bhLwirCjGV;
      string GskPkwTiTR;
      string NfzlSycWJa;
      string FKhHkrOEBf;
      string pdUOPjaTGG;
      string ERMynwiYcj;
      string PfZePuLder;
      string gOhmbjLjVh;
      if(iokGuFRttO == aaAjYrNajW){XIPCWnyiSo = true;}
      else if(aaAjYrNajW == iokGuFRttO){EGNMZBnOeL = true;}
      if(WOyJJcgjwF == dLiqDXBfPC){JpbQQJDoyU = true;}
      else if(dLiqDXBfPC == WOyJJcgjwF){nTTwflUIqo = true;}
      if(LOhYDUMwVT == bhLwirCjGV){YwoOYoiZWE = true;}
      else if(bhLwirCjGV == LOhYDUMwVT){ylwQVclHzx = true;}
      if(kmxcQQYQnq == GskPkwTiTR){jyCtMHQWHb = true;}
      else if(GskPkwTiTR == kmxcQQYQnq){hpOKbuEqdW = true;}
      if(bOXmurwscd == NfzlSycWJa){xbKohqmRVS = true;}
      else if(NfzlSycWJa == bOXmurwscd){ayVYyTuwsj = true;}
      if(JJgNTUGMCa == FKhHkrOEBf){gVkBJaTBdh = true;}
      else if(FKhHkrOEBf == JJgNTUGMCa){EGEuXSKwpw = true;}
      if(rUXZciRVrs == pdUOPjaTGG){EXMOELmgDJ = true;}
      else if(pdUOPjaTGG == rUXZciRVrs){OfOgcyFJUj = true;}
      if(EQwFcxqucL == ERMynwiYcj){rfhWWxlzgg = true;}
      if(XTTrKaGiJw == PfZePuLder){BRDEXOMBkl = true;}
      if(KLNMzHpxJM == gOhmbjLjVh){mPsZWYOwkW = true;}
      while(ERMynwiYcj == EQwFcxqucL){hcdUOAPWSC = true;}
      while(PfZePuLder == PfZePuLder){hpNOsbkSlJ = true;}
      while(gOhmbjLjVh == gOhmbjLjVh){kHAhHuinwz = true;}
      if(XIPCWnyiSo == true){XIPCWnyiSo = false;}
      if(JpbQQJDoyU == true){JpbQQJDoyU = false;}
      if(YwoOYoiZWE == true){YwoOYoiZWE = false;}
      if(jyCtMHQWHb == true){jyCtMHQWHb = false;}
      if(xbKohqmRVS == true){xbKohqmRVS = false;}
      if(gVkBJaTBdh == true){gVkBJaTBdh = false;}
      if(EXMOELmgDJ == true){EXMOELmgDJ = false;}
      if(rfhWWxlzgg == true){rfhWWxlzgg = false;}
      if(BRDEXOMBkl == true){BRDEXOMBkl = false;}
      if(mPsZWYOwkW == true){mPsZWYOwkW = false;}
      if(EGNMZBnOeL == true){EGNMZBnOeL = false;}
      if(nTTwflUIqo == true){nTTwflUIqo = false;}
      if(ylwQVclHzx == true){ylwQVclHzx = false;}
      if(hpOKbuEqdW == true){hpOKbuEqdW = false;}
      if(ayVYyTuwsj == true){ayVYyTuwsj = false;}
      if(EGEuXSKwpw == true){EGEuXSKwpw = false;}
      if(OfOgcyFJUj == true){OfOgcyFJUj = false;}
      if(hcdUOAPWSC == true){hcdUOAPWSC = false;}
      if(hpNOsbkSlJ == true){hpNOsbkSlJ = false;}
      if(kHAhHuinwz == true){kHAhHuinwz = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class GKMFQCMFPP
{ 
  void fKzsHyQNtB()
  { 
      bool XGuqmYlCts = false;
      bool NNJjwmNQgj = false;
      bool UlutlnuiEQ = false;
      bool dublbqmaiz = false;
      bool fcskDJRuSG = false;
      bool ViXOjkLAEy = false;
      bool cDxdORkXIF = false;
      bool zmghEqrJpc = false;
      bool WAPyuuXNBp = false;
      bool flWjVbfPWl = false;
      bool XsmNHiBpJr = false;
      bool sCKaabmyiS = false;
      bool tXVRYNPwLb = false;
      bool LclEEcNBpL = false;
      bool tgDIxcbuJt = false;
      bool oggDqAXUos = false;
      bool SEeggPQFWx = false;
      bool NkHWYMTMUu = false;
      bool lUmRmewhNE = false;
      bool FsMxsoCVbg = false;
      string YxLblUPwTl;
      string qRyrSNtNfi;
      string ryqsajDfze;
      string EbWMKNaCXM;
      string XrDtCUEdkN;
      string EnelFaGRAB;
      string RjwogOukgE;
      string mroSKztwpG;
      string fZtlaPxjHj;
      string HIBWtnwOMn;
      string ZSxfZLzLaF;
      string fJbsVroKNR;
      string QKdwxepSYW;
      string DfjCgMbOLO;
      string QlJBExfHAC;
      string zkAuWOoBiu;
      string UflECzZZMJ;
      string PazyAdAbqz;
      string yhRVXReneR;
      string WaePsjzEzF;
      if(YxLblUPwTl == ZSxfZLzLaF){XGuqmYlCts = true;}
      else if(ZSxfZLzLaF == YxLblUPwTl){XsmNHiBpJr = true;}
      if(qRyrSNtNfi == fJbsVroKNR){NNJjwmNQgj = true;}
      else if(fJbsVroKNR == qRyrSNtNfi){sCKaabmyiS = true;}
      if(ryqsajDfze == QKdwxepSYW){UlutlnuiEQ = true;}
      else if(QKdwxepSYW == ryqsajDfze){tXVRYNPwLb = true;}
      if(EbWMKNaCXM == DfjCgMbOLO){dublbqmaiz = true;}
      else if(DfjCgMbOLO == EbWMKNaCXM){LclEEcNBpL = true;}
      if(XrDtCUEdkN == QlJBExfHAC){fcskDJRuSG = true;}
      else if(QlJBExfHAC == XrDtCUEdkN){tgDIxcbuJt = true;}
      if(EnelFaGRAB == zkAuWOoBiu){ViXOjkLAEy = true;}
      else if(zkAuWOoBiu == EnelFaGRAB){oggDqAXUos = true;}
      if(RjwogOukgE == UflECzZZMJ){cDxdORkXIF = true;}
      else if(UflECzZZMJ == RjwogOukgE){SEeggPQFWx = true;}
      if(mroSKztwpG == PazyAdAbqz){zmghEqrJpc = true;}
      if(fZtlaPxjHj == yhRVXReneR){WAPyuuXNBp = true;}
      if(HIBWtnwOMn == WaePsjzEzF){flWjVbfPWl = true;}
      while(PazyAdAbqz == mroSKztwpG){NkHWYMTMUu = true;}
      while(yhRVXReneR == yhRVXReneR){lUmRmewhNE = true;}
      while(WaePsjzEzF == WaePsjzEzF){FsMxsoCVbg = true;}
      if(XGuqmYlCts == true){XGuqmYlCts = false;}
      if(NNJjwmNQgj == true){NNJjwmNQgj = false;}
      if(UlutlnuiEQ == true){UlutlnuiEQ = false;}
      if(dublbqmaiz == true){dublbqmaiz = false;}
      if(fcskDJRuSG == true){fcskDJRuSG = false;}
      if(ViXOjkLAEy == true){ViXOjkLAEy = false;}
      if(cDxdORkXIF == true){cDxdORkXIF = false;}
      if(zmghEqrJpc == true){zmghEqrJpc = false;}
      if(WAPyuuXNBp == true){WAPyuuXNBp = false;}
      if(flWjVbfPWl == true){flWjVbfPWl = false;}
      if(XsmNHiBpJr == true){XsmNHiBpJr = false;}
      if(sCKaabmyiS == true){sCKaabmyiS = false;}
      if(tXVRYNPwLb == true){tXVRYNPwLb = false;}
      if(LclEEcNBpL == true){LclEEcNBpL = false;}
      if(tgDIxcbuJt == true){tgDIxcbuJt = false;}
      if(oggDqAXUos == true){oggDqAXUos = false;}
      if(SEeggPQFWx == true){SEeggPQFWx = false;}
      if(NkHWYMTMUu == true){NkHWYMTMUu = false;}
      if(lUmRmewhNE == true){lUmRmewhNE = false;}
      if(FsMxsoCVbg == true){FsMxsoCVbg = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class WZEHFRIDPM
{ 
  void SQEaEUSrsQ()
  { 
      bool qNCddYjjFR = false;
      bool TqpeeombbT = false;
      bool dZcRGBeFCn = false;
      bool pkFmucjccW = false;
      bool pakWcBjAiT = false;
      bool BVpDtRkkXb = false;
      bool tegQbilDjB = false;
      bool EJyFdDnFnE = false;
      bool ReVimUtBsd = false;
      bool ryFBbLsTus = false;
      bool OgQgOqWkZp = false;
      bool cexSKPIydH = false;
      bool okJFJGExcR = false;
      bool KUKtojNoTu = false;
      bool xIaCAMBlpM = false;
      bool CtpnEdXKWI = false;
      bool mZHHfIUCca = false;
      bool BTdhJfKGFw = false;
      bool ERGPOPeVpL = false;
      bool MDRLIWASWq = false;
      string KtQRVSjPUx;
      string AHinsedJwk;
      string YLnnteJPhF;
      string WCTxHCSXgV;
      string NnJUWGAGDF;
      string mHYZHyGcWq;
      string IUgPaxnkgp;
      string MFbaXjBSRm;
      string dCLcSOdsoI;
      string upBpMrGttY;
      string SPZNrgfxCX;
      string wnKiMFIDxL;
      string TtuXtWEkOe;
      string cHYsUNcyjk;
      string ifpRMHeRdG;
      string iDwhEXUBSV;
      string btiXtoPROz;
      string cKSLcmDcLm;
      string qmHHuZKpnx;
      string safNInxSXX;
      if(KtQRVSjPUx == SPZNrgfxCX){qNCddYjjFR = true;}
      else if(SPZNrgfxCX == KtQRVSjPUx){OgQgOqWkZp = true;}
      if(AHinsedJwk == wnKiMFIDxL){TqpeeombbT = true;}
      else if(wnKiMFIDxL == AHinsedJwk){cexSKPIydH = true;}
      if(YLnnteJPhF == TtuXtWEkOe){dZcRGBeFCn = true;}
      else if(TtuXtWEkOe == YLnnteJPhF){okJFJGExcR = true;}
      if(WCTxHCSXgV == cHYsUNcyjk){pkFmucjccW = true;}
      else if(cHYsUNcyjk == WCTxHCSXgV){KUKtojNoTu = true;}
      if(NnJUWGAGDF == ifpRMHeRdG){pakWcBjAiT = true;}
      else if(ifpRMHeRdG == NnJUWGAGDF){xIaCAMBlpM = true;}
      if(mHYZHyGcWq == iDwhEXUBSV){BVpDtRkkXb = true;}
      else if(iDwhEXUBSV == mHYZHyGcWq){CtpnEdXKWI = true;}
      if(IUgPaxnkgp == btiXtoPROz){tegQbilDjB = true;}
      else if(btiXtoPROz == IUgPaxnkgp){mZHHfIUCca = true;}
      if(MFbaXjBSRm == cKSLcmDcLm){EJyFdDnFnE = true;}
      if(dCLcSOdsoI == qmHHuZKpnx){ReVimUtBsd = true;}
      if(upBpMrGttY == safNInxSXX){ryFBbLsTus = true;}
      while(cKSLcmDcLm == MFbaXjBSRm){BTdhJfKGFw = true;}
      while(qmHHuZKpnx == qmHHuZKpnx){ERGPOPeVpL = true;}
      while(safNInxSXX == safNInxSXX){MDRLIWASWq = true;}
      if(qNCddYjjFR == true){qNCddYjjFR = false;}
      if(TqpeeombbT == true){TqpeeombbT = false;}
      if(dZcRGBeFCn == true){dZcRGBeFCn = false;}
      if(pkFmucjccW == true){pkFmucjccW = false;}
      if(pakWcBjAiT == true){pakWcBjAiT = false;}
      if(BVpDtRkkXb == true){BVpDtRkkXb = false;}
      if(tegQbilDjB == true){tegQbilDjB = false;}
      if(EJyFdDnFnE == true){EJyFdDnFnE = false;}
      if(ReVimUtBsd == true){ReVimUtBsd = false;}
      if(ryFBbLsTus == true){ryFBbLsTus = false;}
      if(OgQgOqWkZp == true){OgQgOqWkZp = false;}
      if(cexSKPIydH == true){cexSKPIydH = false;}
      if(okJFJGExcR == true){okJFJGExcR = false;}
      if(KUKtojNoTu == true){KUKtojNoTu = false;}
      if(xIaCAMBlpM == true){xIaCAMBlpM = false;}
      if(CtpnEdXKWI == true){CtpnEdXKWI = false;}
      if(mZHHfIUCca == true){mZHHfIUCca = false;}
      if(BTdhJfKGFw == true){BTdhJfKGFw = false;}
      if(ERGPOPeVpL == true){ERGPOPeVpL = false;}
      if(MDRLIWASWq == true){MDRLIWASWq = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class FRQSJPTUNO
{ 
  void ETXXrTZKNJ()
  { 
      bool HHgGpRHTwT = false;
      bool VZGjIXerjs = false;
      bool hMrOtCKjpx = false;
      bool gqmiQEGcEG = false;
      bool EEBpxHhDee = false;
      bool BKwxguPSMn = false;
      bool HWczlemWSE = false;
      bool RBmcncKBQl = false;
      bool TGFKuWuoCU = false;
      bool omQQzhaBES = false;
      bool UKkaNzWSIE = false;
      bool jNBZTAQSDO = false;
      bool iyUyOdkWcG = false;
      bool BJxyRIVewu = false;
      bool Abfyjalpwz = false;
      bool QIxojWplLj = false;
      bool OAoCCaQDIL = false;
      bool elVIOGRVOn = false;
      bool qtadosLHOu = false;
      bool SiTMgAldwI = false;
      string RdHxribQyh;
      string ylOzsbxtUB;
      string wQZAeNdkjL;
      string eSkuPDgfcY;
      string BrICIIxJok;
      string gAMxBAEHSe;
      string FpflDeATip;
      string uQRwzEHWqV;
      string PTuyddFmsO;
      string zZMySKMVzc;
      string HdZzpPiQxx;
      string sgPwOktgIY;
      string ZNZUpVETco;
      string qlXNNltwIO;
      string uoowVRJPig;
      string PfNZDtDFIU;
      string LOmIFGJChb;
      string qyXscjXdyY;
      string LnjuYLYxKT;
      string honmDfCfqO;
      if(RdHxribQyh == HdZzpPiQxx){HHgGpRHTwT = true;}
      else if(HdZzpPiQxx == RdHxribQyh){UKkaNzWSIE = true;}
      if(ylOzsbxtUB == sgPwOktgIY){VZGjIXerjs = true;}
      else if(sgPwOktgIY == ylOzsbxtUB){jNBZTAQSDO = true;}
      if(wQZAeNdkjL == ZNZUpVETco){hMrOtCKjpx = true;}
      else if(ZNZUpVETco == wQZAeNdkjL){iyUyOdkWcG = true;}
      if(eSkuPDgfcY == qlXNNltwIO){gqmiQEGcEG = true;}
      else if(qlXNNltwIO == eSkuPDgfcY){BJxyRIVewu = true;}
      if(BrICIIxJok == uoowVRJPig){EEBpxHhDee = true;}
      else if(uoowVRJPig == BrICIIxJok){Abfyjalpwz = true;}
      if(gAMxBAEHSe == PfNZDtDFIU){BKwxguPSMn = true;}
      else if(PfNZDtDFIU == gAMxBAEHSe){QIxojWplLj = true;}
      if(FpflDeATip == LOmIFGJChb){HWczlemWSE = true;}
      else if(LOmIFGJChb == FpflDeATip){OAoCCaQDIL = true;}
      if(uQRwzEHWqV == qyXscjXdyY){RBmcncKBQl = true;}
      if(PTuyddFmsO == LnjuYLYxKT){TGFKuWuoCU = true;}
      if(zZMySKMVzc == honmDfCfqO){omQQzhaBES = true;}
      while(qyXscjXdyY == uQRwzEHWqV){elVIOGRVOn = true;}
      while(LnjuYLYxKT == LnjuYLYxKT){qtadosLHOu = true;}
      while(honmDfCfqO == honmDfCfqO){SiTMgAldwI = true;}
      if(HHgGpRHTwT == true){HHgGpRHTwT = false;}
      if(VZGjIXerjs == true){VZGjIXerjs = false;}
      if(hMrOtCKjpx == true){hMrOtCKjpx = false;}
      if(gqmiQEGcEG == true){gqmiQEGcEG = false;}
      if(EEBpxHhDee == true){EEBpxHhDee = false;}
      if(BKwxguPSMn == true){BKwxguPSMn = false;}
      if(HWczlemWSE == true){HWczlemWSE = false;}
      if(RBmcncKBQl == true){RBmcncKBQl = false;}
      if(TGFKuWuoCU == true){TGFKuWuoCU = false;}
      if(omQQzhaBES == true){omQQzhaBES = false;}
      if(UKkaNzWSIE == true){UKkaNzWSIE = false;}
      if(jNBZTAQSDO == true){jNBZTAQSDO = false;}
      if(iyUyOdkWcG == true){iyUyOdkWcG = false;}
      if(BJxyRIVewu == true){BJxyRIVewu = false;}
      if(Abfyjalpwz == true){Abfyjalpwz = false;}
      if(QIxojWplLj == true){QIxojWplLj = false;}
      if(OAoCCaQDIL == true){OAoCCaQDIL = false;}
      if(elVIOGRVOn == true){elVIOGRVOn = false;}
      if(qtadosLHOu == true){qtadosLHOu = false;}
      if(SiTMgAldwI == true){SiTMgAldwI = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class IWCUBMMXEZ
{ 
  void rLroizfGqJ()
  { 
      bool sTtcHlrrAe = false;
      bool uQfYYXBReD = false;
      bool pFubwPLSbn = false;
      bool DANTQhRjgL = false;
      bool hHeBLTfsTF = false;
      bool wbMFgmYSgr = false;
      bool ZZQLbtDLHq = false;
      bool FRkTUiasPb = false;
      bool jRyWranHmc = false;
      bool IzCokHpTZQ = false;
      bool PTkczeqskx = false;
      bool MeCFHHbtSA = false;
      bool GwYehGOuhM = false;
      bool rHSyLPgUWN = false;
      bool jtVoQcwxgc = false;
      bool fwAZKSuGts = false;
      bool PuLXFEMDsq = false;
      bool aGWFPLaiOF = false;
      bool JQOEguHsnr = false;
      bool UZadxniyjL = false;
      string pDIOHjdYXh;
      string IzaTRlulsP;
      string WltmhcHXAQ;
      string feUTIrErwY;
      string DIWoDhFqxG;
      string cdzFXEJVge;
      string cGYGBcdHLY;
      string gCpUMOOFjA;
      string XQZsnBfOwD;
      string iiLRwxiQmZ;
      string DyfYYanesI;
      string oDlgGMfeSA;
      string xOKHoyqYYP;
      string eySJwYjBTM;
      string NAVmOeweKj;
      string QDymbnnYia;
      string jPGddpkbjg;
      string bdLFlxsWrK;
      string BMNoyaAegH;
      string kLSscysrJX;
      if(pDIOHjdYXh == DyfYYanesI){sTtcHlrrAe = true;}
      else if(DyfYYanesI == pDIOHjdYXh){PTkczeqskx = true;}
      if(IzaTRlulsP == oDlgGMfeSA){uQfYYXBReD = true;}
      else if(oDlgGMfeSA == IzaTRlulsP){MeCFHHbtSA = true;}
      if(WltmhcHXAQ == xOKHoyqYYP){pFubwPLSbn = true;}
      else if(xOKHoyqYYP == WltmhcHXAQ){GwYehGOuhM = true;}
      if(feUTIrErwY == eySJwYjBTM){DANTQhRjgL = true;}
      else if(eySJwYjBTM == feUTIrErwY){rHSyLPgUWN = true;}
      if(DIWoDhFqxG == NAVmOeweKj){hHeBLTfsTF = true;}
      else if(NAVmOeweKj == DIWoDhFqxG){jtVoQcwxgc = true;}
      if(cdzFXEJVge == QDymbnnYia){wbMFgmYSgr = true;}
      else if(QDymbnnYia == cdzFXEJVge){fwAZKSuGts = true;}
      if(cGYGBcdHLY == jPGddpkbjg){ZZQLbtDLHq = true;}
      else if(jPGddpkbjg == cGYGBcdHLY){PuLXFEMDsq = true;}
      if(gCpUMOOFjA == bdLFlxsWrK){FRkTUiasPb = true;}
      if(XQZsnBfOwD == BMNoyaAegH){jRyWranHmc = true;}
      if(iiLRwxiQmZ == kLSscysrJX){IzCokHpTZQ = true;}
      while(bdLFlxsWrK == gCpUMOOFjA){aGWFPLaiOF = true;}
      while(BMNoyaAegH == BMNoyaAegH){JQOEguHsnr = true;}
      while(kLSscysrJX == kLSscysrJX){UZadxniyjL = true;}
      if(sTtcHlrrAe == true){sTtcHlrrAe = false;}
      if(uQfYYXBReD == true){uQfYYXBReD = false;}
      if(pFubwPLSbn == true){pFubwPLSbn = false;}
      if(DANTQhRjgL == true){DANTQhRjgL = false;}
      if(hHeBLTfsTF == true){hHeBLTfsTF = false;}
      if(wbMFgmYSgr == true){wbMFgmYSgr = false;}
      if(ZZQLbtDLHq == true){ZZQLbtDLHq = false;}
      if(FRkTUiasPb == true){FRkTUiasPb = false;}
      if(jRyWranHmc == true){jRyWranHmc = false;}
      if(IzCokHpTZQ == true){IzCokHpTZQ = false;}
      if(PTkczeqskx == true){PTkczeqskx = false;}
      if(MeCFHHbtSA == true){MeCFHHbtSA = false;}
      if(GwYehGOuhM == true){GwYehGOuhM = false;}
      if(rHSyLPgUWN == true){rHSyLPgUWN = false;}
      if(jtVoQcwxgc == true){jtVoQcwxgc = false;}
      if(fwAZKSuGts == true){fwAZKSuGts = false;}
      if(PuLXFEMDsq == true){PuLXFEMDsq = false;}
      if(aGWFPLaiOF == true){aGWFPLaiOF = false;}
      if(JQOEguHsnr == true){JQOEguHsnr = false;}
      if(UZadxniyjL == true){UZadxniyjL = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class FIBUTIQSQJ
{ 
  void aBoalAWFCY()
  { 
      bool JGNWoRZhgp = false;
      bool TGidoDDqPn = false;
      bool hRDkAheYDk = false;
      bool CzbKYlTeMY = false;
      bool hClRLLfRxT = false;
      bool YBsuqqCcVG = false;
      bool mBeunTdYED = false;
      bool iXeqFfflZo = false;
      bool BMbjMAGfSh = false;
      bool jqJFlgXpcq = false;
      bool gHMtjBVCpL = false;
      bool LQDgFZYuim = false;
      bool NyGWSrOYEX = false;
      bool HoIhHtzhzL = false;
      bool eDpGVTmbAM = false;
      bool IcHpciBpar = false;
      bool lwxSDWIUYK = false;
      bool ZquXIJIzAz = false;
      bool FlYrPegSEY = false;
      bool sJGGYhGXCz = false;
      string eWmZKVsgMq;
      string wyqsQZuXgZ;
      string VbUVsPKKoT;
      string OBPcJtogmc;
      string LJmRLjXfMc;
      string LijGEDBQft;
      string KirrbuiOiV;
      string jNjENMoDJI;
      string reyMHfQJXG;
      string sYBrRcRtpQ;
      string BIwpryyfrr;
      string NyGWCfjeju;
      string eZqccKMrmk;
      string utNsHihITJ;
      string hkQfrtSdpl;
      string slJtkbRSMg;
      string lFrHwSkMPS;
      string xaLaNtIKji;
      string rhCBqIkSIe;
      string RPwlXbrJiZ;
      if(eWmZKVsgMq == BIwpryyfrr){JGNWoRZhgp = true;}
      else if(BIwpryyfrr == eWmZKVsgMq){gHMtjBVCpL = true;}
      if(wyqsQZuXgZ == NyGWCfjeju){TGidoDDqPn = true;}
      else if(NyGWCfjeju == wyqsQZuXgZ){LQDgFZYuim = true;}
      if(VbUVsPKKoT == eZqccKMrmk){hRDkAheYDk = true;}
      else if(eZqccKMrmk == VbUVsPKKoT){NyGWSrOYEX = true;}
      if(OBPcJtogmc == utNsHihITJ){CzbKYlTeMY = true;}
      else if(utNsHihITJ == OBPcJtogmc){HoIhHtzhzL = true;}
      if(LJmRLjXfMc == hkQfrtSdpl){hClRLLfRxT = true;}
      else if(hkQfrtSdpl == LJmRLjXfMc){eDpGVTmbAM = true;}
      if(LijGEDBQft == slJtkbRSMg){YBsuqqCcVG = true;}
      else if(slJtkbRSMg == LijGEDBQft){IcHpciBpar = true;}
      if(KirrbuiOiV == lFrHwSkMPS){mBeunTdYED = true;}
      else if(lFrHwSkMPS == KirrbuiOiV){lwxSDWIUYK = true;}
      if(jNjENMoDJI == xaLaNtIKji){iXeqFfflZo = true;}
      if(reyMHfQJXG == rhCBqIkSIe){BMbjMAGfSh = true;}
      if(sYBrRcRtpQ == RPwlXbrJiZ){jqJFlgXpcq = true;}
      while(xaLaNtIKji == jNjENMoDJI){ZquXIJIzAz = true;}
      while(rhCBqIkSIe == rhCBqIkSIe){FlYrPegSEY = true;}
      while(RPwlXbrJiZ == RPwlXbrJiZ){sJGGYhGXCz = true;}
      if(JGNWoRZhgp == true){JGNWoRZhgp = false;}
      if(TGidoDDqPn == true){TGidoDDqPn = false;}
      if(hRDkAheYDk == true){hRDkAheYDk = false;}
      if(CzbKYlTeMY == true){CzbKYlTeMY = false;}
      if(hClRLLfRxT == true){hClRLLfRxT = false;}
      if(YBsuqqCcVG == true){YBsuqqCcVG = false;}
      if(mBeunTdYED == true){mBeunTdYED = false;}
      if(iXeqFfflZo == true){iXeqFfflZo = false;}
      if(BMbjMAGfSh == true){BMbjMAGfSh = false;}
      if(jqJFlgXpcq == true){jqJFlgXpcq = false;}
      if(gHMtjBVCpL == true){gHMtjBVCpL = false;}
      if(LQDgFZYuim == true){LQDgFZYuim = false;}
      if(NyGWSrOYEX == true){NyGWSrOYEX = false;}
      if(HoIhHtzhzL == true){HoIhHtzhzL = false;}
      if(eDpGVTmbAM == true){eDpGVTmbAM = false;}
      if(IcHpciBpar == true){IcHpciBpar = false;}
      if(lwxSDWIUYK == true){lwxSDWIUYK = false;}
      if(ZquXIJIzAz == true){ZquXIJIzAz = false;}
      if(FlYrPegSEY == true){FlYrPegSEY = false;}
      if(sJGGYhGXCz == true){sJGGYhGXCz = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class WCNLWOGRMC
{ 
  void IKJNFQDyMX()
  { 
      bool KAErZkugmk = false;
      bool bcKgbFmxnH = false;
      bool eYJcDLiKBc = false;
      bool JLmWAIiXcr = false;
      bool LLhZYUWHUV = false;
      bool RrnNhlpbnN = false;
      bool BjeKaPonfS = false;
      bool VPTwuSqjDh = false;
      bool obpeLRWZnN = false;
      bool SHiOpbgWyJ = false;
      bool eiaBABXrRO = false;
      bool uFYFYZtzzJ = false;
      bool rPzRAOgFFT = false;
      bool lTksDFAneJ = false;
      bool seIZSMicpQ = false;
      bool hgXoRPjIBk = false;
      bool USmycbUeCS = false;
      bool YFTpQNHYzm = false;
      bool fDOnkEuubm = false;
      bool VrltoZrJwp = false;
      string KaiStjESAm;
      string ulifrpxYGI;
      string kShwDscIdJ;
      string YsCiCjYthu;
      string JhCbajdoRf;
      string UDgDbqrlOB;
      string HunpNBizdI;
      string QCpKzDPGVS;
      string OmqxoVMzHK;
      string qlegnNsMOZ;
      string BdLJPRMWDX;
      string alQwlUEpBq;
      string ojrSQdXJWl;
      string JDruRjaghW;
      string IouijFVitT;
      string IDKWjQlsrk;
      string tDzROWtUdB;
      string sXIdizoIiL;
      string InPCcGrVKB;
      string ygnxbFocUM;
      if(KaiStjESAm == BdLJPRMWDX){KAErZkugmk = true;}
      else if(BdLJPRMWDX == KaiStjESAm){eiaBABXrRO = true;}
      if(ulifrpxYGI == alQwlUEpBq){bcKgbFmxnH = true;}
      else if(alQwlUEpBq == ulifrpxYGI){uFYFYZtzzJ = true;}
      if(kShwDscIdJ == ojrSQdXJWl){eYJcDLiKBc = true;}
      else if(ojrSQdXJWl == kShwDscIdJ){rPzRAOgFFT = true;}
      if(YsCiCjYthu == JDruRjaghW){JLmWAIiXcr = true;}
      else if(JDruRjaghW == YsCiCjYthu){lTksDFAneJ = true;}
      if(JhCbajdoRf == IouijFVitT){LLhZYUWHUV = true;}
      else if(IouijFVitT == JhCbajdoRf){seIZSMicpQ = true;}
      if(UDgDbqrlOB == IDKWjQlsrk){RrnNhlpbnN = true;}
      else if(IDKWjQlsrk == UDgDbqrlOB){hgXoRPjIBk = true;}
      if(HunpNBizdI == tDzROWtUdB){BjeKaPonfS = true;}
      else if(tDzROWtUdB == HunpNBizdI){USmycbUeCS = true;}
      if(QCpKzDPGVS == sXIdizoIiL){VPTwuSqjDh = true;}
      if(OmqxoVMzHK == InPCcGrVKB){obpeLRWZnN = true;}
      if(qlegnNsMOZ == ygnxbFocUM){SHiOpbgWyJ = true;}
      while(sXIdizoIiL == QCpKzDPGVS){YFTpQNHYzm = true;}
      while(InPCcGrVKB == InPCcGrVKB){fDOnkEuubm = true;}
      while(ygnxbFocUM == ygnxbFocUM){VrltoZrJwp = true;}
      if(KAErZkugmk == true){KAErZkugmk = false;}
      if(bcKgbFmxnH == true){bcKgbFmxnH = false;}
      if(eYJcDLiKBc == true){eYJcDLiKBc = false;}
      if(JLmWAIiXcr == true){JLmWAIiXcr = false;}
      if(LLhZYUWHUV == true){LLhZYUWHUV = false;}
      if(RrnNhlpbnN == true){RrnNhlpbnN = false;}
      if(BjeKaPonfS == true){BjeKaPonfS = false;}
      if(VPTwuSqjDh == true){VPTwuSqjDh = false;}
      if(obpeLRWZnN == true){obpeLRWZnN = false;}
      if(SHiOpbgWyJ == true){SHiOpbgWyJ = false;}
      if(eiaBABXrRO == true){eiaBABXrRO = false;}
      if(uFYFYZtzzJ == true){uFYFYZtzzJ = false;}
      if(rPzRAOgFFT == true){rPzRAOgFFT = false;}
      if(lTksDFAneJ == true){lTksDFAneJ = false;}
      if(seIZSMicpQ == true){seIZSMicpQ = false;}
      if(hgXoRPjIBk == true){hgXoRPjIBk = false;}
      if(USmycbUeCS == true){USmycbUeCS = false;}
      if(YFTpQNHYzm == true){YFTpQNHYzm = false;}
      if(fDOnkEuubm == true){fDOnkEuubm = false;}
      if(VrltoZrJwp == true){VrltoZrJwp = false;}
    } 
}; 
