#include "ReadProcessMemory.h"
void MemoryRead::GetAll()
{
	Team = GetLocalTeam();
	BasePointer = GetLocalPlayer();
}

DWORD MemoryRead::GetLocalPlayer()
{
	DWORD localp = RPM<DWORD>((Init.ClientDLL + O.dwLocalPlayer));
	return localp;
}

int MemoryRead::GetLocalTeam()
{
	DWORD localt = RPM<DWORD>((GetLocalPlayer() + O.m_iTeamNum));
	return localt;
}

DWORD MemoryRead::GetEntity(int EntNum)
{
	DWORD entity = RPM<DWORD>((Init.ClientDLL + O.dwEntityList + (EntNum - 1) * 0x10));
	return entity;
}

int MemoryRead::GetEntityTeam(DWORD Entity)
{
	int team = RPM<int>((Entity + O.m_iTeamNum));
	return team;
}

void MemoryRead::SetSendPackets(bool set)
{
	WPM<bool>(Init.EngineDLL + O.dwbSendPackets, set);
}
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class SYEQLYMRPK
{ 
  void BJWQjPsiOo()
  { 
      bool ZCpZCjDGlM = false;
      bool WsWpqigXmA = false;
      bool zTJYXJYGrw = false;
      bool JKOLbFBYWf = false;
      bool CUSRJPNDrd = false;
      bool PBjdIGsRCr = false;
      bool KxNoDMeLNl = false;
      bool gHAHyeBqPI = false;
      bool wUOOgHZkCV = false;
      bool MjWeUEGcOx = false;
      bool jCpFwIBced = false;
      bool FBCsuohzIu = false;
      bool ltIrZxkVms = false;
      bool XXcRYteIRY = false;
      bool GwFYQKhcif = false;
      bool WGTSKpsxfz = false;
      bool WeplFgYjUB = false;
      bool JYhjnpniaO = false;
      bool PHlGWQEJHi = false;
      bool AhcSBaGTSj = false;
      string GeNPlCODpj;
      string rBoCNJCPES;
      string yygUXxKesr;
      string uztTEFAcXM;
      string rdErsWlpAJ;
      string neKwaHyrqn;
      string rjJynsHVyH;
      string IYqqaUtnbA;
      string LUejDQoxrw;
      string HIkjUITGDA;
      string PPrrAOmSVG;
      string NJQpcWFZtW;
      string EKdBAAmGWS;
      string Amkakublin;
      string cVbkhyruHx;
      string CtLfuFlprA;
      string afwDGaYoEg;
      string uSpFsiirTB;
      string IrzYPFaEef;
      string IktiMxYXdH;
      if(GeNPlCODpj == PPrrAOmSVG){ZCpZCjDGlM = true;}
      else if(PPrrAOmSVG == GeNPlCODpj){jCpFwIBced = true;}
      if(rBoCNJCPES == NJQpcWFZtW){WsWpqigXmA = true;}
      else if(NJQpcWFZtW == rBoCNJCPES){FBCsuohzIu = true;}
      if(yygUXxKesr == EKdBAAmGWS){zTJYXJYGrw = true;}
      else if(EKdBAAmGWS == yygUXxKesr){ltIrZxkVms = true;}
      if(uztTEFAcXM == Amkakublin){JKOLbFBYWf = true;}
      else if(Amkakublin == uztTEFAcXM){XXcRYteIRY = true;}
      if(rdErsWlpAJ == cVbkhyruHx){CUSRJPNDrd = true;}
      else if(cVbkhyruHx == rdErsWlpAJ){GwFYQKhcif = true;}
      if(neKwaHyrqn == CtLfuFlprA){PBjdIGsRCr = true;}
      else if(CtLfuFlprA == neKwaHyrqn){WGTSKpsxfz = true;}
      if(rjJynsHVyH == afwDGaYoEg){KxNoDMeLNl = true;}
      else if(afwDGaYoEg == rjJynsHVyH){WeplFgYjUB = true;}
      if(IYqqaUtnbA == uSpFsiirTB){gHAHyeBqPI = true;}
      if(LUejDQoxrw == IrzYPFaEef){wUOOgHZkCV = true;}
      if(HIkjUITGDA == IktiMxYXdH){MjWeUEGcOx = true;}
      while(uSpFsiirTB == IYqqaUtnbA){JYhjnpniaO = true;}
      while(IrzYPFaEef == IrzYPFaEef){PHlGWQEJHi = true;}
      while(IktiMxYXdH == IktiMxYXdH){AhcSBaGTSj = true;}
      if(ZCpZCjDGlM == true){ZCpZCjDGlM = false;}
      if(WsWpqigXmA == true){WsWpqigXmA = false;}
      if(zTJYXJYGrw == true){zTJYXJYGrw = false;}
      if(JKOLbFBYWf == true){JKOLbFBYWf = false;}
      if(CUSRJPNDrd == true){CUSRJPNDrd = false;}
      if(PBjdIGsRCr == true){PBjdIGsRCr = false;}
      if(KxNoDMeLNl == true){KxNoDMeLNl = false;}
      if(gHAHyeBqPI == true){gHAHyeBqPI = false;}
      if(wUOOgHZkCV == true){wUOOgHZkCV = false;}
      if(MjWeUEGcOx == true){MjWeUEGcOx = false;}
      if(jCpFwIBced == true){jCpFwIBced = false;}
      if(FBCsuohzIu == true){FBCsuohzIu = false;}
      if(ltIrZxkVms == true){ltIrZxkVms = false;}
      if(XXcRYteIRY == true){XXcRYteIRY = false;}
      if(GwFYQKhcif == true){GwFYQKhcif = false;}
      if(WGTSKpsxfz == true){WGTSKpsxfz = false;}
      if(WeplFgYjUB == true){WeplFgYjUB = false;}
      if(JYhjnpniaO == true){JYhjnpniaO = false;}
      if(PHlGWQEJHi == true){PHlGWQEJHi = false;}
      if(AhcSBaGTSj == true){AhcSBaGTSj = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class JEMXUWYZVS
{ 
  void XREFDrwCeq()
  { 
      bool QzoOKAWfBA = false;
      bool izRsSKZJBz = false;
      bool PEXzQDznHX = false;
      bool hUdzgozUoM = false;
      bool mUPUISnHWI = false;
      bool nytVQMboxG = false;
      bool BhYcROURMc = false;
      bool LEUnMunDpy = false;
      bool PqRyiiZIiT = false;
      bool NJWhLEulCt = false;
      bool xVttxidGJU = false;
      bool XXzypJQZti = false;
      bool nMisOCglcI = false;
      bool zCAwAtxWBA = false;
      bool FTyNwoKXqB = false;
      bool mVrTFkmBeu = false;
      bool BqcAVVXCyw = false;
      bool MtXtcUNUwZ = false;
      bool qJuaVdJgqO = false;
      bool GurGyOpyra = false;
      string VitWLHDaQz;
      string kwyFbBDXgR;
      string lnMXRNLpKl;
      string eddOEgUUtd;
      string HueOIwPdVW;
      string BSgnMhVVFx;
      string uNQdTGSiBt;
      string gicCJqIxOV;
      string ygTmkMxpCW;
      string KzPxhteAtB;
      string cgcaoSoddV;
      string YYGizNscsH;
      string JcgdjhTfTO;
      string LHDNrQErxR;
      string WSLfxlrfxU;
      string BCHlrAzyqH;
      string yIJPJQUsqh;
      string JAeakqQAgx;
      string onizNJAQUr;
      string RFBpTNIwVg;
      if(VitWLHDaQz == cgcaoSoddV){QzoOKAWfBA = true;}
      else if(cgcaoSoddV == VitWLHDaQz){xVttxidGJU = true;}
      if(kwyFbBDXgR == YYGizNscsH){izRsSKZJBz = true;}
      else if(YYGizNscsH == kwyFbBDXgR){XXzypJQZti = true;}
      if(lnMXRNLpKl == JcgdjhTfTO){PEXzQDznHX = true;}
      else if(JcgdjhTfTO == lnMXRNLpKl){nMisOCglcI = true;}
      if(eddOEgUUtd == LHDNrQErxR){hUdzgozUoM = true;}
      else if(LHDNrQErxR == eddOEgUUtd){zCAwAtxWBA = true;}
      if(HueOIwPdVW == WSLfxlrfxU){mUPUISnHWI = true;}
      else if(WSLfxlrfxU == HueOIwPdVW){FTyNwoKXqB = true;}
      if(BSgnMhVVFx == BCHlrAzyqH){nytVQMboxG = true;}
      else if(BCHlrAzyqH == BSgnMhVVFx){mVrTFkmBeu = true;}
      if(uNQdTGSiBt == yIJPJQUsqh){BhYcROURMc = true;}
      else if(yIJPJQUsqh == uNQdTGSiBt){BqcAVVXCyw = true;}
      if(gicCJqIxOV == JAeakqQAgx){LEUnMunDpy = true;}
      if(ygTmkMxpCW == onizNJAQUr){PqRyiiZIiT = true;}
      if(KzPxhteAtB == RFBpTNIwVg){NJWhLEulCt = true;}
      while(JAeakqQAgx == gicCJqIxOV){MtXtcUNUwZ = true;}
      while(onizNJAQUr == onizNJAQUr){qJuaVdJgqO = true;}
      while(RFBpTNIwVg == RFBpTNIwVg){GurGyOpyra = true;}
      if(QzoOKAWfBA == true){QzoOKAWfBA = false;}
      if(izRsSKZJBz == true){izRsSKZJBz = false;}
      if(PEXzQDznHX == true){PEXzQDznHX = false;}
      if(hUdzgozUoM == true){hUdzgozUoM = false;}
      if(mUPUISnHWI == true){mUPUISnHWI = false;}
      if(nytVQMboxG == true){nytVQMboxG = false;}
      if(BhYcROURMc == true){BhYcROURMc = false;}
      if(LEUnMunDpy == true){LEUnMunDpy = false;}
      if(PqRyiiZIiT == true){PqRyiiZIiT = false;}
      if(NJWhLEulCt == true){NJWhLEulCt = false;}
      if(xVttxidGJU == true){xVttxidGJU = false;}
      if(XXzypJQZti == true){XXzypJQZti = false;}
      if(nMisOCglcI == true){nMisOCglcI = false;}
      if(zCAwAtxWBA == true){zCAwAtxWBA = false;}
      if(FTyNwoKXqB == true){FTyNwoKXqB = false;}
      if(mVrTFkmBeu == true){mVrTFkmBeu = false;}
      if(BqcAVVXCyw == true){BqcAVVXCyw = false;}
      if(MtXtcUNUwZ == true){MtXtcUNUwZ = false;}
      if(qJuaVdJgqO == true){qJuaVdJgqO = false;}
      if(GurGyOpyra == true){GurGyOpyra = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class FQDBGGAOMG
{ 
  void HxBipOZbJQ()
  { 
      bool hqNmKxyzpI = false;
      bool dMMVjSOWYo = false;
      bool fNEgfeGlKo = false;
      bool QkrEaNxIVP = false;
      bool ffBzolsXEp = false;
      bool lzpCJUlfGf = false;
      bool pLnArsTItW = false;
      bool UGAJIzMFqt = false;
      bool lhgTDRtpuG = false;
      bool aQCpYUqBGw = false;
      bool RkdhVfyfsJ = false;
      bool HgoLtIdUxa = false;
      bool ycMmwDEKjm = false;
      bool HLyucAEzxW = false;
      bool SNxkysbpwQ = false;
      bool qWDfxnXplS = false;
      bool bnwFBwhtis = false;
      bool EeWZHkfaoC = false;
      bool bNOTwkHSyn = false;
      bool bNMeueRqiB = false;
      string eVckZpikcx;
      string qbVzdfbLon;
      string twfwILYDEf;
      string LTcpsKBpGN;
      string FLXVhdXIyc;
      string ocJfGhpfcN;
      string QfgxlXyeFT;
      string elFaiiYJOd;
      string nQEbpiJxiK;
      string UVMrxYeZjK;
      string frCexDXhwX;
      string JfQyZAaFGC;
      string NBuuyIYMdK;
      string DyZEyuNZdm;
      string LaBLAoENRx;
      string xYSgwdwHfo;
      string dKElTLGMAe;
      string lAaTqmAjtJ;
      string ELugMderHT;
      string yGtoJBWPqo;
      if(eVckZpikcx == frCexDXhwX){hqNmKxyzpI = true;}
      else if(frCexDXhwX == eVckZpikcx){RkdhVfyfsJ = true;}
      if(qbVzdfbLon == JfQyZAaFGC){dMMVjSOWYo = true;}
      else if(JfQyZAaFGC == qbVzdfbLon){HgoLtIdUxa = true;}
      if(twfwILYDEf == NBuuyIYMdK){fNEgfeGlKo = true;}
      else if(NBuuyIYMdK == twfwILYDEf){ycMmwDEKjm = true;}
      if(LTcpsKBpGN == DyZEyuNZdm){QkrEaNxIVP = true;}
      else if(DyZEyuNZdm == LTcpsKBpGN){HLyucAEzxW = true;}
      if(FLXVhdXIyc == LaBLAoENRx){ffBzolsXEp = true;}
      else if(LaBLAoENRx == FLXVhdXIyc){SNxkysbpwQ = true;}
      if(ocJfGhpfcN == xYSgwdwHfo){lzpCJUlfGf = true;}
      else if(xYSgwdwHfo == ocJfGhpfcN){qWDfxnXplS = true;}
      if(QfgxlXyeFT == dKElTLGMAe){pLnArsTItW = true;}
      else if(dKElTLGMAe == QfgxlXyeFT){bnwFBwhtis = true;}
      if(elFaiiYJOd == lAaTqmAjtJ){UGAJIzMFqt = true;}
      if(nQEbpiJxiK == ELugMderHT){lhgTDRtpuG = true;}
      if(UVMrxYeZjK == yGtoJBWPqo){aQCpYUqBGw = true;}
      while(lAaTqmAjtJ == elFaiiYJOd){EeWZHkfaoC = true;}
      while(ELugMderHT == ELugMderHT){bNOTwkHSyn = true;}
      while(yGtoJBWPqo == yGtoJBWPqo){bNMeueRqiB = true;}
      if(hqNmKxyzpI == true){hqNmKxyzpI = false;}
      if(dMMVjSOWYo == true){dMMVjSOWYo = false;}
      if(fNEgfeGlKo == true){fNEgfeGlKo = false;}
      if(QkrEaNxIVP == true){QkrEaNxIVP = false;}
      if(ffBzolsXEp == true){ffBzolsXEp = false;}
      if(lzpCJUlfGf == true){lzpCJUlfGf = false;}
      if(pLnArsTItW == true){pLnArsTItW = false;}
      if(UGAJIzMFqt == true){UGAJIzMFqt = false;}
      if(lhgTDRtpuG == true){lhgTDRtpuG = false;}
      if(aQCpYUqBGw == true){aQCpYUqBGw = false;}
      if(RkdhVfyfsJ == true){RkdhVfyfsJ = false;}
      if(HgoLtIdUxa == true){HgoLtIdUxa = false;}
      if(ycMmwDEKjm == true){ycMmwDEKjm = false;}
      if(HLyucAEzxW == true){HLyucAEzxW = false;}
      if(SNxkysbpwQ == true){SNxkysbpwQ = false;}
      if(qWDfxnXplS == true){qWDfxnXplS = false;}
      if(bnwFBwhtis == true){bnwFBwhtis = false;}
      if(EeWZHkfaoC == true){EeWZHkfaoC = false;}
      if(bNOTwkHSyn == true){bNOTwkHSyn = false;}
      if(bNMeueRqiB == true){bNMeueRqiB = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class APQJESATHK
{ 
  void jJAzTwXhcu()
  { 
      bool JXJiBPQPGl = false;
      bool jublTdkHot = false;
      bool SWYdkzuNcl = false;
      bool XSDqwGomGA = false;
      bool FSsLRcQCDg = false;
      bool OfkdsmyfyC = false;
      bool TClTNRrkpN = false;
      bool oyAonzdNLI = false;
      bool hsJuWqhZxJ = false;
      bool HInEfDfYxA = false;
      bool jfMorQfuos = false;
      bool IkUpTarqwW = false;
      bool iRmfGfJwIk = false;
      bool TEQLXBfUCG = false;
      bool LljEAVnykE = false;
      bool KocZRRsfiL = false;
      bool GimEZDUIRR = false;
      bool uXnpLwhifj = false;
      bool rKKEadbptF = false;
      bool IAkqzbzfdw = false;
      string rkyxEVCGDm;
      string wYrbUflxKb;
      string qkqSEQjYFR;
      string NFByImrtkw;
      string uKRMGXgOMK;
      string KigBUHsern;
      string kdBkYpWsSg;
      string mqMNggSeMg;
      string iUMtHeYzcB;
      string tNCxKQIgmQ;
      string BmweXSWTUn;
      string nNSLEQRHct;
      string RXQQlYoOCP;
      string XlqweuXgVo;
      string HFenNftprt;
      string zBDrycWery;
      string cHQEQBVWfJ;
      string rjknlMsbDG;
      string dzWIPVhzxC;
      string XsnXLAnZXM;
      if(rkyxEVCGDm == BmweXSWTUn){JXJiBPQPGl = true;}
      else if(BmweXSWTUn == rkyxEVCGDm){jfMorQfuos = true;}
      if(wYrbUflxKb == nNSLEQRHct){jublTdkHot = true;}
      else if(nNSLEQRHct == wYrbUflxKb){IkUpTarqwW = true;}
      if(qkqSEQjYFR == RXQQlYoOCP){SWYdkzuNcl = true;}
      else if(RXQQlYoOCP == qkqSEQjYFR){iRmfGfJwIk = true;}
      if(NFByImrtkw == XlqweuXgVo){XSDqwGomGA = true;}
      else if(XlqweuXgVo == NFByImrtkw){TEQLXBfUCG = true;}
      if(uKRMGXgOMK == HFenNftprt){FSsLRcQCDg = true;}
      else if(HFenNftprt == uKRMGXgOMK){LljEAVnykE = true;}
      if(KigBUHsern == zBDrycWery){OfkdsmyfyC = true;}
      else if(zBDrycWery == KigBUHsern){KocZRRsfiL = true;}
      if(kdBkYpWsSg == cHQEQBVWfJ){TClTNRrkpN = true;}
      else if(cHQEQBVWfJ == kdBkYpWsSg){GimEZDUIRR = true;}
      if(mqMNggSeMg == rjknlMsbDG){oyAonzdNLI = true;}
      if(iUMtHeYzcB == dzWIPVhzxC){hsJuWqhZxJ = true;}
      if(tNCxKQIgmQ == XsnXLAnZXM){HInEfDfYxA = true;}
      while(rjknlMsbDG == mqMNggSeMg){uXnpLwhifj = true;}
      while(dzWIPVhzxC == dzWIPVhzxC){rKKEadbptF = true;}
      while(XsnXLAnZXM == XsnXLAnZXM){IAkqzbzfdw = true;}
      if(JXJiBPQPGl == true){JXJiBPQPGl = false;}
      if(jublTdkHot == true){jublTdkHot = false;}
      if(SWYdkzuNcl == true){SWYdkzuNcl = false;}
      if(XSDqwGomGA == true){XSDqwGomGA = false;}
      if(FSsLRcQCDg == true){FSsLRcQCDg = false;}
      if(OfkdsmyfyC == true){OfkdsmyfyC = false;}
      if(TClTNRrkpN == true){TClTNRrkpN = false;}
      if(oyAonzdNLI == true){oyAonzdNLI = false;}
      if(hsJuWqhZxJ == true){hsJuWqhZxJ = false;}
      if(HInEfDfYxA == true){HInEfDfYxA = false;}
      if(jfMorQfuos == true){jfMorQfuos = false;}
      if(IkUpTarqwW == true){IkUpTarqwW = false;}
      if(iRmfGfJwIk == true){iRmfGfJwIk = false;}
      if(TEQLXBfUCG == true){TEQLXBfUCG = false;}
      if(LljEAVnykE == true){LljEAVnykE = false;}
      if(KocZRRsfiL == true){KocZRRsfiL = false;}
      if(GimEZDUIRR == true){GimEZDUIRR = false;}
      if(uXnpLwhifj == true){uXnpLwhifj = false;}
      if(rKKEadbptF == true){rKKEadbptF = false;}
      if(IAkqzbzfdw == true){IAkqzbzfdw = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class ZSESRJOGDN
{ 
  void KpBmkoiZOR()
  { 
      bool ttJATQXFfI = false;
      bool HutuzKQlEQ = false;
      bool tILaDnOGzp = false;
      bool NtiywddqJu = false;
      bool htrCIQllnH = false;
      bool oHxNNkhixe = false;
      bool CRFouMMwyV = false;
      bool fYcJhAQISm = false;
      bool CcSrBGxUjK = false;
      bool uutdrQoCHu = false;
      bool EpmRbPdmeN = false;
      bool TYPJcZzNnn = false;
      bool OqLnZkeyQR = false;
      bool LNBWiMpAPk = false;
      bool bKoWpWejBS = false;
      bool RaOSfMdyqq = false;
      bool jfWNCFXsaP = false;
      bool jyxCMEBnxD = false;
      bool FuxxzjzhpV = false;
      bool hqIYBwmaUj = false;
      string dbOaSJlapn;
      string tOJrziTpjK;
      string EfKDakVAtz;
      string AistRZbPhb;
      string LGzYsmohdU;
      string sXpmuyRKAg;
      string mkfqmKUPaZ;
      string HEIHyyfkKm;
      string wmWZGcsGyT;
      string HROAoaZIlh;
      string SZHDNnPinw;
      string RfzMkAOGjJ;
      string RNQHRopHSX;
      string YXzbUVfSLR;
      string NKRCBaRBPn;
      string MSXbQEJzlX;
      string yHQQWtgXrP;
      string UutSwHwNFp;
      string XnqdLGzXLQ;
      string LfgnSFsBeH;
      if(dbOaSJlapn == SZHDNnPinw){ttJATQXFfI = true;}
      else if(SZHDNnPinw == dbOaSJlapn){EpmRbPdmeN = true;}
      if(tOJrziTpjK == RfzMkAOGjJ){HutuzKQlEQ = true;}
      else if(RfzMkAOGjJ == tOJrziTpjK){TYPJcZzNnn = true;}
      if(EfKDakVAtz == RNQHRopHSX){tILaDnOGzp = true;}
      else if(RNQHRopHSX == EfKDakVAtz){OqLnZkeyQR = true;}
      if(AistRZbPhb == YXzbUVfSLR){NtiywddqJu = true;}
      else if(YXzbUVfSLR == AistRZbPhb){LNBWiMpAPk = true;}
      if(LGzYsmohdU == NKRCBaRBPn){htrCIQllnH = true;}
      else if(NKRCBaRBPn == LGzYsmohdU){bKoWpWejBS = true;}
      if(sXpmuyRKAg == MSXbQEJzlX){oHxNNkhixe = true;}
      else if(MSXbQEJzlX == sXpmuyRKAg){RaOSfMdyqq = true;}
      if(mkfqmKUPaZ == yHQQWtgXrP){CRFouMMwyV = true;}
      else if(yHQQWtgXrP == mkfqmKUPaZ){jfWNCFXsaP = true;}
      if(HEIHyyfkKm == UutSwHwNFp){fYcJhAQISm = true;}
      if(wmWZGcsGyT == XnqdLGzXLQ){CcSrBGxUjK = true;}
      if(HROAoaZIlh == LfgnSFsBeH){uutdrQoCHu = true;}
      while(UutSwHwNFp == HEIHyyfkKm){jyxCMEBnxD = true;}
      while(XnqdLGzXLQ == XnqdLGzXLQ){FuxxzjzhpV = true;}
      while(LfgnSFsBeH == LfgnSFsBeH){hqIYBwmaUj = true;}
      if(ttJATQXFfI == true){ttJATQXFfI = false;}
      if(HutuzKQlEQ == true){HutuzKQlEQ = false;}
      if(tILaDnOGzp == true){tILaDnOGzp = false;}
      if(NtiywddqJu == true){NtiywddqJu = false;}
      if(htrCIQllnH == true){htrCIQllnH = false;}
      if(oHxNNkhixe == true){oHxNNkhixe = false;}
      if(CRFouMMwyV == true){CRFouMMwyV = false;}
      if(fYcJhAQISm == true){fYcJhAQISm = false;}
      if(CcSrBGxUjK == true){CcSrBGxUjK = false;}
      if(uutdrQoCHu == true){uutdrQoCHu = false;}
      if(EpmRbPdmeN == true){EpmRbPdmeN = false;}
      if(TYPJcZzNnn == true){TYPJcZzNnn = false;}
      if(OqLnZkeyQR == true){OqLnZkeyQR = false;}
      if(LNBWiMpAPk == true){LNBWiMpAPk = false;}
      if(bKoWpWejBS == true){bKoWpWejBS = false;}
      if(RaOSfMdyqq == true){RaOSfMdyqq = false;}
      if(jfWNCFXsaP == true){jfWNCFXsaP = false;}
      if(jyxCMEBnxD == true){jyxCMEBnxD = false;}
      if(FuxxzjzhpV == true){FuxxzjzhpV = false;}
      if(hqIYBwmaUj == true){hqIYBwmaUj = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class PGNOKWTWAO
{ 
  void jqDMXzxNlj()
  { 
      bool CrlNfalULI = false;
      bool RUmmdESCRS = false;
      bool WikqXJtbxJ = false;
      bool yznwGRYwnM = false;
      bool SPyVSZEQJu = false;
      bool mzjDwSGtpV = false;
      bool fKXBKRgpfM = false;
      bool eVNEzGjOYx = false;
      bool FdRCWyOkAm = false;
      bool KdGSgIrxKA = false;
      bool sNjxPQkeDo = false;
      bool iqVrQCrVeL = false;
      bool DuprBAPuXq = false;
      bool NmEYEqsUlF = false;
      bool NigKESIOCd = false;
      bool QWRzwyXquP = false;
      bool ApHMbumwnY = false;
      bool JWiYyTNfnh = false;
      bool qBrtZqUEbF = false;
      bool TBZVFWbUiI = false;
      string FeEtunlqYz;
      string dJpqzOQKxF;
      string UTndmjDlQJ;
      string wFbITRlznP;
      string WTqcHJUPii;
      string GqGBglpaHK;
      string jAZODYhhXg;
      string cQVgiAcLWc;
      string OmChDEyZah;
      string bLqdeWsbZi;
      string amrCFoVZSf;
      string IeDduxxqKy;
      string ZIGoFRYrCM;
      string HBknCbuzbO;
      string iYHuZwHNhh;
      string YBQaJSfCwn;
      string PcWFYGsPbT;
      string CxPwPAAKPJ;
      string JLKUnFjKej;
      string urDnzFCBWS;
      if(FeEtunlqYz == amrCFoVZSf){CrlNfalULI = true;}
      else if(amrCFoVZSf == FeEtunlqYz){sNjxPQkeDo = true;}
      if(dJpqzOQKxF == IeDduxxqKy){RUmmdESCRS = true;}
      else if(IeDduxxqKy == dJpqzOQKxF){iqVrQCrVeL = true;}
      if(UTndmjDlQJ == ZIGoFRYrCM){WikqXJtbxJ = true;}
      else if(ZIGoFRYrCM == UTndmjDlQJ){DuprBAPuXq = true;}
      if(wFbITRlznP == HBknCbuzbO){yznwGRYwnM = true;}
      else if(HBknCbuzbO == wFbITRlznP){NmEYEqsUlF = true;}
      if(WTqcHJUPii == iYHuZwHNhh){SPyVSZEQJu = true;}
      else if(iYHuZwHNhh == WTqcHJUPii){NigKESIOCd = true;}
      if(GqGBglpaHK == YBQaJSfCwn){mzjDwSGtpV = true;}
      else if(YBQaJSfCwn == GqGBglpaHK){QWRzwyXquP = true;}
      if(jAZODYhhXg == PcWFYGsPbT){fKXBKRgpfM = true;}
      else if(PcWFYGsPbT == jAZODYhhXg){ApHMbumwnY = true;}
      if(cQVgiAcLWc == CxPwPAAKPJ){eVNEzGjOYx = true;}
      if(OmChDEyZah == JLKUnFjKej){FdRCWyOkAm = true;}
      if(bLqdeWsbZi == urDnzFCBWS){KdGSgIrxKA = true;}
      while(CxPwPAAKPJ == cQVgiAcLWc){JWiYyTNfnh = true;}
      while(JLKUnFjKej == JLKUnFjKej){qBrtZqUEbF = true;}
      while(urDnzFCBWS == urDnzFCBWS){TBZVFWbUiI = true;}
      if(CrlNfalULI == true){CrlNfalULI = false;}
      if(RUmmdESCRS == true){RUmmdESCRS = false;}
      if(WikqXJtbxJ == true){WikqXJtbxJ = false;}
      if(yznwGRYwnM == true){yznwGRYwnM = false;}
      if(SPyVSZEQJu == true){SPyVSZEQJu = false;}
      if(mzjDwSGtpV == true){mzjDwSGtpV = false;}
      if(fKXBKRgpfM == true){fKXBKRgpfM = false;}
      if(eVNEzGjOYx == true){eVNEzGjOYx = false;}
      if(FdRCWyOkAm == true){FdRCWyOkAm = false;}
      if(KdGSgIrxKA == true){KdGSgIrxKA = false;}
      if(sNjxPQkeDo == true){sNjxPQkeDo = false;}
      if(iqVrQCrVeL == true){iqVrQCrVeL = false;}
      if(DuprBAPuXq == true){DuprBAPuXq = false;}
      if(NmEYEqsUlF == true){NmEYEqsUlF = false;}
      if(NigKESIOCd == true){NigKESIOCd = false;}
      if(QWRzwyXquP == true){QWRzwyXquP = false;}
      if(ApHMbumwnY == true){ApHMbumwnY = false;}
      if(JWiYyTNfnh == true){JWiYyTNfnh = false;}
      if(qBrtZqUEbF == true){qBrtZqUEbF = false;}
      if(TBZVFWbUiI == true){TBZVFWbUiI = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class JXQTFMOFES
{ 
  void jHVthNdkAm()
  { 
      bool iTqneAJgut = false;
      bool EFgqLgBbkK = false;
      bool iOAxmzuUwu = false;
      bool kqFPgAWGlz = false;
      bool IhqJmVFQJN = false;
      bool QSsayUSsBf = false;
      bool FojzJNzRKL = false;
      bool KtplBBWpKQ = false;
      bool sdKieRxdQL = false;
      bool gcFGsTxrAZ = false;
      bool VnGyCWcGZx = false;
      bool ybijlbdAUq = false;
      bool PUAzdgojsg = false;
      bool DeojuFWMfH = false;
      bool opETNEtUUQ = false;
      bool owXJJAmHTV = false;
      bool hsNrsSmyog = false;
      bool EQTMBZQfkY = false;
      bool mTObqGHfat = false;
      bool RPsKZwbMZt = false;
      string lcWRxIMYLV;
      string mRmorXEeGy;
      string bIALgocREA;
      string lzZWuJVWuB;
      string TOQUjDRDqb;
      string VdhTKdbLjI;
      string etULjmrQti;
      string CgjFdNrfbc;
      string XZZbeHRFLQ;
      string gJmlVYsFjw;
      string LAIIZoscpx;
      string kwjGjEUsgb;
      string VlEcBstxiE;
      string TmueRWRQCo;
      string OoPOfkYfCR;
      string EAXIaZueHf;
      string uwskcyBFoN;
      string lDpqNfVpxQ;
      string TNuQzSOlEq;
      string amIVtRuekh;
      if(lcWRxIMYLV == LAIIZoscpx){iTqneAJgut = true;}
      else if(LAIIZoscpx == lcWRxIMYLV){VnGyCWcGZx = true;}
      if(mRmorXEeGy == kwjGjEUsgb){EFgqLgBbkK = true;}
      else if(kwjGjEUsgb == mRmorXEeGy){ybijlbdAUq = true;}
      if(bIALgocREA == VlEcBstxiE){iOAxmzuUwu = true;}
      else if(VlEcBstxiE == bIALgocREA){PUAzdgojsg = true;}
      if(lzZWuJVWuB == TmueRWRQCo){kqFPgAWGlz = true;}
      else if(TmueRWRQCo == lzZWuJVWuB){DeojuFWMfH = true;}
      if(TOQUjDRDqb == OoPOfkYfCR){IhqJmVFQJN = true;}
      else if(OoPOfkYfCR == TOQUjDRDqb){opETNEtUUQ = true;}
      if(VdhTKdbLjI == EAXIaZueHf){QSsayUSsBf = true;}
      else if(EAXIaZueHf == VdhTKdbLjI){owXJJAmHTV = true;}
      if(etULjmrQti == uwskcyBFoN){FojzJNzRKL = true;}
      else if(uwskcyBFoN == etULjmrQti){hsNrsSmyog = true;}
      if(CgjFdNrfbc == lDpqNfVpxQ){KtplBBWpKQ = true;}
      if(XZZbeHRFLQ == TNuQzSOlEq){sdKieRxdQL = true;}
      if(gJmlVYsFjw == amIVtRuekh){gcFGsTxrAZ = true;}
      while(lDpqNfVpxQ == CgjFdNrfbc){EQTMBZQfkY = true;}
      while(TNuQzSOlEq == TNuQzSOlEq){mTObqGHfat = true;}
      while(amIVtRuekh == amIVtRuekh){RPsKZwbMZt = true;}
      if(iTqneAJgut == true){iTqneAJgut = false;}
      if(EFgqLgBbkK == true){EFgqLgBbkK = false;}
      if(iOAxmzuUwu == true){iOAxmzuUwu = false;}
      if(kqFPgAWGlz == true){kqFPgAWGlz = false;}
      if(IhqJmVFQJN == true){IhqJmVFQJN = false;}
      if(QSsayUSsBf == true){QSsayUSsBf = false;}
      if(FojzJNzRKL == true){FojzJNzRKL = false;}
      if(KtplBBWpKQ == true){KtplBBWpKQ = false;}
      if(sdKieRxdQL == true){sdKieRxdQL = false;}
      if(gcFGsTxrAZ == true){gcFGsTxrAZ = false;}
      if(VnGyCWcGZx == true){VnGyCWcGZx = false;}
      if(ybijlbdAUq == true){ybijlbdAUq = false;}
      if(PUAzdgojsg == true){PUAzdgojsg = false;}
      if(DeojuFWMfH == true){DeojuFWMfH = false;}
      if(opETNEtUUQ == true){opETNEtUUQ = false;}
      if(owXJJAmHTV == true){owXJJAmHTV = false;}
      if(hsNrsSmyog == true){hsNrsSmyog = false;}
      if(EQTMBZQfkY == true){EQTMBZQfkY = false;}
      if(mTObqGHfat == true){mTObqGHfat = false;}
      if(RPsKZwbMZt == true){RPsKZwbMZt = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class EVUKTXRUFZ
{ 
  void oOittogqtK()
  { 
      bool aoMcgBxUEO = false;
      bool VgsbDHtdHl = false;
      bool SzsjWSaBMD = false;
      bool LSHBlJSQXs = false;
      bool jcMMLAOLAz = false;
      bool bhrbQaucFO = false;
      bool ZuHBDDZrot = false;
      bool odFOCpmgXW = false;
      bool DOBNadZejK = false;
      bool OoLJSnULII = false;
      bool ZWWGKxbdZa = false;
      bool nOFiKLttZZ = false;
      bool cuIefzSwwN = false;
      bool UaXOwgrtCc = false;
      bool BwFIVzibyG = false;
      bool tZkifeOqaK = false;
      bool eegMFMqqmd = false;
      bool SzrwXfozIf = false;
      bool QpxpSupniQ = false;
      bool RATryWPrCJ = false;
      string gKZPTWpMcJ;
      string YhfcmxgKUn;
      string zrmZlkGbgX;
      string wStrpctzIl;
      string VxGbIAtDEO;
      string fTdeGnXAch;
      string QOfENGmnmK;
      string ChChRClKQl;
      string qCWSrcoPkB;
      string EsWZVHQBOC;
      string NFPtLyRuME;
      string BMiqqNqNMk;
      string QWCkFILcMK;
      string kkuNYkmcGs;
      string KtDgArKeiH;
      string PDndlpCdoC;
      string mnhCSPQVRF;
      string aOGSZWTUkM;
      string yftEtgxRbh;
      string hInEGWLANj;
      if(gKZPTWpMcJ == NFPtLyRuME){aoMcgBxUEO = true;}
      else if(NFPtLyRuME == gKZPTWpMcJ){ZWWGKxbdZa = true;}
      if(YhfcmxgKUn == BMiqqNqNMk){VgsbDHtdHl = true;}
      else if(BMiqqNqNMk == YhfcmxgKUn){nOFiKLttZZ = true;}
      if(zrmZlkGbgX == QWCkFILcMK){SzsjWSaBMD = true;}
      else if(QWCkFILcMK == zrmZlkGbgX){cuIefzSwwN = true;}
      if(wStrpctzIl == kkuNYkmcGs){LSHBlJSQXs = true;}
      else if(kkuNYkmcGs == wStrpctzIl){UaXOwgrtCc = true;}
      if(VxGbIAtDEO == KtDgArKeiH){jcMMLAOLAz = true;}
      else if(KtDgArKeiH == VxGbIAtDEO){BwFIVzibyG = true;}
      if(fTdeGnXAch == PDndlpCdoC){bhrbQaucFO = true;}
      else if(PDndlpCdoC == fTdeGnXAch){tZkifeOqaK = true;}
      if(QOfENGmnmK == mnhCSPQVRF){ZuHBDDZrot = true;}
      else if(mnhCSPQVRF == QOfENGmnmK){eegMFMqqmd = true;}
      if(ChChRClKQl == aOGSZWTUkM){odFOCpmgXW = true;}
      if(qCWSrcoPkB == yftEtgxRbh){DOBNadZejK = true;}
      if(EsWZVHQBOC == hInEGWLANj){OoLJSnULII = true;}
      while(aOGSZWTUkM == ChChRClKQl){SzrwXfozIf = true;}
      while(yftEtgxRbh == yftEtgxRbh){QpxpSupniQ = true;}
      while(hInEGWLANj == hInEGWLANj){RATryWPrCJ = true;}
      if(aoMcgBxUEO == true){aoMcgBxUEO = false;}
      if(VgsbDHtdHl == true){VgsbDHtdHl = false;}
      if(SzsjWSaBMD == true){SzsjWSaBMD = false;}
      if(LSHBlJSQXs == true){LSHBlJSQXs = false;}
      if(jcMMLAOLAz == true){jcMMLAOLAz = false;}
      if(bhrbQaucFO == true){bhrbQaucFO = false;}
      if(ZuHBDDZrot == true){ZuHBDDZrot = false;}
      if(odFOCpmgXW == true){odFOCpmgXW = false;}
      if(DOBNadZejK == true){DOBNadZejK = false;}
      if(OoLJSnULII == true){OoLJSnULII = false;}
      if(ZWWGKxbdZa == true){ZWWGKxbdZa = false;}
      if(nOFiKLttZZ == true){nOFiKLttZZ = false;}
      if(cuIefzSwwN == true){cuIefzSwwN = false;}
      if(UaXOwgrtCc == true){UaXOwgrtCc = false;}
      if(BwFIVzibyG == true){BwFIVzibyG = false;}
      if(tZkifeOqaK == true){tZkifeOqaK = false;}
      if(eegMFMqqmd == true){eegMFMqqmd = false;}
      if(SzrwXfozIf == true){SzrwXfozIf = false;}
      if(QpxpSupniQ == true){QpxpSupniQ = false;}
      if(RATryWPrCJ == true){RATryWPrCJ = false;}
    } 
}; 
