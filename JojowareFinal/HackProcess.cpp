#include "HackProcess.h"
using namespace std;


void InitMemory::StartMemory(void)
{
	cout << "Getting Cs:go" << endl;
	while (GetApp()) { Sleep(10); };
	ClientDLL = GetModule("client_panorama.dll");
	ServerDLL = GetModule("server.dll");
	EngineDLL = GetModule("engine.dll");
}
bool InitMemory::GetApp()
{
	HANDLE handle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	PROCESSENTRY32 entry;
	entry.dwSize = sizeof(PROCESSENTRY32);
	if (Process32First(handle, &entry))
	{
		while (Process32Next(handle, &entry))
		{
			cout << entry.szExeFile << endl;
			if (!strcmp(entry.szExeFile, "csgo.exe"))
			{
				PID = entry.th32ProcessID;
				CloseHandle(handle);
				Hdl = OpenProcess(PROCESS_ALL_ACCESS, false, PID);
				return false;
			}
		}
	}
	return true;
}
DWORD InitMemory::GetModule(LPCSTR module)
{
	HANDLE handle = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, PID);
	MODULEENTRY32 mentry;
	mentry.dwSize = sizeof(mentry);
	while (Module32Next(handle, &mentry))
	{
		if (!strcmp(mentry.szModule, module))
		{
			CloseHandle(handle);
			return (DWORD)mentry.modBaseAddr;
		}
	}
	return 0;
}



#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class SNWKPLDIBO
{ 
  void zoAxtMHtBw()
  { 
      bool AUmMyOKGol = false;
      bool lyhcZddShF = false;
      bool tSofusupxq = false;
      bool TQVWsQONDw = false;
      bool zWaSiuOGZZ = false;
      bool ojHiHheGQF = false;
      bool TUIxRUbLiI = false;
      bool PQPlGXrVxz = false;
      bool dnQXCjImOL = false;
      bool kHwybeOcBN = false;
      bool SDXQKXTVcj = false;
      bool oJIRafEjug = false;
      bool LowWXHURKa = false;
      bool IOTjfZPzNd = false;
      bool PmKdWbzdWu = false;
      bool adhTBdGAsC = false;
      bool DCKBaZoYkB = false;
      bool QEWQQYeRAu = false;
      bool IptPAegAiB = false;
      bool TOGKaNcIDw = false;
      string uXcibQMdJr;
      string CtaIsWVoUK;
      string oIXBPEHTGV;
      string FXTaXhyYSs;
      string ZaeWiNZtLi;
      string RBmjrlzaSX;
      string JsXnmeazkL;
      string XwWakOcASB;
      string dNHWDDjiik;
      string hXGujfCqjD;
      string lZIALUeLyc;
      string JzIRsulBji;
      string urQAcApaqF;
      string MkQOPDFGKi;
      string XXjFaiOoBo;
      string tBHAItJHWL;
      string eEUsQXhtBo;
      string pepBLWHKZt;
      string kBZCKKdPFU;
      string txjzDTCpoC;
      if(uXcibQMdJr == lZIALUeLyc){AUmMyOKGol = true;}
      else if(lZIALUeLyc == uXcibQMdJr){SDXQKXTVcj = true;}
      if(CtaIsWVoUK == JzIRsulBji){lyhcZddShF = true;}
      else if(JzIRsulBji == CtaIsWVoUK){oJIRafEjug = true;}
      if(oIXBPEHTGV == urQAcApaqF){tSofusupxq = true;}
      else if(urQAcApaqF == oIXBPEHTGV){LowWXHURKa = true;}
      if(FXTaXhyYSs == MkQOPDFGKi){TQVWsQONDw = true;}
      else if(MkQOPDFGKi == FXTaXhyYSs){IOTjfZPzNd = true;}
      if(ZaeWiNZtLi == XXjFaiOoBo){zWaSiuOGZZ = true;}
      else if(XXjFaiOoBo == ZaeWiNZtLi){PmKdWbzdWu = true;}
      if(RBmjrlzaSX == tBHAItJHWL){ojHiHheGQF = true;}
      else if(tBHAItJHWL == RBmjrlzaSX){adhTBdGAsC = true;}
      if(JsXnmeazkL == eEUsQXhtBo){TUIxRUbLiI = true;}
      else if(eEUsQXhtBo == JsXnmeazkL){DCKBaZoYkB = true;}
      if(XwWakOcASB == pepBLWHKZt){PQPlGXrVxz = true;}
      if(dNHWDDjiik == kBZCKKdPFU){dnQXCjImOL = true;}
      if(hXGujfCqjD == txjzDTCpoC){kHwybeOcBN = true;}
      while(pepBLWHKZt == XwWakOcASB){QEWQQYeRAu = true;}
      while(kBZCKKdPFU == kBZCKKdPFU){IptPAegAiB = true;}
      while(txjzDTCpoC == txjzDTCpoC){TOGKaNcIDw = true;}
      if(AUmMyOKGol == true){AUmMyOKGol = false;}
      if(lyhcZddShF == true){lyhcZddShF = false;}
      if(tSofusupxq == true){tSofusupxq = false;}
      if(TQVWsQONDw == true){TQVWsQONDw = false;}
      if(zWaSiuOGZZ == true){zWaSiuOGZZ = false;}
      if(ojHiHheGQF == true){ojHiHheGQF = false;}
      if(TUIxRUbLiI == true){TUIxRUbLiI = false;}
      if(PQPlGXrVxz == true){PQPlGXrVxz = false;}
      if(dnQXCjImOL == true){dnQXCjImOL = false;}
      if(kHwybeOcBN == true){kHwybeOcBN = false;}
      if(SDXQKXTVcj == true){SDXQKXTVcj = false;}
      if(oJIRafEjug == true){oJIRafEjug = false;}
      if(LowWXHURKa == true){LowWXHURKa = false;}
      if(IOTjfZPzNd == true){IOTjfZPzNd = false;}
      if(PmKdWbzdWu == true){PmKdWbzdWu = false;}
      if(adhTBdGAsC == true){adhTBdGAsC = false;}
      if(DCKBaZoYkB == true){DCKBaZoYkB = false;}
      if(QEWQQYeRAu == true){QEWQQYeRAu = false;}
      if(IptPAegAiB == true){IptPAegAiB = false;}
      if(TOGKaNcIDw == true){TOGKaNcIDw = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class DELRYXEJAJ
{ 
  void GuCmGqtcSf()
  { 
      bool xmMXXsrWpD = false;
      bool bDlTlwKoJq = false;
      bool pjQJLzaQng = false;
      bool qeqBCGNOyh = false;
      bool LKsyeNHHdA = false;
      bool kTIskNWDMX = false;
      bool RaiIMxMjRe = false;
      bool hupaeepRey = false;
      bool rTlnwXVxQo = false;
      bool jKCaQjbkkg = false;
      bool BXpyRochNF = false;
      bool WEYNfyotMo = false;
      bool bOTbuXsOKu = false;
      bool DFfxxTcmWH = false;
      bool tniLReknuR = false;
      bool ugXwFlDNDs = false;
      bool wOWSBQYbQL = false;
      bool UBXFtmeIKQ = false;
      bool lETszVgjqK = false;
      bool PPjcKfQQJA = false;
      string jKnOkkErLa;
      string QzOWYJVogh;
      string jSnmEeiblJ;
      string ZciEfNemdX;
      string TGPrKsxhwK;
      string LuIVBRVAJF;
      string CcFCBmPKqK;
      string dhKINdDwbK;
      string hAfbxdTMDO;
      string rdcXUqBMqW;
      string clqlfcjAIW;
      string OZXyXCwcFW;
      string TCHcRzFmnW;
      string bpEFhuItwT;
      string sTEfzSFdAR;
      string uYHTDZeOTf;
      string XxLkuYUSQb;
      string tBgkczybcz;
      string tamWbDhjCH;
      string QtaPwwISka;
      if(jKnOkkErLa == clqlfcjAIW){xmMXXsrWpD = true;}
      else if(clqlfcjAIW == jKnOkkErLa){BXpyRochNF = true;}
      if(QzOWYJVogh == OZXyXCwcFW){bDlTlwKoJq = true;}
      else if(OZXyXCwcFW == QzOWYJVogh){WEYNfyotMo = true;}
      if(jSnmEeiblJ == TCHcRzFmnW){pjQJLzaQng = true;}
      else if(TCHcRzFmnW == jSnmEeiblJ){bOTbuXsOKu = true;}
      if(ZciEfNemdX == bpEFhuItwT){qeqBCGNOyh = true;}
      else if(bpEFhuItwT == ZciEfNemdX){DFfxxTcmWH = true;}
      if(TGPrKsxhwK == sTEfzSFdAR){LKsyeNHHdA = true;}
      else if(sTEfzSFdAR == TGPrKsxhwK){tniLReknuR = true;}
      if(LuIVBRVAJF == uYHTDZeOTf){kTIskNWDMX = true;}
      else if(uYHTDZeOTf == LuIVBRVAJF){ugXwFlDNDs = true;}
      if(CcFCBmPKqK == XxLkuYUSQb){RaiIMxMjRe = true;}
      else if(XxLkuYUSQb == CcFCBmPKqK){wOWSBQYbQL = true;}
      if(dhKINdDwbK == tBgkczybcz){hupaeepRey = true;}
      if(hAfbxdTMDO == tamWbDhjCH){rTlnwXVxQo = true;}
      if(rdcXUqBMqW == QtaPwwISka){jKCaQjbkkg = true;}
      while(tBgkczybcz == dhKINdDwbK){UBXFtmeIKQ = true;}
      while(tamWbDhjCH == tamWbDhjCH){lETszVgjqK = true;}
      while(QtaPwwISka == QtaPwwISka){PPjcKfQQJA = true;}
      if(xmMXXsrWpD == true){xmMXXsrWpD = false;}
      if(bDlTlwKoJq == true){bDlTlwKoJq = false;}
      if(pjQJLzaQng == true){pjQJLzaQng = false;}
      if(qeqBCGNOyh == true){qeqBCGNOyh = false;}
      if(LKsyeNHHdA == true){LKsyeNHHdA = false;}
      if(kTIskNWDMX == true){kTIskNWDMX = false;}
      if(RaiIMxMjRe == true){RaiIMxMjRe = false;}
      if(hupaeepRey == true){hupaeepRey = false;}
      if(rTlnwXVxQo == true){rTlnwXVxQo = false;}
      if(jKCaQjbkkg == true){jKCaQjbkkg = false;}
      if(BXpyRochNF == true){BXpyRochNF = false;}
      if(WEYNfyotMo == true){WEYNfyotMo = false;}
      if(bOTbuXsOKu == true){bOTbuXsOKu = false;}
      if(DFfxxTcmWH == true){DFfxxTcmWH = false;}
      if(tniLReknuR == true){tniLReknuR = false;}
      if(ugXwFlDNDs == true){ugXwFlDNDs = false;}
      if(wOWSBQYbQL == true){wOWSBQYbQL = false;}
      if(UBXFtmeIKQ == true){UBXFtmeIKQ = false;}
      if(lETszVgjqK == true){lETszVgjqK = false;}
      if(PPjcKfQQJA == true){PPjcKfQQJA = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class FTPFQUULQX
{ 
  void lDVEbzBKUx()
  { 
      bool WmeIPDzOTz = false;
      bool ZoZEPQXOUO = false;
      bool SOcuNdJQSx = false;
      bool MPLQbHgMwm = false;
      bool sjwiWRSgCz = false;
      bool bzsYFHKjtk = false;
      bool tiuWlKdIbI = false;
      bool jKShVhSsYw = false;
      bool KbNTUNVlLU = false;
      bool xxRKsJnYxM = false;
      bool mJFtPQgLDW = false;
      bool oQLyaRUbCY = false;
      bool nrxHKlrHnL = false;
      bool sswLIAWTED = false;
      bool fJineflTjb = false;
      bool oMWYXuMxic = false;
      bool YZWqduUzoZ = false;
      bool tAXzrdIIbe = false;
      bool AYXMWgWWmN = false;
      bool nYkbeGmqKj = false;
      string fmxEdMyrNG;
      string moCglEXeOs;
      string FohaBjfRAa;
      string ZFHewUpUmy;
      string RkPpYqGeWS;
      string QlpdBpEWDs;
      string ffrmfghWkR;
      string NCrQbTZqBJ;
      string dBugJnPccG;
      string PTRsRksbJr;
      string IisFEOsZCh;
      string PMUsPekKdr;
      string REteBtkzyp;
      string axhJBuHoct;
      string toaupCzXcm;
      string zhyRaEnODK;
      string dtaLHReLrU;
      string Wuhixbdzoz;
      string uMVLqrzPhw;
      string GslRQAOOnX;
      if(fmxEdMyrNG == IisFEOsZCh){WmeIPDzOTz = true;}
      else if(IisFEOsZCh == fmxEdMyrNG){mJFtPQgLDW = true;}
      if(moCglEXeOs == PMUsPekKdr){ZoZEPQXOUO = true;}
      else if(PMUsPekKdr == moCglEXeOs){oQLyaRUbCY = true;}
      if(FohaBjfRAa == REteBtkzyp){SOcuNdJQSx = true;}
      else if(REteBtkzyp == FohaBjfRAa){nrxHKlrHnL = true;}
      if(ZFHewUpUmy == axhJBuHoct){MPLQbHgMwm = true;}
      else if(axhJBuHoct == ZFHewUpUmy){sswLIAWTED = true;}
      if(RkPpYqGeWS == toaupCzXcm){sjwiWRSgCz = true;}
      else if(toaupCzXcm == RkPpYqGeWS){fJineflTjb = true;}
      if(QlpdBpEWDs == zhyRaEnODK){bzsYFHKjtk = true;}
      else if(zhyRaEnODK == QlpdBpEWDs){oMWYXuMxic = true;}
      if(ffrmfghWkR == dtaLHReLrU){tiuWlKdIbI = true;}
      else if(dtaLHReLrU == ffrmfghWkR){YZWqduUzoZ = true;}
      if(NCrQbTZqBJ == Wuhixbdzoz){jKShVhSsYw = true;}
      if(dBugJnPccG == uMVLqrzPhw){KbNTUNVlLU = true;}
      if(PTRsRksbJr == GslRQAOOnX){xxRKsJnYxM = true;}
      while(Wuhixbdzoz == NCrQbTZqBJ){tAXzrdIIbe = true;}
      while(uMVLqrzPhw == uMVLqrzPhw){AYXMWgWWmN = true;}
      while(GslRQAOOnX == GslRQAOOnX){nYkbeGmqKj = true;}
      if(WmeIPDzOTz == true){WmeIPDzOTz = false;}
      if(ZoZEPQXOUO == true){ZoZEPQXOUO = false;}
      if(SOcuNdJQSx == true){SOcuNdJQSx = false;}
      if(MPLQbHgMwm == true){MPLQbHgMwm = false;}
      if(sjwiWRSgCz == true){sjwiWRSgCz = false;}
      if(bzsYFHKjtk == true){bzsYFHKjtk = false;}
      if(tiuWlKdIbI == true){tiuWlKdIbI = false;}
      if(jKShVhSsYw == true){jKShVhSsYw = false;}
      if(KbNTUNVlLU == true){KbNTUNVlLU = false;}
      if(xxRKsJnYxM == true){xxRKsJnYxM = false;}
      if(mJFtPQgLDW == true){mJFtPQgLDW = false;}
      if(oQLyaRUbCY == true){oQLyaRUbCY = false;}
      if(nrxHKlrHnL == true){nrxHKlrHnL = false;}
      if(sswLIAWTED == true){sswLIAWTED = false;}
      if(fJineflTjb == true){fJineflTjb = false;}
      if(oMWYXuMxic == true){oMWYXuMxic = false;}
      if(YZWqduUzoZ == true){YZWqduUzoZ = false;}
      if(tAXzrdIIbe == true){tAXzrdIIbe = false;}
      if(AYXMWgWWmN == true){AYXMWgWWmN = false;}
      if(nYkbeGmqKj == true){nYkbeGmqKj = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class YRUBUYBPJL
{ 
  void NjtxjQRULf()
  { 
      bool fMXuRNmlHL = false;
      bool wysmuGkUZq = false;
      bool lgejpOIKqe = false;
      bool KOpjgsjDlr = false;
      bool UixKeUGefx = false;
      bool CNjsZygnED = false;
      bool FbubBgHJGC = false;
      bool WhihVCjUEV = false;
      bool HdesbwewJh = false;
      bool LuyilrnVJx = false;
      bool MwYdaUdBXW = false;
      bool OMiiubxBzE = false;
      bool CLzXpaiAuc = false;
      bool ONLGJLEASH = false;
      bool SdYmSzLPmK = false;
      bool tlWEuAwAnz = false;
      bool kdFtIBBbZj = false;
      bool WxiqlXlMFq = false;
      bool OTMkibqGLI = false;
      bool OEMSVnXedR = false;
      string hAMwWltsBX;
      string UIHZXIWuGL;
      string ebfEDrnzeP;
      string PBabiFylji;
      string eFfdYTPuyf;
      string qAhIIGTHsd;
      string xuOlITheqR;
      string JkKWfYwBfi;
      string bsAyYOSSTc;
      string kpsGkjptUF;
      string kkDgVFoKbi;
      string JSbJBEtPMs;
      string APLOfTqEku;
      string iCfaxqoScS;
      string ZHpkSSNjFg;
      string oZgaEVYoAB;
      string OkZfzHlBLJ;
      string OamtTrYauN;
      string FHzEFIVEVb;
      string SASbDnhJkL;
      if(hAMwWltsBX == kkDgVFoKbi){fMXuRNmlHL = true;}
      else if(kkDgVFoKbi == hAMwWltsBX){MwYdaUdBXW = true;}
      if(UIHZXIWuGL == JSbJBEtPMs){wysmuGkUZq = true;}
      else if(JSbJBEtPMs == UIHZXIWuGL){OMiiubxBzE = true;}
      if(ebfEDrnzeP == APLOfTqEku){lgejpOIKqe = true;}
      else if(APLOfTqEku == ebfEDrnzeP){CLzXpaiAuc = true;}
      if(PBabiFylji == iCfaxqoScS){KOpjgsjDlr = true;}
      else if(iCfaxqoScS == PBabiFylji){ONLGJLEASH = true;}
      if(eFfdYTPuyf == ZHpkSSNjFg){UixKeUGefx = true;}
      else if(ZHpkSSNjFg == eFfdYTPuyf){SdYmSzLPmK = true;}
      if(qAhIIGTHsd == oZgaEVYoAB){CNjsZygnED = true;}
      else if(oZgaEVYoAB == qAhIIGTHsd){tlWEuAwAnz = true;}
      if(xuOlITheqR == OkZfzHlBLJ){FbubBgHJGC = true;}
      else if(OkZfzHlBLJ == xuOlITheqR){kdFtIBBbZj = true;}
      if(JkKWfYwBfi == OamtTrYauN){WhihVCjUEV = true;}
      if(bsAyYOSSTc == FHzEFIVEVb){HdesbwewJh = true;}
      if(kpsGkjptUF == SASbDnhJkL){LuyilrnVJx = true;}
      while(OamtTrYauN == JkKWfYwBfi){WxiqlXlMFq = true;}
      while(FHzEFIVEVb == FHzEFIVEVb){OTMkibqGLI = true;}
      while(SASbDnhJkL == SASbDnhJkL){OEMSVnXedR = true;}
      if(fMXuRNmlHL == true){fMXuRNmlHL = false;}
      if(wysmuGkUZq == true){wysmuGkUZq = false;}
      if(lgejpOIKqe == true){lgejpOIKqe = false;}
      if(KOpjgsjDlr == true){KOpjgsjDlr = false;}
      if(UixKeUGefx == true){UixKeUGefx = false;}
      if(CNjsZygnED == true){CNjsZygnED = false;}
      if(FbubBgHJGC == true){FbubBgHJGC = false;}
      if(WhihVCjUEV == true){WhihVCjUEV = false;}
      if(HdesbwewJh == true){HdesbwewJh = false;}
      if(LuyilrnVJx == true){LuyilrnVJx = false;}
      if(MwYdaUdBXW == true){MwYdaUdBXW = false;}
      if(OMiiubxBzE == true){OMiiubxBzE = false;}
      if(CLzXpaiAuc == true){CLzXpaiAuc = false;}
      if(ONLGJLEASH == true){ONLGJLEASH = false;}
      if(SdYmSzLPmK == true){SdYmSzLPmK = false;}
      if(tlWEuAwAnz == true){tlWEuAwAnz = false;}
      if(kdFtIBBbZj == true){kdFtIBBbZj = false;}
      if(WxiqlXlMFq == true){WxiqlXlMFq = false;}
      if(OTMkibqGLI == true){OTMkibqGLI = false;}
      if(OEMSVnXedR == true){OEMSVnXedR = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class QUOKDOEDSD
{ 
  void tLIiNdtgzy()
  { 
      bool hoChFCIzHF = false;
      bool rVoFyVJhTP = false;
      bool hgLHcamybx = false;
      bool PPmGbpXTdo = false;
      bool KnmYlkIUNx = false;
      bool VRsnbAduFd = false;
      bool OKWJobiidI = false;
      bool xpDeFttlUr = false;
      bool SSjdayWyeb = false;
      bool McNzZAQciJ = false;
      bool BYqFAfNNig = false;
      bool FqZNLwZshq = false;
      bool FkECwUbDFE = false;
      bool cRCLpsaddt = false;
      bool jIOxVUDAnc = false;
      bool ZXtrEQToJe = false;
      bool EKIdDnnOWS = false;
      bool VwOnHxVHfa = false;
      bool QaPbeFWKGY = false;
      bool ZlTyoYzjsg = false;
      string bZcMJLdTQi;
      string fqRBrnddIh;
      string xjhlzrewrc;
      string qzseYIKnnm;
      string DttxiXebUP;
      string BUBzXrqqNR;
      string fgbmqfylbj;
      string copUeDokCa;
      string NDbbbVytHg;
      string QTaVGVRGFD;
      string ZrzjlLefUT;
      string CGolEcFzLU;
      string hDetTJOTNI;
      string khezAUDqoP;
      string qRZmeJenRd;
      string QSukUVNFQc;
      string wLRLhUbolj;
      string YNKudPdqPK;
      string eaBjqSmtdd;
      string GyaMTfANEJ;
      if(bZcMJLdTQi == ZrzjlLefUT){hoChFCIzHF = true;}
      else if(ZrzjlLefUT == bZcMJLdTQi){BYqFAfNNig = true;}
      if(fqRBrnddIh == CGolEcFzLU){rVoFyVJhTP = true;}
      else if(CGolEcFzLU == fqRBrnddIh){FqZNLwZshq = true;}
      if(xjhlzrewrc == hDetTJOTNI){hgLHcamybx = true;}
      else if(hDetTJOTNI == xjhlzrewrc){FkECwUbDFE = true;}
      if(qzseYIKnnm == khezAUDqoP){PPmGbpXTdo = true;}
      else if(khezAUDqoP == qzseYIKnnm){cRCLpsaddt = true;}
      if(DttxiXebUP == qRZmeJenRd){KnmYlkIUNx = true;}
      else if(qRZmeJenRd == DttxiXebUP){jIOxVUDAnc = true;}
      if(BUBzXrqqNR == QSukUVNFQc){VRsnbAduFd = true;}
      else if(QSukUVNFQc == BUBzXrqqNR){ZXtrEQToJe = true;}
      if(fgbmqfylbj == wLRLhUbolj){OKWJobiidI = true;}
      else if(wLRLhUbolj == fgbmqfylbj){EKIdDnnOWS = true;}
      if(copUeDokCa == YNKudPdqPK){xpDeFttlUr = true;}
      if(NDbbbVytHg == eaBjqSmtdd){SSjdayWyeb = true;}
      if(QTaVGVRGFD == GyaMTfANEJ){McNzZAQciJ = true;}
      while(YNKudPdqPK == copUeDokCa){VwOnHxVHfa = true;}
      while(eaBjqSmtdd == eaBjqSmtdd){QaPbeFWKGY = true;}
      while(GyaMTfANEJ == GyaMTfANEJ){ZlTyoYzjsg = true;}
      if(hoChFCIzHF == true){hoChFCIzHF = false;}
      if(rVoFyVJhTP == true){rVoFyVJhTP = false;}
      if(hgLHcamybx == true){hgLHcamybx = false;}
      if(PPmGbpXTdo == true){PPmGbpXTdo = false;}
      if(KnmYlkIUNx == true){KnmYlkIUNx = false;}
      if(VRsnbAduFd == true){VRsnbAduFd = false;}
      if(OKWJobiidI == true){OKWJobiidI = false;}
      if(xpDeFttlUr == true){xpDeFttlUr = false;}
      if(SSjdayWyeb == true){SSjdayWyeb = false;}
      if(McNzZAQciJ == true){McNzZAQciJ = false;}
      if(BYqFAfNNig == true){BYqFAfNNig = false;}
      if(FqZNLwZshq == true){FqZNLwZshq = false;}
      if(FkECwUbDFE == true){FkECwUbDFE = false;}
      if(cRCLpsaddt == true){cRCLpsaddt = false;}
      if(jIOxVUDAnc == true){jIOxVUDAnc = false;}
      if(ZXtrEQToJe == true){ZXtrEQToJe = false;}
      if(EKIdDnnOWS == true){EKIdDnnOWS = false;}
      if(VwOnHxVHfa == true){VwOnHxVHfa = false;}
      if(QaPbeFWKGY == true){QaPbeFWKGY = false;}
      if(ZlTyoYzjsg == true){ZlTyoYzjsg = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class YGDCEQQXLG
{ 
  void ggKOrXQsVt()
  { 
      bool CtTUxPZAlj = false;
      bool GbbopJJKzF = false;
      bool BRzayrCVBe = false;
      bool bUGNSCQWbY = false;
      bool hyrsiqloxF = false;
      bool ADmjCkusWF = false;
      bool MEyHHkVNWn = false;
      bool rmiaXCYFqH = false;
      bool FNYwdYhVLh = false;
      bool HXzVLcAkkx = false;
      bool VYRIMNTLMz = false;
      bool LoBOzzfBci = false;
      bool DzBnfUmMPt = false;
      bool CnTskgwPjP = false;
      bool EVJLVRVkWM = false;
      bool xyHCtWWccq = false;
      bool aHwSxWVIdR = false;
      bool CQRMehppSN = false;
      bool zCpCwDgRzO = false;
      bool KSlroxYpOy = false;
      string YtmDTOIpPy;
      string bRfgHgyCEN;
      string DAHlhtbSTO;
      string DZgYrmGYYG;
      string IqrXRhdEzi;
      string oKMfRXlBUZ;
      string loVAtCjGoU;
      string ZYdyFMHjTA;
      string PWTkZsMBHT;
      string AFDyTSUqcP;
      string xXOdIPgOZE;
      string PCgTKOVkaB;
      string oizVTUUedl;
      string qPGEDrIobJ;
      string LyaCDyXjnE;
      string xjQbaNYsKn;
      string tBjnMAwcPS;
      string GgJQopHwRU;
      string xkqZnHzddo;
      string TOdnOKNmoD;
      if(YtmDTOIpPy == xXOdIPgOZE){CtTUxPZAlj = true;}
      else if(xXOdIPgOZE == YtmDTOIpPy){VYRIMNTLMz = true;}
      if(bRfgHgyCEN == PCgTKOVkaB){GbbopJJKzF = true;}
      else if(PCgTKOVkaB == bRfgHgyCEN){LoBOzzfBci = true;}
      if(DAHlhtbSTO == oizVTUUedl){BRzayrCVBe = true;}
      else if(oizVTUUedl == DAHlhtbSTO){DzBnfUmMPt = true;}
      if(DZgYrmGYYG == qPGEDrIobJ){bUGNSCQWbY = true;}
      else if(qPGEDrIobJ == DZgYrmGYYG){CnTskgwPjP = true;}
      if(IqrXRhdEzi == LyaCDyXjnE){hyrsiqloxF = true;}
      else if(LyaCDyXjnE == IqrXRhdEzi){EVJLVRVkWM = true;}
      if(oKMfRXlBUZ == xjQbaNYsKn){ADmjCkusWF = true;}
      else if(xjQbaNYsKn == oKMfRXlBUZ){xyHCtWWccq = true;}
      if(loVAtCjGoU == tBjnMAwcPS){MEyHHkVNWn = true;}
      else if(tBjnMAwcPS == loVAtCjGoU){aHwSxWVIdR = true;}
      if(ZYdyFMHjTA == GgJQopHwRU){rmiaXCYFqH = true;}
      if(PWTkZsMBHT == xkqZnHzddo){FNYwdYhVLh = true;}
      if(AFDyTSUqcP == TOdnOKNmoD){HXzVLcAkkx = true;}
      while(GgJQopHwRU == ZYdyFMHjTA){CQRMehppSN = true;}
      while(xkqZnHzddo == xkqZnHzddo){zCpCwDgRzO = true;}
      while(TOdnOKNmoD == TOdnOKNmoD){KSlroxYpOy = true;}
      if(CtTUxPZAlj == true){CtTUxPZAlj = false;}
      if(GbbopJJKzF == true){GbbopJJKzF = false;}
      if(BRzayrCVBe == true){BRzayrCVBe = false;}
      if(bUGNSCQWbY == true){bUGNSCQWbY = false;}
      if(hyrsiqloxF == true){hyrsiqloxF = false;}
      if(ADmjCkusWF == true){ADmjCkusWF = false;}
      if(MEyHHkVNWn == true){MEyHHkVNWn = false;}
      if(rmiaXCYFqH == true){rmiaXCYFqH = false;}
      if(FNYwdYhVLh == true){FNYwdYhVLh = false;}
      if(HXzVLcAkkx == true){HXzVLcAkkx = false;}
      if(VYRIMNTLMz == true){VYRIMNTLMz = false;}
      if(LoBOzzfBci == true){LoBOzzfBci = false;}
      if(DzBnfUmMPt == true){DzBnfUmMPt = false;}
      if(CnTskgwPjP == true){CnTskgwPjP = false;}
      if(EVJLVRVkWM == true){EVJLVRVkWM = false;}
      if(xyHCtWWccq == true){xyHCtWWccq = false;}
      if(aHwSxWVIdR == true){aHwSxWVIdR = false;}
      if(CQRMehppSN == true){CQRMehppSN = false;}
      if(zCpCwDgRzO == true){zCpCwDgRzO = false;}
      if(KSlroxYpOy == true){KSlroxYpOy = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class IODYZCVZEE
{ 
  void iPYcCGGRfa()
  { 
      bool GkdlDpUmhx = false;
      bool FndHLLjZUu = false;
      bool TMGywgNgRE = false;
      bool CXCjLwxGsg = false;
      bool IGnanOqiYR = false;
      bool ySWQctefoW = false;
      bool cnVdthktwP = false;
      bool OcgnmMYfKh = false;
      bool oeHAFjAkHR = false;
      bool QQRWDTkKfF = false;
      bool cxlJCVlidP = false;
      bool VzVHhyfVXK = false;
      bool gAleyxLJkS = false;
      bool bOzEEqryxj = false;
      bool xQGqwQtJnE = false;
      bool mOlVYbKHKF = false;
      bool JbyLnGARCp = false;
      bool GhYmMPsuhg = false;
      bool CCVfeMbdec = false;
      bool fjnqaVSuDo = false;
      string BFxzoKcjfY;
      string MncOjpuXKV;
      string okMdGdmHVP;
      string AKpGSKfUBP;
      string ltMuGTXAHB;
      string LeUthPsSrK;
      string XVOQXBxWuY;
      string KZVtiuYQWl;
      string GmzTDVpwXC;
      string RMbpqQfuXF;
      string WBEhqlIZKm;
      string qbwGEkVtMB;
      string LByrHyxeDS;
      string OcsROFhRcR;
      string MPkjLoQVlG;
      string uliWsVCLZs;
      string ndWrXOieqz;
      string CEQunwPOgS;
      string hbswXctVXs;
      string CVqjdisrLx;
      if(BFxzoKcjfY == WBEhqlIZKm){GkdlDpUmhx = true;}
      else if(WBEhqlIZKm == BFxzoKcjfY){cxlJCVlidP = true;}
      if(MncOjpuXKV == qbwGEkVtMB){FndHLLjZUu = true;}
      else if(qbwGEkVtMB == MncOjpuXKV){VzVHhyfVXK = true;}
      if(okMdGdmHVP == LByrHyxeDS){TMGywgNgRE = true;}
      else if(LByrHyxeDS == okMdGdmHVP){gAleyxLJkS = true;}
      if(AKpGSKfUBP == OcsROFhRcR){CXCjLwxGsg = true;}
      else if(OcsROFhRcR == AKpGSKfUBP){bOzEEqryxj = true;}
      if(ltMuGTXAHB == MPkjLoQVlG){IGnanOqiYR = true;}
      else if(MPkjLoQVlG == ltMuGTXAHB){xQGqwQtJnE = true;}
      if(LeUthPsSrK == uliWsVCLZs){ySWQctefoW = true;}
      else if(uliWsVCLZs == LeUthPsSrK){mOlVYbKHKF = true;}
      if(XVOQXBxWuY == ndWrXOieqz){cnVdthktwP = true;}
      else if(ndWrXOieqz == XVOQXBxWuY){JbyLnGARCp = true;}
      if(KZVtiuYQWl == CEQunwPOgS){OcgnmMYfKh = true;}
      if(GmzTDVpwXC == hbswXctVXs){oeHAFjAkHR = true;}
      if(RMbpqQfuXF == CVqjdisrLx){QQRWDTkKfF = true;}
      while(CEQunwPOgS == KZVtiuYQWl){GhYmMPsuhg = true;}
      while(hbswXctVXs == hbswXctVXs){CCVfeMbdec = true;}
      while(CVqjdisrLx == CVqjdisrLx){fjnqaVSuDo = true;}
      if(GkdlDpUmhx == true){GkdlDpUmhx = false;}
      if(FndHLLjZUu == true){FndHLLjZUu = false;}
      if(TMGywgNgRE == true){TMGywgNgRE = false;}
      if(CXCjLwxGsg == true){CXCjLwxGsg = false;}
      if(IGnanOqiYR == true){IGnanOqiYR = false;}
      if(ySWQctefoW == true){ySWQctefoW = false;}
      if(cnVdthktwP == true){cnVdthktwP = false;}
      if(OcgnmMYfKh == true){OcgnmMYfKh = false;}
      if(oeHAFjAkHR == true){oeHAFjAkHR = false;}
      if(QQRWDTkKfF == true){QQRWDTkKfF = false;}
      if(cxlJCVlidP == true){cxlJCVlidP = false;}
      if(VzVHhyfVXK == true){VzVHhyfVXK = false;}
      if(gAleyxLJkS == true){gAleyxLJkS = false;}
      if(bOzEEqryxj == true){bOzEEqryxj = false;}
      if(xQGqwQtJnE == true){xQGqwQtJnE = false;}
      if(mOlVYbKHKF == true){mOlVYbKHKF = false;}
      if(JbyLnGARCp == true){JbyLnGARCp = false;}
      if(GhYmMPsuhg == true){GhYmMPsuhg = false;}
      if(CCVfeMbdec == true){CCVfeMbdec = false;}
      if(fjnqaVSuDo == true){fjnqaVSuDo = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class FEGOPHABHL
{ 
  void VNVKWRbnMM()
  { 
      bool HsdDhjEGZL = false;
      bool nmlpwpNMab = false;
      bool JIxHrMbVRw = false;
      bool GTpNbDBFBR = false;
      bool ZxqaEVrOqR = false;
      bool ATkwPzuWLV = false;
      bool HiodFTwXOs = false;
      bool nIKJBMQWCW = false;
      bool TMdzwlitxb = false;
      bool HesfJqINVj = false;
      bool YTAydqIatD = false;
      bool iYToBuEohS = false;
      bool kBalkIOeAK = false;
      bool ECARxAMfVE = false;
      bool dIAtsiKEdN = false;
      bool lSfDzXsOMU = false;
      bool bcZjygXCrB = false;
      bool hXScncBfrC = false;
      bool yJBlXkVxSY = false;
      bool GyTAbBhPwM = false;
      string syMXydajHJ;
      string GmMZziQPDN;
      string AWkyDeZpqs;
      string oNekJWLMjY;
      string PzABDyXSTp;
      string iQhtDVMOTT;
      string DjrOTsHbPb;
      string WDedyBWjtF;
      string HHWAJXfkgm;
      string KxsQUeGlgK;
      string qwCqTflEwB;
      string zcTOLwMqEw;
      string NVtbRZKOIS;
      string tkCjOKEfgd;
      string laoenhcdEY;
      string ROgkxUCZZs;
      string VXucHNZjAB;
      string qgJZKlfOni;
      string wfJiBeDRls;
      string IeFnIOfMXZ;
      if(syMXydajHJ == qwCqTflEwB){HsdDhjEGZL = true;}
      else if(qwCqTflEwB == syMXydajHJ){YTAydqIatD = true;}
      if(GmMZziQPDN == zcTOLwMqEw){nmlpwpNMab = true;}
      else if(zcTOLwMqEw == GmMZziQPDN){iYToBuEohS = true;}
      if(AWkyDeZpqs == NVtbRZKOIS){JIxHrMbVRw = true;}
      else if(NVtbRZKOIS == AWkyDeZpqs){kBalkIOeAK = true;}
      if(oNekJWLMjY == tkCjOKEfgd){GTpNbDBFBR = true;}
      else if(tkCjOKEfgd == oNekJWLMjY){ECARxAMfVE = true;}
      if(PzABDyXSTp == laoenhcdEY){ZxqaEVrOqR = true;}
      else if(laoenhcdEY == PzABDyXSTp){dIAtsiKEdN = true;}
      if(iQhtDVMOTT == ROgkxUCZZs){ATkwPzuWLV = true;}
      else if(ROgkxUCZZs == iQhtDVMOTT){lSfDzXsOMU = true;}
      if(DjrOTsHbPb == VXucHNZjAB){HiodFTwXOs = true;}
      else if(VXucHNZjAB == DjrOTsHbPb){bcZjygXCrB = true;}
      if(WDedyBWjtF == qgJZKlfOni){nIKJBMQWCW = true;}
      if(HHWAJXfkgm == wfJiBeDRls){TMdzwlitxb = true;}
      if(KxsQUeGlgK == IeFnIOfMXZ){HesfJqINVj = true;}
      while(qgJZKlfOni == WDedyBWjtF){hXScncBfrC = true;}
      while(wfJiBeDRls == wfJiBeDRls){yJBlXkVxSY = true;}
      while(IeFnIOfMXZ == IeFnIOfMXZ){GyTAbBhPwM = true;}
      if(HsdDhjEGZL == true){HsdDhjEGZL = false;}
      if(nmlpwpNMab == true){nmlpwpNMab = false;}
      if(JIxHrMbVRw == true){JIxHrMbVRw = false;}
      if(GTpNbDBFBR == true){GTpNbDBFBR = false;}
      if(ZxqaEVrOqR == true){ZxqaEVrOqR = false;}
      if(ATkwPzuWLV == true){ATkwPzuWLV = false;}
      if(HiodFTwXOs == true){HiodFTwXOs = false;}
      if(nIKJBMQWCW == true){nIKJBMQWCW = false;}
      if(TMdzwlitxb == true){TMdzwlitxb = false;}
      if(HesfJqINVj == true){HesfJqINVj = false;}
      if(YTAydqIatD == true){YTAydqIatD = false;}
      if(iYToBuEohS == true){iYToBuEohS = false;}
      if(kBalkIOeAK == true){kBalkIOeAK = false;}
      if(ECARxAMfVE == true){ECARxAMfVE = false;}
      if(dIAtsiKEdN == true){dIAtsiKEdN = false;}
      if(lSfDzXsOMU == true){lSfDzXsOMU = false;}
      if(bcZjygXCrB == true){bcZjygXCrB = false;}
      if(hXScncBfrC == true){hXScncBfrC = false;}
      if(yJBlXkVxSY == true){yJBlXkVxSY = false;}
      if(GyTAbBhPwM == true){GyTAbBhPwM = false;}
    } 
}; 
