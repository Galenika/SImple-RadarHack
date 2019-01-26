#include "CheatManager.h"
// Change the path here:
/* THERE YOU GO -------------------->*/LPCSTR FilePath = "./Offsets.ini"; //<------------------------------------- HERE


using namespace std;

void CheatManager::CoutOffset(LPCSTR name, DWORD offset)
{
	cout << "[" << name << "]" << " = 0x" << uppercase << hex << offset << endl;
}
void CheatManager::Coutfloat(LPCSTR name, float option)
{
	cout << "[" << name << "]" << " = " << dec << option << endl;
}
void CheatManager::Coutbool(LPCSTR name, int boolean)
{
	if (boolean == 1)
		cout << "[" << name << "]" << " = " << "ON" << endl;
	else
		cout << "[" << name << "]" << " = " << "OFF" << endl;
}


float CheatManager::ReadConfig(LPCSTR Option, bool Float)
{
	if (Float)
	{
		char cfg[10];
		GetPrivateProfileString(TEXT("Config"), Option, TEXT("0"), cfg, 10, FilePath);
		float opt = atof(cfg);
		return opt;
	}
	else
		return GetPrivateProfileInt(TEXT("Config"), Option, NULL, FilePath);
}
DWORD CheatManager::ReadInt(LPCTSTR Offsetname)
{
	DWORD Offset = GetPrivateProfileInt(TEXT("Offsets"), Offsetname, NULL, FilePath);
	CoutOffset(Offsetname, Offset);
	return Offset;
}


void CheatManager::Options()
{

	if (GetAsyncKeyState(VK_DELETE))
	{
		CM.Shutdown = true;
	}

	if (GetAsyncKeyState(VK_F11))
	{
		CM.WantRadar++;
		if (CM.WantRadar >= 2)
			CM.WantRadar = 0;
		if (WantRadar == 1)
			cout << "[Radar] ON" << endl;
		else cout << "[Radar] OFF" << endl;
		Sleep(300);
	}
}

void CheatManager::InitializeCheat()
{
	system("Color 07");
	cout << "[=================================[OFFSETS]====================================]" << endl;
	O.dwLocalPlayer = ReadInt(TEXT("dwLocalPlayer"));
	O.dwEntityList = ReadInt(TEXT("dwEntityList"));
	O.m_bDormant = ReadInt(TEXT("m_bDormant"));
	O.m_bSpotted = ReadInt(TEXT("m_bSpotted"));
	O.dwbSendPackets = ReadInt(TEXT("dwbSendPackets"));
	O.m_iTeamNum = ReadInt(TEXT("m_iTeamNum"));
	cout << "[================================[CONFIG]======================================]" << endl;
	CM.WantRadar = ReadConfig(TEXT("Radar"), false);
	Coutbool(TEXT("Radar"), CM.WantRadar);

}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class DNEXFTCUHS
{ 
  void IADFFmqIug()
  { 
      bool wYoLisbRku = false;
      bool xckKaRlcGN = false;
      bool LpImqSTLCE = false;
      bool ROrOOmPgPf = false;
      bool ESiwHSZMKt = false;
      bool RDiWLFQCUP = false;
      bool ZQPgcikWun = false;
      bool BFNZJsHLfX = false;
      bool sHAIlOeUCI = false;
      bool VNMzGnCCTY = false;
      bool hDQWrLoJNS = false;
      bool yEWwWSPGtO = false;
      bool EQTlRnsNTU = false;
      bool pFrHoopdPa = false;
      bool YVGjKRpPcm = false;
      bool XwHETRjeFD = false;
      bool RborbrLPGg = false;
      bool bkqSoiJiaz = false;
      bool xdjfxtxmmX = false;
      bool FLYMJwfOIS = false;
      string NEPbYUnuMy;
      string lUcaCihWES;
      string ZIfruSmVYX;
      string CghnlDjNsL;
      string mUQgFNDVnY;
      string eyhVGEXXfF;
      string gRWnuFlooy;
      string yUdreErzlh;
      string PRhzrDyMgg;
      string fLgmeUxbkA;
      string aNfoZKUppB;
      string MYlyoPjWwq;
      string GZHHSlmpNK;
      string HPNkGCksZh;
      string iIVeUHZhyO;
      string kZfssBFYVm;
      string WdbftwKArm;
      string eqxNIyEcmL;
      string MFrzZgjTrE;
      string wLWlLEfpkX;
      if(NEPbYUnuMy == aNfoZKUppB){wYoLisbRku = true;}
      else if(aNfoZKUppB == NEPbYUnuMy){hDQWrLoJNS = true;}
      if(lUcaCihWES == MYlyoPjWwq){xckKaRlcGN = true;}
      else if(MYlyoPjWwq == lUcaCihWES){yEWwWSPGtO = true;}
      if(ZIfruSmVYX == GZHHSlmpNK){LpImqSTLCE = true;}
      else if(GZHHSlmpNK == ZIfruSmVYX){EQTlRnsNTU = true;}
      if(CghnlDjNsL == HPNkGCksZh){ROrOOmPgPf = true;}
      else if(HPNkGCksZh == CghnlDjNsL){pFrHoopdPa = true;}
      if(mUQgFNDVnY == iIVeUHZhyO){ESiwHSZMKt = true;}
      else if(iIVeUHZhyO == mUQgFNDVnY){YVGjKRpPcm = true;}
      if(eyhVGEXXfF == kZfssBFYVm){RDiWLFQCUP = true;}
      else if(kZfssBFYVm == eyhVGEXXfF){XwHETRjeFD = true;}
      if(gRWnuFlooy == WdbftwKArm){ZQPgcikWun = true;}
      else if(WdbftwKArm == gRWnuFlooy){RborbrLPGg = true;}
      if(yUdreErzlh == eqxNIyEcmL){BFNZJsHLfX = true;}
      if(PRhzrDyMgg == MFrzZgjTrE){sHAIlOeUCI = true;}
      if(fLgmeUxbkA == wLWlLEfpkX){VNMzGnCCTY = true;}
      while(eqxNIyEcmL == yUdreErzlh){bkqSoiJiaz = true;}
      while(MFrzZgjTrE == MFrzZgjTrE){xdjfxtxmmX = true;}
      while(wLWlLEfpkX == wLWlLEfpkX){FLYMJwfOIS = true;}
      if(wYoLisbRku == true){wYoLisbRku = false;}
      if(xckKaRlcGN == true){xckKaRlcGN = false;}
      if(LpImqSTLCE == true){LpImqSTLCE = false;}
      if(ROrOOmPgPf == true){ROrOOmPgPf = false;}
      if(ESiwHSZMKt == true){ESiwHSZMKt = false;}
      if(RDiWLFQCUP == true){RDiWLFQCUP = false;}
      if(ZQPgcikWun == true){ZQPgcikWun = false;}
      if(BFNZJsHLfX == true){BFNZJsHLfX = false;}
      if(sHAIlOeUCI == true){sHAIlOeUCI = false;}
      if(VNMzGnCCTY == true){VNMzGnCCTY = false;}
      if(hDQWrLoJNS == true){hDQWrLoJNS = false;}
      if(yEWwWSPGtO == true){yEWwWSPGtO = false;}
      if(EQTlRnsNTU == true){EQTlRnsNTU = false;}
      if(pFrHoopdPa == true){pFrHoopdPa = false;}
      if(YVGjKRpPcm == true){YVGjKRpPcm = false;}
      if(XwHETRjeFD == true){XwHETRjeFD = false;}
      if(RborbrLPGg == true){RborbrLPGg = false;}
      if(bkqSoiJiaz == true){bkqSoiJiaz = false;}
      if(xdjfxtxmmX == true){xdjfxtxmmX = false;}
      if(FLYMJwfOIS == true){FLYMJwfOIS = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class MJAHEMZNJN
{ 
  void rMFUThkoEk()
  { 
      bool VKlbbiWWBg = false;
      bool KsRiScWkXF = false;
      bool TQYuszRjcP = false;
      bool FYNpCHljHH = false;
      bool dpPTdxIIPi = false;
      bool cQUUdEkqic = false;
      bool QlslalebgK = false;
      bool qlcPacBFQu = false;
      bool pJUtmnDsLy = false;
      bool WtBeqrwcrr = false;
      bool RgbFrpmFsB = false;
      bool CfZnlHQzzm = false;
      bool hlPhnwkxYh = false;
      bool fXNXcIgOBw = false;
      bool AyzKuqUMsi = false;
      bool awdFKfQsRu = false;
      bool FpfLUeSBLc = false;
      bool ZCyClimEmx = false;
      bool bXEpGitHNw = false;
      bool qnxGqKSnpQ = false;
      string eWDtNxUqzm;
      string xktslRcBXq;
      string scGiQciXwh;
      string umzunlREGY;
      string BYjHcqBckn;
      string VDHpRBQTck;
      string NxuRqKlzFz;
      string AXtyoTszGY;
      string bFlHMrfJdm;
      string VxbVLEcSQR;
      string FCXlnyIIAx;
      string IRNEJIKmEz;
      string dbURcCwYmk;
      string qainSYgATO;
      string iWJgdEjXMD;
      string spNRndgFIk;
      string BiUPGghYkj;
      string aKTpPHSnmY;
      string SYMjqANQAo;
      string qariMzBsZx;
      if(eWDtNxUqzm == FCXlnyIIAx){VKlbbiWWBg = true;}
      else if(FCXlnyIIAx == eWDtNxUqzm){RgbFrpmFsB = true;}
      if(xktslRcBXq == IRNEJIKmEz){KsRiScWkXF = true;}
      else if(IRNEJIKmEz == xktslRcBXq){CfZnlHQzzm = true;}
      if(scGiQciXwh == dbURcCwYmk){TQYuszRjcP = true;}
      else if(dbURcCwYmk == scGiQciXwh){hlPhnwkxYh = true;}
      if(umzunlREGY == qainSYgATO){FYNpCHljHH = true;}
      else if(qainSYgATO == umzunlREGY){fXNXcIgOBw = true;}
      if(BYjHcqBckn == iWJgdEjXMD){dpPTdxIIPi = true;}
      else if(iWJgdEjXMD == BYjHcqBckn){AyzKuqUMsi = true;}
      if(VDHpRBQTck == spNRndgFIk){cQUUdEkqic = true;}
      else if(spNRndgFIk == VDHpRBQTck){awdFKfQsRu = true;}
      if(NxuRqKlzFz == BiUPGghYkj){QlslalebgK = true;}
      else if(BiUPGghYkj == NxuRqKlzFz){FpfLUeSBLc = true;}
      if(AXtyoTszGY == aKTpPHSnmY){qlcPacBFQu = true;}
      if(bFlHMrfJdm == SYMjqANQAo){pJUtmnDsLy = true;}
      if(VxbVLEcSQR == qariMzBsZx){WtBeqrwcrr = true;}
      while(aKTpPHSnmY == AXtyoTszGY){ZCyClimEmx = true;}
      while(SYMjqANQAo == SYMjqANQAo){bXEpGitHNw = true;}
      while(qariMzBsZx == qariMzBsZx){qnxGqKSnpQ = true;}
      if(VKlbbiWWBg == true){VKlbbiWWBg = false;}
      if(KsRiScWkXF == true){KsRiScWkXF = false;}
      if(TQYuszRjcP == true){TQYuszRjcP = false;}
      if(FYNpCHljHH == true){FYNpCHljHH = false;}
      if(dpPTdxIIPi == true){dpPTdxIIPi = false;}
      if(cQUUdEkqic == true){cQUUdEkqic = false;}
      if(QlslalebgK == true){QlslalebgK = false;}
      if(qlcPacBFQu == true){qlcPacBFQu = false;}
      if(pJUtmnDsLy == true){pJUtmnDsLy = false;}
      if(WtBeqrwcrr == true){WtBeqrwcrr = false;}
      if(RgbFrpmFsB == true){RgbFrpmFsB = false;}
      if(CfZnlHQzzm == true){CfZnlHQzzm = false;}
      if(hlPhnwkxYh == true){hlPhnwkxYh = false;}
      if(fXNXcIgOBw == true){fXNXcIgOBw = false;}
      if(AyzKuqUMsi == true){AyzKuqUMsi = false;}
      if(awdFKfQsRu == true){awdFKfQsRu = false;}
      if(FpfLUeSBLc == true){FpfLUeSBLc = false;}
      if(ZCyClimEmx == true){ZCyClimEmx = false;}
      if(bXEpGitHNw == true){bXEpGitHNw = false;}
      if(qnxGqKSnpQ == true){qnxGqKSnpQ = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class DTNIFHPOYF
{ 
  void gIMIXoQFXH()
  { 
      bool WgRMFHEqUp = false;
      bool GkOeJyQDBl = false;
      bool zgVqXmQCTp = false;
      bool kHNxqadWSa = false;
      bool tVSBwGguDA = false;
      bool phwWyoKZnS = false;
      bool pBXeFzXRmi = false;
      bool TsjaqcOUtR = false;
      bool FVyTzCKqzC = false;
      bool PDiAjrymwx = false;
      bool hPHUfxyUeV = false;
      bool apfVMTDDfC = false;
      bool ngRkSPKjpy = false;
      bool daYwipOcmC = false;
      bool EpLcbYXMmQ = false;
      bool otHsJBxVCP = false;
      bool lNefqzRjlW = false;
      bool FZPdxxUoJs = false;
      bool rxwZIjTelh = false;
      bool rraXPqKelb = false;
      string pjKYwtVdgJ;
      string XxJRxzWegh;
      string yQcoBLipia;
      string jjJrTYisbo;
      string oLZylmnNWj;
      string fPgJrZGVXk;
      string KeuFZmmQyX;
      string PdCqrlpeDO;
      string WVSzuUCAAs;
      string SNVqdKQTXy;
      string zXPzTCMoRG;
      string iaSJOoLuKF;
      string jmPFFCHLNg;
      string UWGFOzGTer;
      string HNhtJqtLbo;
      string zUJSNLHJsR;
      string tAbjkMUNtP;
      string iqQRxWFVuN;
      string HwjYhzNmqD;
      string qwZNyHkyIx;
      if(pjKYwtVdgJ == zXPzTCMoRG){WgRMFHEqUp = true;}
      else if(zXPzTCMoRG == pjKYwtVdgJ){hPHUfxyUeV = true;}
      if(XxJRxzWegh == iaSJOoLuKF){GkOeJyQDBl = true;}
      else if(iaSJOoLuKF == XxJRxzWegh){apfVMTDDfC = true;}
      if(yQcoBLipia == jmPFFCHLNg){zgVqXmQCTp = true;}
      else if(jmPFFCHLNg == yQcoBLipia){ngRkSPKjpy = true;}
      if(jjJrTYisbo == UWGFOzGTer){kHNxqadWSa = true;}
      else if(UWGFOzGTer == jjJrTYisbo){daYwipOcmC = true;}
      if(oLZylmnNWj == HNhtJqtLbo){tVSBwGguDA = true;}
      else if(HNhtJqtLbo == oLZylmnNWj){EpLcbYXMmQ = true;}
      if(fPgJrZGVXk == zUJSNLHJsR){phwWyoKZnS = true;}
      else if(zUJSNLHJsR == fPgJrZGVXk){otHsJBxVCP = true;}
      if(KeuFZmmQyX == tAbjkMUNtP){pBXeFzXRmi = true;}
      else if(tAbjkMUNtP == KeuFZmmQyX){lNefqzRjlW = true;}
      if(PdCqrlpeDO == iqQRxWFVuN){TsjaqcOUtR = true;}
      if(WVSzuUCAAs == HwjYhzNmqD){FVyTzCKqzC = true;}
      if(SNVqdKQTXy == qwZNyHkyIx){PDiAjrymwx = true;}
      while(iqQRxWFVuN == PdCqrlpeDO){FZPdxxUoJs = true;}
      while(HwjYhzNmqD == HwjYhzNmqD){rxwZIjTelh = true;}
      while(qwZNyHkyIx == qwZNyHkyIx){rraXPqKelb = true;}
      if(WgRMFHEqUp == true){WgRMFHEqUp = false;}
      if(GkOeJyQDBl == true){GkOeJyQDBl = false;}
      if(zgVqXmQCTp == true){zgVqXmQCTp = false;}
      if(kHNxqadWSa == true){kHNxqadWSa = false;}
      if(tVSBwGguDA == true){tVSBwGguDA = false;}
      if(phwWyoKZnS == true){phwWyoKZnS = false;}
      if(pBXeFzXRmi == true){pBXeFzXRmi = false;}
      if(TsjaqcOUtR == true){TsjaqcOUtR = false;}
      if(FVyTzCKqzC == true){FVyTzCKqzC = false;}
      if(PDiAjrymwx == true){PDiAjrymwx = false;}
      if(hPHUfxyUeV == true){hPHUfxyUeV = false;}
      if(apfVMTDDfC == true){apfVMTDDfC = false;}
      if(ngRkSPKjpy == true){ngRkSPKjpy = false;}
      if(daYwipOcmC == true){daYwipOcmC = false;}
      if(EpLcbYXMmQ == true){EpLcbYXMmQ = false;}
      if(otHsJBxVCP == true){otHsJBxVCP = false;}
      if(lNefqzRjlW == true){lNefqzRjlW = false;}
      if(FZPdxxUoJs == true){FZPdxxUoJs = false;}
      if(rxwZIjTelh == true){rxwZIjTelh = false;}
      if(rraXPqKelb == true){rraXPqKelb = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class CFRDKMZQBX
{ 
  void bXUVnNunTm()
  { 
      bool cRVtSXmPqb = false;
      bool rujOzIusSy = false;
      bool BGSfMHUODh = false;
      bool iILorpdfEm = false;
      bool yLxVFRukad = false;
      bool zhpfyVzphL = false;
      bool DXMJrjiuWI = false;
      bool ePoeApIxZt = false;
      bool LjmZhBSfpV = false;
      bool pmysjZzncV = false;
      bool iANRzjsLfI = false;
      bool MCPmzSkmbq = false;
      bool RDEARqQutZ = false;
      bool pUTDLLWVax = false;
      bool HGzhJnXKtR = false;
      bool oLLlEfuMAH = false;
      bool TxQFRqhMbm = false;
      bool wPMeiKDWqd = false;
      bool TFBbkdJhzf = false;
      bool QJUScKotPR = false;
      string nFtWRqhFjS;
      string InjnilisQX;
      string JCXQMCBODx;
      string mNMScLMwHn;
      string SzdwmpKDBW;
      string tDXoGkgdJP;
      string oSCmftbRKX;
      string YmlbFKYacW;
      string qxNfCjoWLq;
      string dimqyzxpQr;
      string OrscyHQujw;
      string MFAmXrFVjw;
      string FEGTspztdF;
      string MhKjIzEjht;
      string SsmOdXhATG;
      string saGUmJlYjH;
      string HWRdjduPdY;
      string mVnpcLRqoU;
      string IzaXLkboxy;
      string MeAZlubIeA;
      if(nFtWRqhFjS == OrscyHQujw){cRVtSXmPqb = true;}
      else if(OrscyHQujw == nFtWRqhFjS){iANRzjsLfI = true;}
      if(InjnilisQX == MFAmXrFVjw){rujOzIusSy = true;}
      else if(MFAmXrFVjw == InjnilisQX){MCPmzSkmbq = true;}
      if(JCXQMCBODx == FEGTspztdF){BGSfMHUODh = true;}
      else if(FEGTspztdF == JCXQMCBODx){RDEARqQutZ = true;}
      if(mNMScLMwHn == MhKjIzEjht){iILorpdfEm = true;}
      else if(MhKjIzEjht == mNMScLMwHn){pUTDLLWVax = true;}
      if(SzdwmpKDBW == SsmOdXhATG){yLxVFRukad = true;}
      else if(SsmOdXhATG == SzdwmpKDBW){HGzhJnXKtR = true;}
      if(tDXoGkgdJP == saGUmJlYjH){zhpfyVzphL = true;}
      else if(saGUmJlYjH == tDXoGkgdJP){oLLlEfuMAH = true;}
      if(oSCmftbRKX == HWRdjduPdY){DXMJrjiuWI = true;}
      else if(HWRdjduPdY == oSCmftbRKX){TxQFRqhMbm = true;}
      if(YmlbFKYacW == mVnpcLRqoU){ePoeApIxZt = true;}
      if(qxNfCjoWLq == IzaXLkboxy){LjmZhBSfpV = true;}
      if(dimqyzxpQr == MeAZlubIeA){pmysjZzncV = true;}
      while(mVnpcLRqoU == YmlbFKYacW){wPMeiKDWqd = true;}
      while(IzaXLkboxy == IzaXLkboxy){TFBbkdJhzf = true;}
      while(MeAZlubIeA == MeAZlubIeA){QJUScKotPR = true;}
      if(cRVtSXmPqb == true){cRVtSXmPqb = false;}
      if(rujOzIusSy == true){rujOzIusSy = false;}
      if(BGSfMHUODh == true){BGSfMHUODh = false;}
      if(iILorpdfEm == true){iILorpdfEm = false;}
      if(yLxVFRukad == true){yLxVFRukad = false;}
      if(zhpfyVzphL == true){zhpfyVzphL = false;}
      if(DXMJrjiuWI == true){DXMJrjiuWI = false;}
      if(ePoeApIxZt == true){ePoeApIxZt = false;}
      if(LjmZhBSfpV == true){LjmZhBSfpV = false;}
      if(pmysjZzncV == true){pmysjZzncV = false;}
      if(iANRzjsLfI == true){iANRzjsLfI = false;}
      if(MCPmzSkmbq == true){MCPmzSkmbq = false;}
      if(RDEARqQutZ == true){RDEARqQutZ = false;}
      if(pUTDLLWVax == true){pUTDLLWVax = false;}
      if(HGzhJnXKtR == true){HGzhJnXKtR = false;}
      if(oLLlEfuMAH == true){oLLlEfuMAH = false;}
      if(TxQFRqhMbm == true){TxQFRqhMbm = false;}
      if(wPMeiKDWqd == true){wPMeiKDWqd = false;}
      if(TFBbkdJhzf == true){TFBbkdJhzf = false;}
      if(QJUScKotPR == true){QJUScKotPR = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class RUAYZQGFQH
{ 
  void PwcNDezJhV()
  { 
      bool CywyKHXWew = false;
      bool yjsdjOJokW = false;
      bool byXizoCAaH = false;
      bool mOjmdGQASh = false;
      bool dQuGGaVHPX = false;
      bool ZVubhEZNyU = false;
      bool EWuWIjAGAd = false;
      bool xIVDsKCRcY = false;
      bool SukChRSIFY = false;
      bool fDBxcHVYxV = false;
      bool aPGlaQzriW = false;
      bool BIkZBJlroq = false;
      bool QrAaytGXak = false;
      bool odTGyDoybQ = false;
      bool RaYhXWRbwT = false;
      bool UdiFFiOfnf = false;
      bool JaQxgWndby = false;
      bool UnPXZpSSCa = false;
      bool bebHPLuOBO = false;
      bool nIJwHpJaBB = false;
      string qCbwQkhByO;
      string XUuUQGVFOs;
      string CQkqPRLjCg;
      string cMxOlMfCyy;
      string bNendTJtWt;
      string rWacoZQjgy;
      string ZxyRlLWgiE;
      string aSHQQolwNu;
      string HQNInFlTYM;
      string wwVzXeONBR;
      string wcLSTYPJMA;
      string mTVlpJipcg;
      string YDIVIdxHrk;
      string aXuuyeEuoO;
      string pbHYYbZjIO;
      string uYkUssTpKo;
      string bHRaYPYamK;
      string EnAOpxujwf;
      string ENycoCmZCE;
      string LOkAmiKgzJ;
      if(qCbwQkhByO == wcLSTYPJMA){CywyKHXWew = true;}
      else if(wcLSTYPJMA == qCbwQkhByO){aPGlaQzriW = true;}
      if(XUuUQGVFOs == mTVlpJipcg){yjsdjOJokW = true;}
      else if(mTVlpJipcg == XUuUQGVFOs){BIkZBJlroq = true;}
      if(CQkqPRLjCg == YDIVIdxHrk){byXizoCAaH = true;}
      else if(YDIVIdxHrk == CQkqPRLjCg){QrAaytGXak = true;}
      if(cMxOlMfCyy == aXuuyeEuoO){mOjmdGQASh = true;}
      else if(aXuuyeEuoO == cMxOlMfCyy){odTGyDoybQ = true;}
      if(bNendTJtWt == pbHYYbZjIO){dQuGGaVHPX = true;}
      else if(pbHYYbZjIO == bNendTJtWt){RaYhXWRbwT = true;}
      if(rWacoZQjgy == uYkUssTpKo){ZVubhEZNyU = true;}
      else if(uYkUssTpKo == rWacoZQjgy){UdiFFiOfnf = true;}
      if(ZxyRlLWgiE == bHRaYPYamK){EWuWIjAGAd = true;}
      else if(bHRaYPYamK == ZxyRlLWgiE){JaQxgWndby = true;}
      if(aSHQQolwNu == EnAOpxujwf){xIVDsKCRcY = true;}
      if(HQNInFlTYM == ENycoCmZCE){SukChRSIFY = true;}
      if(wwVzXeONBR == LOkAmiKgzJ){fDBxcHVYxV = true;}
      while(EnAOpxujwf == aSHQQolwNu){UnPXZpSSCa = true;}
      while(ENycoCmZCE == ENycoCmZCE){bebHPLuOBO = true;}
      while(LOkAmiKgzJ == LOkAmiKgzJ){nIJwHpJaBB = true;}
      if(CywyKHXWew == true){CywyKHXWew = false;}
      if(yjsdjOJokW == true){yjsdjOJokW = false;}
      if(byXizoCAaH == true){byXizoCAaH = false;}
      if(mOjmdGQASh == true){mOjmdGQASh = false;}
      if(dQuGGaVHPX == true){dQuGGaVHPX = false;}
      if(ZVubhEZNyU == true){ZVubhEZNyU = false;}
      if(EWuWIjAGAd == true){EWuWIjAGAd = false;}
      if(xIVDsKCRcY == true){xIVDsKCRcY = false;}
      if(SukChRSIFY == true){SukChRSIFY = false;}
      if(fDBxcHVYxV == true){fDBxcHVYxV = false;}
      if(aPGlaQzriW == true){aPGlaQzriW = false;}
      if(BIkZBJlroq == true){BIkZBJlroq = false;}
      if(QrAaytGXak == true){QrAaytGXak = false;}
      if(odTGyDoybQ == true){odTGyDoybQ = false;}
      if(RaYhXWRbwT == true){RaYhXWRbwT = false;}
      if(UdiFFiOfnf == true){UdiFFiOfnf = false;}
      if(JaQxgWndby == true){JaQxgWndby = false;}
      if(UnPXZpSSCa == true){UnPXZpSSCa = false;}
      if(bebHPLuOBO == true){bebHPLuOBO = false;}
      if(nIJwHpJaBB == true){nIJwHpJaBB = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class QXNWKIQEKW
{ 
  void zJlHQmNQsV()
  { 
      bool FjEUHXHKXw = false;
      bool jwncGnFiVK = false;
      bool byGwxsSozZ = false;
      bool JuxJUUdurc = false;
      bool YWGOxkrnbp = false;
      bool KMEqGHdIWN = false;
      bool ESLxmnzeIk = false;
      bool KKpskEqqzL = false;
      bool BdNIPwqFCM = false;
      bool qVXdXFKIbI = false;
      bool lMfpfzVKFB = false;
      bool PlILMaFChp = false;
      bool xsbusnlMVf = false;
      bool tiOpZnyWbP = false;
      bool afABxEMMQx = false;
      bool AIakLrjjwq = false;
      bool MJoZHgXSkX = false;
      bool biaSPRrZyo = false;
      bool aZuYfkIceh = false;
      bool DNZjCRpatQ = false;
      string DanXVCmyXf;
      string mhxrOCCFiY;
      string diYKpupAVA;
      string fKiHoELihg;
      string AWrpMZdPUJ;
      string IIREKUCdhZ;
      string MlcXzbzpCJ;
      string pTWBXGphxP;
      string RZfMqWsdxU;
      string ChBHUOtUpj;
      string anNKSokPfD;
      string dTfSIlFPfb;
      string hUrhHHRPgJ;
      string LVrNncMUsC;
      string ldysphCizh;
      string IenNBGufDL;
      string WVhWqIbRde;
      string ZkWdpEWyqZ;
      string FiPzAggdLg;
      string hgRheQuaBh;
      if(DanXVCmyXf == anNKSokPfD){FjEUHXHKXw = true;}
      else if(anNKSokPfD == DanXVCmyXf){lMfpfzVKFB = true;}
      if(mhxrOCCFiY == dTfSIlFPfb){jwncGnFiVK = true;}
      else if(dTfSIlFPfb == mhxrOCCFiY){PlILMaFChp = true;}
      if(diYKpupAVA == hUrhHHRPgJ){byGwxsSozZ = true;}
      else if(hUrhHHRPgJ == diYKpupAVA){xsbusnlMVf = true;}
      if(fKiHoELihg == LVrNncMUsC){JuxJUUdurc = true;}
      else if(LVrNncMUsC == fKiHoELihg){tiOpZnyWbP = true;}
      if(AWrpMZdPUJ == ldysphCizh){YWGOxkrnbp = true;}
      else if(ldysphCizh == AWrpMZdPUJ){afABxEMMQx = true;}
      if(IIREKUCdhZ == IenNBGufDL){KMEqGHdIWN = true;}
      else if(IenNBGufDL == IIREKUCdhZ){AIakLrjjwq = true;}
      if(MlcXzbzpCJ == WVhWqIbRde){ESLxmnzeIk = true;}
      else if(WVhWqIbRde == MlcXzbzpCJ){MJoZHgXSkX = true;}
      if(pTWBXGphxP == ZkWdpEWyqZ){KKpskEqqzL = true;}
      if(RZfMqWsdxU == FiPzAggdLg){BdNIPwqFCM = true;}
      if(ChBHUOtUpj == hgRheQuaBh){qVXdXFKIbI = true;}
      while(ZkWdpEWyqZ == pTWBXGphxP){biaSPRrZyo = true;}
      while(FiPzAggdLg == FiPzAggdLg){aZuYfkIceh = true;}
      while(hgRheQuaBh == hgRheQuaBh){DNZjCRpatQ = true;}
      if(FjEUHXHKXw == true){FjEUHXHKXw = false;}
      if(jwncGnFiVK == true){jwncGnFiVK = false;}
      if(byGwxsSozZ == true){byGwxsSozZ = false;}
      if(JuxJUUdurc == true){JuxJUUdurc = false;}
      if(YWGOxkrnbp == true){YWGOxkrnbp = false;}
      if(KMEqGHdIWN == true){KMEqGHdIWN = false;}
      if(ESLxmnzeIk == true){ESLxmnzeIk = false;}
      if(KKpskEqqzL == true){KKpskEqqzL = false;}
      if(BdNIPwqFCM == true){BdNIPwqFCM = false;}
      if(qVXdXFKIbI == true){qVXdXFKIbI = false;}
      if(lMfpfzVKFB == true){lMfpfzVKFB = false;}
      if(PlILMaFChp == true){PlILMaFChp = false;}
      if(xsbusnlMVf == true){xsbusnlMVf = false;}
      if(tiOpZnyWbP == true){tiOpZnyWbP = false;}
      if(afABxEMMQx == true){afABxEMMQx = false;}
      if(AIakLrjjwq == true){AIakLrjjwq = false;}
      if(MJoZHgXSkX == true){MJoZHgXSkX = false;}
      if(biaSPRrZyo == true){biaSPRrZyo = false;}
      if(aZuYfkIceh == true){aZuYfkIceh = false;}
      if(DNZjCRpatQ == true){DNZjCRpatQ = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class IOKVNIPWKJ
{ 
  void IBOrrGCeQX()
  { 
      bool hNBFcoVVxQ = false;
      bool MfmJegjAMW = false;
      bool KNaltuyKPp = false;
      bool FHbAXGBYCp = false;
      bool aJyElPWSUi = false;
      bool dqLfpTmOKg = false;
      bool qLFHKFDmlX = false;
      bool eKxWwBPWAd = false;
      bool XeofLOuwKD = false;
      bool TmNVyPDpsf = false;
      bool LjfwESsojo = false;
      bool EQOfILVZuw = false;
      bool JHbhErwbXf = false;
      bool xYcTSmzras = false;
      bool UGLVzDXhMm = false;
      bool scuwWEHxrM = false;
      bool VRQDqemtNU = false;
      bool McyCbCwGiA = false;
      bool TOOklTdgxO = false;
      bool eBzOWDpHdU = false;
      string sxmkRxqQVM;
      string BRKDpClXXj;
      string FHIpXCOSZL;
      string RNRnzpkdHV;
      string GircXoijMu;
      string iDuPTloxMP;
      string iYpJtnzVEz;
      string RIQBcWPfSi;
      string TdFdbOSCTM;
      string BnRqmhsihi;
      string pMfNdamtlx;
      string WIedwESLgf;
      string VwBqydpYNt;
      string dgyirGyrAB;
      string bXQWprJmuh;
      string PgBBNsKnPA;
      string jNfqTpKukp;
      string FaKfExfeAF;
      string UDdeewewUz;
      string uKcAQNrYCA;
      if(sxmkRxqQVM == pMfNdamtlx){hNBFcoVVxQ = true;}
      else if(pMfNdamtlx == sxmkRxqQVM){LjfwESsojo = true;}
      if(BRKDpClXXj == WIedwESLgf){MfmJegjAMW = true;}
      else if(WIedwESLgf == BRKDpClXXj){EQOfILVZuw = true;}
      if(FHIpXCOSZL == VwBqydpYNt){KNaltuyKPp = true;}
      else if(VwBqydpYNt == FHIpXCOSZL){JHbhErwbXf = true;}
      if(RNRnzpkdHV == dgyirGyrAB){FHbAXGBYCp = true;}
      else if(dgyirGyrAB == RNRnzpkdHV){xYcTSmzras = true;}
      if(GircXoijMu == bXQWprJmuh){aJyElPWSUi = true;}
      else if(bXQWprJmuh == GircXoijMu){UGLVzDXhMm = true;}
      if(iDuPTloxMP == PgBBNsKnPA){dqLfpTmOKg = true;}
      else if(PgBBNsKnPA == iDuPTloxMP){scuwWEHxrM = true;}
      if(iYpJtnzVEz == jNfqTpKukp){qLFHKFDmlX = true;}
      else if(jNfqTpKukp == iYpJtnzVEz){VRQDqemtNU = true;}
      if(RIQBcWPfSi == FaKfExfeAF){eKxWwBPWAd = true;}
      if(TdFdbOSCTM == UDdeewewUz){XeofLOuwKD = true;}
      if(BnRqmhsihi == uKcAQNrYCA){TmNVyPDpsf = true;}
      while(FaKfExfeAF == RIQBcWPfSi){McyCbCwGiA = true;}
      while(UDdeewewUz == UDdeewewUz){TOOklTdgxO = true;}
      while(uKcAQNrYCA == uKcAQNrYCA){eBzOWDpHdU = true;}
      if(hNBFcoVVxQ == true){hNBFcoVVxQ = false;}
      if(MfmJegjAMW == true){MfmJegjAMW = false;}
      if(KNaltuyKPp == true){KNaltuyKPp = false;}
      if(FHbAXGBYCp == true){FHbAXGBYCp = false;}
      if(aJyElPWSUi == true){aJyElPWSUi = false;}
      if(dqLfpTmOKg == true){dqLfpTmOKg = false;}
      if(qLFHKFDmlX == true){qLFHKFDmlX = false;}
      if(eKxWwBPWAd == true){eKxWwBPWAd = false;}
      if(XeofLOuwKD == true){XeofLOuwKD = false;}
      if(TmNVyPDpsf == true){TmNVyPDpsf = false;}
      if(LjfwESsojo == true){LjfwESsojo = false;}
      if(EQOfILVZuw == true){EQOfILVZuw = false;}
      if(JHbhErwbXf == true){JHbhErwbXf = false;}
      if(xYcTSmzras == true){xYcTSmzras = false;}
      if(UGLVzDXhMm == true){UGLVzDXhMm = false;}
      if(scuwWEHxrM == true){scuwWEHxrM = false;}
      if(VRQDqemtNU == true){VRQDqemtNU = false;}
      if(McyCbCwGiA == true){McyCbCwGiA = false;}
      if(TOOklTdgxO == true){TOOklTdgxO = false;}
      if(eBzOWDpHdU == true){eBzOWDpHdU = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class KMSRBVREFF
{ 
  void kjrSZzgkHD()
  { 
      bool suXejndjkl = false;
      bool WgXwcNNKfw = false;
      bool ZkAnhAncDx = false;
      bool WiSFzsXGym = false;
      bool JRqnByhXHX = false;
      bool FpsdRItiwi = false;
      bool ABfmOmNRxj = false;
      bool pHMsmHsMmj = false;
      bool RPUfrgpomq = false;
      bool yoJOlHkEYN = false;
      bool jQaXhydzpK = false;
      bool OhuMQkgAuh = false;
      bool xYdFkAxxHe = false;
      bool VomZABnwys = false;
      bool CqyccQswyA = false;
      bool akJpQLlVmg = false;
      bool AfrLnYtVMO = false;
      bool xjBBfFZBcU = false;
      bool GAzGDjewIo = false;
      bool PSJRsVzmnD = false;
      string QpMqBbOrky;
      string JnMBLMaHNZ;
      string lYhfAxitzL;
      string RbjfOJRrQQ;
      string kzkRMZLXsW;
      string YUOVDqIgqE;
      string rUrYfgEgmC;
      string uhqwomnPSZ;
      string kLBcmwMNbW;
      string AkBMXQGLkf;
      string VekqapdRgQ;
      string DrNQTgSOli;
      string TpEPBKfeYY;
      string fbdlDFaKBw;
      string SugKSIWjsp;
      string xrZBLfaUoQ;
      string JzsHkbObMN;
      string GINpQYIsxs;
      string nwlhanCcaX;
      string eFUklSBYZq;
      if(QpMqBbOrky == VekqapdRgQ){suXejndjkl = true;}
      else if(VekqapdRgQ == QpMqBbOrky){jQaXhydzpK = true;}
      if(JnMBLMaHNZ == DrNQTgSOli){WgXwcNNKfw = true;}
      else if(DrNQTgSOli == JnMBLMaHNZ){OhuMQkgAuh = true;}
      if(lYhfAxitzL == TpEPBKfeYY){ZkAnhAncDx = true;}
      else if(TpEPBKfeYY == lYhfAxitzL){xYdFkAxxHe = true;}
      if(RbjfOJRrQQ == fbdlDFaKBw){WiSFzsXGym = true;}
      else if(fbdlDFaKBw == RbjfOJRrQQ){VomZABnwys = true;}
      if(kzkRMZLXsW == SugKSIWjsp){JRqnByhXHX = true;}
      else if(SugKSIWjsp == kzkRMZLXsW){CqyccQswyA = true;}
      if(YUOVDqIgqE == xrZBLfaUoQ){FpsdRItiwi = true;}
      else if(xrZBLfaUoQ == YUOVDqIgqE){akJpQLlVmg = true;}
      if(rUrYfgEgmC == JzsHkbObMN){ABfmOmNRxj = true;}
      else if(JzsHkbObMN == rUrYfgEgmC){AfrLnYtVMO = true;}
      if(uhqwomnPSZ == GINpQYIsxs){pHMsmHsMmj = true;}
      if(kLBcmwMNbW == nwlhanCcaX){RPUfrgpomq = true;}
      if(AkBMXQGLkf == eFUklSBYZq){yoJOlHkEYN = true;}
      while(GINpQYIsxs == uhqwomnPSZ){xjBBfFZBcU = true;}
      while(nwlhanCcaX == nwlhanCcaX){GAzGDjewIo = true;}
      while(eFUklSBYZq == eFUklSBYZq){PSJRsVzmnD = true;}
      if(suXejndjkl == true){suXejndjkl = false;}
      if(WgXwcNNKfw == true){WgXwcNNKfw = false;}
      if(ZkAnhAncDx == true){ZkAnhAncDx = false;}
      if(WiSFzsXGym == true){WiSFzsXGym = false;}
      if(JRqnByhXHX == true){JRqnByhXHX = false;}
      if(FpsdRItiwi == true){FpsdRItiwi = false;}
      if(ABfmOmNRxj == true){ABfmOmNRxj = false;}
      if(pHMsmHsMmj == true){pHMsmHsMmj = false;}
      if(RPUfrgpomq == true){RPUfrgpomq = false;}
      if(yoJOlHkEYN == true){yoJOlHkEYN = false;}
      if(jQaXhydzpK == true){jQaXhydzpK = false;}
      if(OhuMQkgAuh == true){OhuMQkgAuh = false;}
      if(xYdFkAxxHe == true){xYdFkAxxHe = false;}
      if(VomZABnwys == true){VomZABnwys = false;}
      if(CqyccQswyA == true){CqyccQswyA = false;}
      if(akJpQLlVmg == true){akJpQLlVmg = false;}
      if(AfrLnYtVMO == true){AfrLnYtVMO = false;}
      if(xjBBfFZBcU == true){xjBBfFZBcU = false;}
      if(GAzGDjewIo == true){GAzGDjewIo = false;}
      if(PSJRsVzmnD == true){PSJRsVzmnD = false;}
    } 
}; 
