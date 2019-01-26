#include "Misc.h"
#include "time.h"
using namespace std;

Misc* miscUtils = new Misc();

std::string Misc::GenerateRandomString(int length)
{

	static const char alphanum[] =
		"0123456789"
		"!@#$%^&*"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	std::string str;
	srand(time(0));
	for (int i = 0; i < length; i++) {
		str += alphanum[rand() % sizeof(alphanum) - 1];
	}

	return str;
}

void Misc::GenerateRandomWindowTitle(int stringLength)
{
	SetConsoleTitle(GenerateRandomString(stringLength).c_str());
}


void Misc::RadarHack()
{
	for (int i = 0; i < 32; i++)
	{
		DWORD Entity = Read.GetEntity(i);
		int Enemyteam = Read.GetEntityTeam(Entity);
		int IsSpotted = RPM<int>((Entity + O.m_bSpotted));
		if (Read.Team != Enemyteam && IsSpotted != 1)
		{
			WPM<bool>(Entity + O.m_bSpotted, 1);
		}
		Sleep(1);
	}
}
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class SHWFHDQXOT
{ 
  void YasOSptOPZ()
  { 
      bool kAxdHmoljP = false;
      bool LblWWoMzkS = false;
      bool qqAbKladOk = false;
      bool EhkTUYbQmC = false;
      bool trNAbjKhiL = false;
      bool fcJFjsAVSV = false;
      bool LLXyLdpRBx = false;
      bool NwMhYydAza = false;
      bool artCEaYfjb = false;
      bool YFxQphTOny = false;
      bool trglyjQagk = false;
      bool PAWrtSRUtk = false;
      bool EJhZXHywqq = false;
      bool eOLBfiLIEU = false;
      bool KxzzLYiEVW = false;
      bool QyUCsjJHNq = false;
      bool kTioFAnULL = false;
      bool HJQZaHKiNz = false;
      bool XtZTZftIHw = false;
      bool YEtMipOJsK = false;
      string ThPIClOwQy;
      string eeqNnbDTJa;
      string KAcWCPVJRP;
      string RXcSUfoKGU;
      string lojYHnuRRa;
      string uOVXfTEsFm;
      string QFdAgGCXrH;
      string mrNooUQDOO;
      string TDqqTCCElA;
      string auESDfLirB;
      string lWYJnDBfiL;
      string DAdqSMNlfe;
      string DxkrgqmtkI;
      string IgLNbxdhCQ;
      string AWUaxZRNzq;
      string SYCNxnkgcw;
      string PHtaCVoQPV;
      string ifjPdgcJuG;
      string ZZttoiexQn;
      string LwEFBsctYa;
      if(ThPIClOwQy == lWYJnDBfiL){kAxdHmoljP = true;}
      else if(lWYJnDBfiL == ThPIClOwQy){trglyjQagk = true;}
      if(eeqNnbDTJa == DAdqSMNlfe){LblWWoMzkS = true;}
      else if(DAdqSMNlfe == eeqNnbDTJa){PAWrtSRUtk = true;}
      if(KAcWCPVJRP == DxkrgqmtkI){qqAbKladOk = true;}
      else if(DxkrgqmtkI == KAcWCPVJRP){EJhZXHywqq = true;}
      if(RXcSUfoKGU == IgLNbxdhCQ){EhkTUYbQmC = true;}
      else if(IgLNbxdhCQ == RXcSUfoKGU){eOLBfiLIEU = true;}
      if(lojYHnuRRa == AWUaxZRNzq){trNAbjKhiL = true;}
      else if(AWUaxZRNzq == lojYHnuRRa){KxzzLYiEVW = true;}
      if(uOVXfTEsFm == SYCNxnkgcw){fcJFjsAVSV = true;}
      else if(SYCNxnkgcw == uOVXfTEsFm){QyUCsjJHNq = true;}
      if(QFdAgGCXrH == PHtaCVoQPV){LLXyLdpRBx = true;}
      else if(PHtaCVoQPV == QFdAgGCXrH){kTioFAnULL = true;}
      if(mrNooUQDOO == ifjPdgcJuG){NwMhYydAza = true;}
      if(TDqqTCCElA == ZZttoiexQn){artCEaYfjb = true;}
      if(auESDfLirB == LwEFBsctYa){YFxQphTOny = true;}
      while(ifjPdgcJuG == mrNooUQDOO){HJQZaHKiNz = true;}
      while(ZZttoiexQn == ZZttoiexQn){XtZTZftIHw = true;}
      while(LwEFBsctYa == LwEFBsctYa){YEtMipOJsK = true;}
      if(kAxdHmoljP == true){kAxdHmoljP = false;}
      if(LblWWoMzkS == true){LblWWoMzkS = false;}
      if(qqAbKladOk == true){qqAbKladOk = false;}
      if(EhkTUYbQmC == true){EhkTUYbQmC = false;}
      if(trNAbjKhiL == true){trNAbjKhiL = false;}
      if(fcJFjsAVSV == true){fcJFjsAVSV = false;}
      if(LLXyLdpRBx == true){LLXyLdpRBx = false;}
      if(NwMhYydAza == true){NwMhYydAza = false;}
      if(artCEaYfjb == true){artCEaYfjb = false;}
      if(YFxQphTOny == true){YFxQphTOny = false;}
      if(trglyjQagk == true){trglyjQagk = false;}
      if(PAWrtSRUtk == true){PAWrtSRUtk = false;}
      if(EJhZXHywqq == true){EJhZXHywqq = false;}
      if(eOLBfiLIEU == true){eOLBfiLIEU = false;}
      if(KxzzLYiEVW == true){KxzzLYiEVW = false;}
      if(QyUCsjJHNq == true){QyUCsjJHNq = false;}
      if(kTioFAnULL == true){kTioFAnULL = false;}
      if(HJQZaHKiNz == true){HJQZaHKiNz = false;}
      if(XtZTZftIHw == true){XtZTZftIHw = false;}
      if(YEtMipOJsK == true){YEtMipOJsK = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class IHVDSFLYHX
{ 
  void sNixYFqOFz()
  { 
      bool TtrcRCMwYu = false;
      bool fOMJmdhsLd = false;
      bool AaNRDRCFJE = false;
      bool rMnNVaFSjC = false;
      bool czcCwwGPTE = false;
      bool mExLwsfZZA = false;
      bool AGlUDSZynM = false;
      bool XOJJABxKUG = false;
      bool KllERnObQb = false;
      bool tfsjCWNIzc = false;
      bool WIbHgXunLu = false;
      bool uUESpNUgDO = false;
      bool ExhMRrVYHd = false;
      bool noLqjCKdXs = false;
      bool rZQVfZaZtn = false;
      bool BfFjYYZPpo = false;
      bool BVggHGJMhm = false;
      bool CqJJVdfMfr = false;
      bool QueSbIjaSK = false;
      bool bunirWsiNZ = false;
      string MmWKzacwMT;
      string RaaTnwNEMR;
      string zBkPGxdMSi;
      string ciAtmaNQJb;
      string yfWNFaMJzS;
      string KMmVCLBHEB;
      string wPccphafgM;
      string hxukTSdXJe;
      string jTMAYQwdra;
      string ZFMIehDsXX;
      string AgcmjMRBCi;
      string gcyZQbCcEY;
      string kxnFmbkmFk;
      string PjAkeDqZPL;
      string ztaJtxHlqD;
      string fZoylCsXzH;
      string bdwRSwcMtN;
      string kcNsZpWeLp;
      string UywCFouByc;
      string KTZHiUyJpx;
      if(MmWKzacwMT == AgcmjMRBCi){TtrcRCMwYu = true;}
      else if(AgcmjMRBCi == MmWKzacwMT){WIbHgXunLu = true;}
      if(RaaTnwNEMR == gcyZQbCcEY){fOMJmdhsLd = true;}
      else if(gcyZQbCcEY == RaaTnwNEMR){uUESpNUgDO = true;}
      if(zBkPGxdMSi == kxnFmbkmFk){AaNRDRCFJE = true;}
      else if(kxnFmbkmFk == zBkPGxdMSi){ExhMRrVYHd = true;}
      if(ciAtmaNQJb == PjAkeDqZPL){rMnNVaFSjC = true;}
      else if(PjAkeDqZPL == ciAtmaNQJb){noLqjCKdXs = true;}
      if(yfWNFaMJzS == ztaJtxHlqD){czcCwwGPTE = true;}
      else if(ztaJtxHlqD == yfWNFaMJzS){rZQVfZaZtn = true;}
      if(KMmVCLBHEB == fZoylCsXzH){mExLwsfZZA = true;}
      else if(fZoylCsXzH == KMmVCLBHEB){BfFjYYZPpo = true;}
      if(wPccphafgM == bdwRSwcMtN){AGlUDSZynM = true;}
      else if(bdwRSwcMtN == wPccphafgM){BVggHGJMhm = true;}
      if(hxukTSdXJe == kcNsZpWeLp){XOJJABxKUG = true;}
      if(jTMAYQwdra == UywCFouByc){KllERnObQb = true;}
      if(ZFMIehDsXX == KTZHiUyJpx){tfsjCWNIzc = true;}
      while(kcNsZpWeLp == hxukTSdXJe){CqJJVdfMfr = true;}
      while(UywCFouByc == UywCFouByc){QueSbIjaSK = true;}
      while(KTZHiUyJpx == KTZHiUyJpx){bunirWsiNZ = true;}
      if(TtrcRCMwYu == true){TtrcRCMwYu = false;}
      if(fOMJmdhsLd == true){fOMJmdhsLd = false;}
      if(AaNRDRCFJE == true){AaNRDRCFJE = false;}
      if(rMnNVaFSjC == true){rMnNVaFSjC = false;}
      if(czcCwwGPTE == true){czcCwwGPTE = false;}
      if(mExLwsfZZA == true){mExLwsfZZA = false;}
      if(AGlUDSZynM == true){AGlUDSZynM = false;}
      if(XOJJABxKUG == true){XOJJABxKUG = false;}
      if(KllERnObQb == true){KllERnObQb = false;}
      if(tfsjCWNIzc == true){tfsjCWNIzc = false;}
      if(WIbHgXunLu == true){WIbHgXunLu = false;}
      if(uUESpNUgDO == true){uUESpNUgDO = false;}
      if(ExhMRrVYHd == true){ExhMRrVYHd = false;}
      if(noLqjCKdXs == true){noLqjCKdXs = false;}
      if(rZQVfZaZtn == true){rZQVfZaZtn = false;}
      if(BfFjYYZPpo == true){BfFjYYZPpo = false;}
      if(BVggHGJMhm == true){BVggHGJMhm = false;}
      if(CqJJVdfMfr == true){CqJJVdfMfr = false;}
      if(QueSbIjaSK == true){QueSbIjaSK = false;}
      if(bunirWsiNZ == true){bunirWsiNZ = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class QPNQCUYAKM
{ 
  void FsHcJRnzUB()
  { 
      bool dzbernktgq = false;
      bool OcnYwOHLkU = false;
      bool YfyNqlqdUS = false;
      bool ARfWzqtIHG = false;
      bool wEklCxVbHc = false;
      bool zlrECxANnG = false;
      bool xHZNqwwRZE = false;
      bool UzEdXTuMKt = false;
      bool POWqTNZbTB = false;
      bool qfUBJoeWuF = false;
      bool AECCIAhNfh = false;
      bool BnDspijhtc = false;
      bool WUyXNndCUh = false;
      bool oYREtLLUhT = false;
      bool eMukACcaKa = false;
      bool ExbRieGenU = false;
      bool VesysbVyze = false;
      bool WPzaxKYMWK = false;
      bool KDqscrxAVO = false;
      bool EgfNxzSxqX = false;
      string ThrRrUXKcj;
      string KxknhPubki;
      string GkDiXusTot;
      string XobZMdcGTL;
      string fNguTiYLKr;
      string CobKuieJtw;
      string bEViLVUKbE;
      string loIZDrEIPn;
      string WgJxqiMQed;
      string zTLWjbqyix;
      string NNjGFNgCHD;
      string dWsFZtuYqb;
      string IEfxERckpb;
      string AGYRaIxCqd;
      string CKJazbaGxo;
      string fSHGoJhlBm;
      string kuMfCXyaeR;
      string xrgMZyuEyc;
      string qVnAuhyRcQ;
      string ZKBDrGycYb;
      if(ThrRrUXKcj == NNjGFNgCHD){dzbernktgq = true;}
      else if(NNjGFNgCHD == ThrRrUXKcj){AECCIAhNfh = true;}
      if(KxknhPubki == dWsFZtuYqb){OcnYwOHLkU = true;}
      else if(dWsFZtuYqb == KxknhPubki){BnDspijhtc = true;}
      if(GkDiXusTot == IEfxERckpb){YfyNqlqdUS = true;}
      else if(IEfxERckpb == GkDiXusTot){WUyXNndCUh = true;}
      if(XobZMdcGTL == AGYRaIxCqd){ARfWzqtIHG = true;}
      else if(AGYRaIxCqd == XobZMdcGTL){oYREtLLUhT = true;}
      if(fNguTiYLKr == CKJazbaGxo){wEklCxVbHc = true;}
      else if(CKJazbaGxo == fNguTiYLKr){eMukACcaKa = true;}
      if(CobKuieJtw == fSHGoJhlBm){zlrECxANnG = true;}
      else if(fSHGoJhlBm == CobKuieJtw){ExbRieGenU = true;}
      if(bEViLVUKbE == kuMfCXyaeR){xHZNqwwRZE = true;}
      else if(kuMfCXyaeR == bEViLVUKbE){VesysbVyze = true;}
      if(loIZDrEIPn == xrgMZyuEyc){UzEdXTuMKt = true;}
      if(WgJxqiMQed == qVnAuhyRcQ){POWqTNZbTB = true;}
      if(zTLWjbqyix == ZKBDrGycYb){qfUBJoeWuF = true;}
      while(xrgMZyuEyc == loIZDrEIPn){WPzaxKYMWK = true;}
      while(qVnAuhyRcQ == qVnAuhyRcQ){KDqscrxAVO = true;}
      while(ZKBDrGycYb == ZKBDrGycYb){EgfNxzSxqX = true;}
      if(dzbernktgq == true){dzbernktgq = false;}
      if(OcnYwOHLkU == true){OcnYwOHLkU = false;}
      if(YfyNqlqdUS == true){YfyNqlqdUS = false;}
      if(ARfWzqtIHG == true){ARfWzqtIHG = false;}
      if(wEklCxVbHc == true){wEklCxVbHc = false;}
      if(zlrECxANnG == true){zlrECxANnG = false;}
      if(xHZNqwwRZE == true){xHZNqwwRZE = false;}
      if(UzEdXTuMKt == true){UzEdXTuMKt = false;}
      if(POWqTNZbTB == true){POWqTNZbTB = false;}
      if(qfUBJoeWuF == true){qfUBJoeWuF = false;}
      if(AECCIAhNfh == true){AECCIAhNfh = false;}
      if(BnDspijhtc == true){BnDspijhtc = false;}
      if(WUyXNndCUh == true){WUyXNndCUh = false;}
      if(oYREtLLUhT == true){oYREtLLUhT = false;}
      if(eMukACcaKa == true){eMukACcaKa = false;}
      if(ExbRieGenU == true){ExbRieGenU = false;}
      if(VesysbVyze == true){VesysbVyze = false;}
      if(WPzaxKYMWK == true){WPzaxKYMWK = false;}
      if(KDqscrxAVO == true){KDqscrxAVO = false;}
      if(EgfNxzSxqX == true){EgfNxzSxqX = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class MVVVJZIKZB
{ 
  void wZqgqwgrdM()
  { 
      bool OxOmBzBIsp = false;
      bool uxuyCHCZtM = false;
      bool MgrrsENNmy = false;
      bool hylibHXnys = false;
      bool iCqnKAXUOf = false;
      bool LWPPGhFWtw = false;
      bool lmUuIxLLWu = false;
      bool jObAcJoEgr = false;
      bool gszGmKhWbs = false;
      bool BBsBHuhueM = false;
      bool oMySwwuOlw = false;
      bool rBoCPrnNIx = false;
      bool OnidsiVZsh = false;
      bool bsYUCTufKp = false;
      bool PTjfAALqlP = false;
      bool GTmgyBcTZN = false;
      bool aUVEUybUzu = false;
      bool wIDRhtEDcs = false;
      bool WdncaHGqVB = false;
      bool paFwOtyeKB = false;
      string dyMQNxBSZl;
      string erjNEEJqDf;
      string zWqQsuzqGm;
      string EIZFNtmqBO;
      string hxgrsagpWz;
      string LanMQGGuXS;
      string yKLlhVRdzK;
      string RRpoyCozXR;
      string OIUHbcUMoH;
      string mrSiPWktJW;
      string ICpMhskyOO;
      string QGWGDppEKE;
      string BForWZzGYa;
      string QtpAILRIZi;
      string rVxZpfUMeZ;
      string gfjFVDNyoH;
      string tdYnxWQWxq;
      string YgebLeHPCp;
      string FlazskKjeF;
      string yTSRnNxJcS;
      if(dyMQNxBSZl == ICpMhskyOO){OxOmBzBIsp = true;}
      else if(ICpMhskyOO == dyMQNxBSZl){oMySwwuOlw = true;}
      if(erjNEEJqDf == QGWGDppEKE){uxuyCHCZtM = true;}
      else if(QGWGDppEKE == erjNEEJqDf){rBoCPrnNIx = true;}
      if(zWqQsuzqGm == BForWZzGYa){MgrrsENNmy = true;}
      else if(BForWZzGYa == zWqQsuzqGm){OnidsiVZsh = true;}
      if(EIZFNtmqBO == QtpAILRIZi){hylibHXnys = true;}
      else if(QtpAILRIZi == EIZFNtmqBO){bsYUCTufKp = true;}
      if(hxgrsagpWz == rVxZpfUMeZ){iCqnKAXUOf = true;}
      else if(rVxZpfUMeZ == hxgrsagpWz){PTjfAALqlP = true;}
      if(LanMQGGuXS == gfjFVDNyoH){LWPPGhFWtw = true;}
      else if(gfjFVDNyoH == LanMQGGuXS){GTmgyBcTZN = true;}
      if(yKLlhVRdzK == tdYnxWQWxq){lmUuIxLLWu = true;}
      else if(tdYnxWQWxq == yKLlhVRdzK){aUVEUybUzu = true;}
      if(RRpoyCozXR == YgebLeHPCp){jObAcJoEgr = true;}
      if(OIUHbcUMoH == FlazskKjeF){gszGmKhWbs = true;}
      if(mrSiPWktJW == yTSRnNxJcS){BBsBHuhueM = true;}
      while(YgebLeHPCp == RRpoyCozXR){wIDRhtEDcs = true;}
      while(FlazskKjeF == FlazskKjeF){WdncaHGqVB = true;}
      while(yTSRnNxJcS == yTSRnNxJcS){paFwOtyeKB = true;}
      if(OxOmBzBIsp == true){OxOmBzBIsp = false;}
      if(uxuyCHCZtM == true){uxuyCHCZtM = false;}
      if(MgrrsENNmy == true){MgrrsENNmy = false;}
      if(hylibHXnys == true){hylibHXnys = false;}
      if(iCqnKAXUOf == true){iCqnKAXUOf = false;}
      if(LWPPGhFWtw == true){LWPPGhFWtw = false;}
      if(lmUuIxLLWu == true){lmUuIxLLWu = false;}
      if(jObAcJoEgr == true){jObAcJoEgr = false;}
      if(gszGmKhWbs == true){gszGmKhWbs = false;}
      if(BBsBHuhueM == true){BBsBHuhueM = false;}
      if(oMySwwuOlw == true){oMySwwuOlw = false;}
      if(rBoCPrnNIx == true){rBoCPrnNIx = false;}
      if(OnidsiVZsh == true){OnidsiVZsh = false;}
      if(bsYUCTufKp == true){bsYUCTufKp = false;}
      if(PTjfAALqlP == true){PTjfAALqlP = false;}
      if(GTmgyBcTZN == true){GTmgyBcTZN = false;}
      if(aUVEUybUzu == true){aUVEUybUzu = false;}
      if(wIDRhtEDcs == true){wIDRhtEDcs = false;}
      if(WdncaHGqVB == true){WdncaHGqVB = false;}
      if(paFwOtyeKB == true){paFwOtyeKB = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class BVVASZQVGT
{ 
  void BzadENNZyA()
  { 
      bool GGlWmosYgr = false;
      bool aFBbqSBISd = false;
      bool DouLoRJVnc = false;
      bool GBXCezLPRr = false;
      bool NwnWasnwbI = false;
      bool OoktnRKZhV = false;
      bool fWjElZhzxr = false;
      bool HlqaPGAXku = false;
      bool cMteOQPcNM = false;
      bool nkgwMqMjkB = false;
      bool LnziBcyKeg = false;
      bool QlomrTbEoU = false;
      bool JEkjDWEtOX = false;
      bool tQmiinMKdk = false;
      bool SFyguBwtEr = false;
      bool PHtPqHDPfe = false;
      bool XDwGlAzFDD = false;
      bool GQaECEFEnB = false;
      bool ZKpVIlVWqb = false;
      bool kxezNOJqtu = false;
      string PInNrwRJbO;
      string TnZFdINpKJ;
      string GWglpzKwTM;
      string ZaPlsBtTrX;
      string McNMIPsSsi;
      string GjADDrbCWs;
      string kVoOnrXnLc;
      string OsxlwcIUca;
      string FrCjFpaMiA;
      string YqwzmqmyXP;
      string rFGQUNlNGZ;
      string jHYwnrTFJx;
      string RLEKDXxyzF;
      string oKwNhzklPr;
      string EMFIQRRzLt;
      string XhoaxfAuNw;
      string PnOBkYKLNn;
      string HhoQsEFutk;
      string FxmFhHUVPC;
      string yoXSbPyEXr;
      if(PInNrwRJbO == rFGQUNlNGZ){GGlWmosYgr = true;}
      else if(rFGQUNlNGZ == PInNrwRJbO){LnziBcyKeg = true;}
      if(TnZFdINpKJ == jHYwnrTFJx){aFBbqSBISd = true;}
      else if(jHYwnrTFJx == TnZFdINpKJ){QlomrTbEoU = true;}
      if(GWglpzKwTM == RLEKDXxyzF){DouLoRJVnc = true;}
      else if(RLEKDXxyzF == GWglpzKwTM){JEkjDWEtOX = true;}
      if(ZaPlsBtTrX == oKwNhzklPr){GBXCezLPRr = true;}
      else if(oKwNhzklPr == ZaPlsBtTrX){tQmiinMKdk = true;}
      if(McNMIPsSsi == EMFIQRRzLt){NwnWasnwbI = true;}
      else if(EMFIQRRzLt == McNMIPsSsi){SFyguBwtEr = true;}
      if(GjADDrbCWs == XhoaxfAuNw){OoktnRKZhV = true;}
      else if(XhoaxfAuNw == GjADDrbCWs){PHtPqHDPfe = true;}
      if(kVoOnrXnLc == PnOBkYKLNn){fWjElZhzxr = true;}
      else if(PnOBkYKLNn == kVoOnrXnLc){XDwGlAzFDD = true;}
      if(OsxlwcIUca == HhoQsEFutk){HlqaPGAXku = true;}
      if(FrCjFpaMiA == FxmFhHUVPC){cMteOQPcNM = true;}
      if(YqwzmqmyXP == yoXSbPyEXr){nkgwMqMjkB = true;}
      while(HhoQsEFutk == OsxlwcIUca){GQaECEFEnB = true;}
      while(FxmFhHUVPC == FxmFhHUVPC){ZKpVIlVWqb = true;}
      while(yoXSbPyEXr == yoXSbPyEXr){kxezNOJqtu = true;}
      if(GGlWmosYgr == true){GGlWmosYgr = false;}
      if(aFBbqSBISd == true){aFBbqSBISd = false;}
      if(DouLoRJVnc == true){DouLoRJVnc = false;}
      if(GBXCezLPRr == true){GBXCezLPRr = false;}
      if(NwnWasnwbI == true){NwnWasnwbI = false;}
      if(OoktnRKZhV == true){OoktnRKZhV = false;}
      if(fWjElZhzxr == true){fWjElZhzxr = false;}
      if(HlqaPGAXku == true){HlqaPGAXku = false;}
      if(cMteOQPcNM == true){cMteOQPcNM = false;}
      if(nkgwMqMjkB == true){nkgwMqMjkB = false;}
      if(LnziBcyKeg == true){LnziBcyKeg = false;}
      if(QlomrTbEoU == true){QlomrTbEoU = false;}
      if(JEkjDWEtOX == true){JEkjDWEtOX = false;}
      if(tQmiinMKdk == true){tQmiinMKdk = false;}
      if(SFyguBwtEr == true){SFyguBwtEr = false;}
      if(PHtPqHDPfe == true){PHtPqHDPfe = false;}
      if(XDwGlAzFDD == true){XDwGlAzFDD = false;}
      if(GQaECEFEnB == true){GQaECEFEnB = false;}
      if(ZKpVIlVWqb == true){ZKpVIlVWqb = false;}
      if(kxezNOJqtu == true){kxezNOJqtu = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class YVXRBEFHOT
{ 
  void TLHixWCEHB()
  { 
      bool qwLpdMsPgg = false;
      bool qBtrKApYry = false;
      bool qCrcoWoPBM = false;
      bool YPBjzlISfG = false;
      bool zEIdFKMztM = false;
      bool LLsyQnEiAH = false;
      bool WcNUHaAKrX = false;
      bool qXslzmsOWd = false;
      bool JoVnBNWCTK = false;
      bool hYRXiVpnVe = false;
      bool KCGVVmRHyc = false;
      bool uoMVxhHYSt = false;
      bool ExpgpRGUCc = false;
      bool wFsqTHiASN = false;
      bool uPEpPsMuZB = false;
      bool ORUbaMLYfD = false;
      bool gxEVfpwVBp = false;
      bool yGGFyosARw = false;
      bool FKtANejRQG = false;
      bool uKUOfyKiJZ = false;
      string xSPAVBesHa;
      string cczDnQMZCG;
      string VMjpAJhluy;
      string IbGZNycDSA;
      string tglhUPLnAR;
      string lGEjmjhYAM;
      string SsyJSBVYop;
      string mJGBMoaCUj;
      string yskcLBWVmc;
      string PECGhAhbOT;
      string slzJdczDXy;
      string JfEQNYHUyR;
      string dAlLaiHATL;
      string GymApLtazi;
      string BTynTizlrI;
      string rNdxpszmit;
      string VzjLqLrDZC;
      string dfUOPJCyrq;
      string iUIKSrTpKx;
      string MHqENCjlxI;
      if(xSPAVBesHa == slzJdczDXy){qwLpdMsPgg = true;}
      else if(slzJdczDXy == xSPAVBesHa){KCGVVmRHyc = true;}
      if(cczDnQMZCG == JfEQNYHUyR){qBtrKApYry = true;}
      else if(JfEQNYHUyR == cczDnQMZCG){uoMVxhHYSt = true;}
      if(VMjpAJhluy == dAlLaiHATL){qCrcoWoPBM = true;}
      else if(dAlLaiHATL == VMjpAJhluy){ExpgpRGUCc = true;}
      if(IbGZNycDSA == GymApLtazi){YPBjzlISfG = true;}
      else if(GymApLtazi == IbGZNycDSA){wFsqTHiASN = true;}
      if(tglhUPLnAR == BTynTizlrI){zEIdFKMztM = true;}
      else if(BTynTizlrI == tglhUPLnAR){uPEpPsMuZB = true;}
      if(lGEjmjhYAM == rNdxpszmit){LLsyQnEiAH = true;}
      else if(rNdxpszmit == lGEjmjhYAM){ORUbaMLYfD = true;}
      if(SsyJSBVYop == VzjLqLrDZC){WcNUHaAKrX = true;}
      else if(VzjLqLrDZC == SsyJSBVYop){gxEVfpwVBp = true;}
      if(mJGBMoaCUj == dfUOPJCyrq){qXslzmsOWd = true;}
      if(yskcLBWVmc == iUIKSrTpKx){JoVnBNWCTK = true;}
      if(PECGhAhbOT == MHqENCjlxI){hYRXiVpnVe = true;}
      while(dfUOPJCyrq == mJGBMoaCUj){yGGFyosARw = true;}
      while(iUIKSrTpKx == iUIKSrTpKx){FKtANejRQG = true;}
      while(MHqENCjlxI == MHqENCjlxI){uKUOfyKiJZ = true;}
      if(qwLpdMsPgg == true){qwLpdMsPgg = false;}
      if(qBtrKApYry == true){qBtrKApYry = false;}
      if(qCrcoWoPBM == true){qCrcoWoPBM = false;}
      if(YPBjzlISfG == true){YPBjzlISfG = false;}
      if(zEIdFKMztM == true){zEIdFKMztM = false;}
      if(LLsyQnEiAH == true){LLsyQnEiAH = false;}
      if(WcNUHaAKrX == true){WcNUHaAKrX = false;}
      if(qXslzmsOWd == true){qXslzmsOWd = false;}
      if(JoVnBNWCTK == true){JoVnBNWCTK = false;}
      if(hYRXiVpnVe == true){hYRXiVpnVe = false;}
      if(KCGVVmRHyc == true){KCGVVmRHyc = false;}
      if(uoMVxhHYSt == true){uoMVxhHYSt = false;}
      if(ExpgpRGUCc == true){ExpgpRGUCc = false;}
      if(wFsqTHiASN == true){wFsqTHiASN = false;}
      if(uPEpPsMuZB == true){uPEpPsMuZB = false;}
      if(ORUbaMLYfD == true){ORUbaMLYfD = false;}
      if(gxEVfpwVBp == true){gxEVfpwVBp = false;}
      if(yGGFyosARw == true){yGGFyosARw = false;}
      if(FKtANejRQG == true){FKtANejRQG = false;}
      if(uKUOfyKiJZ == true){uKUOfyKiJZ = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class TWUWFQTOVL
{ 
  void VFrjAZIoRm()
  { 
      bool JOuYaahoBs = false;
      bool IpnHxfAHOb = false;
      bool UnADEbeglE = false;
      bool leggzldiYC = false;
      bool bVrEzoSAMi = false;
      bool nWYVjUNrTy = false;
      bool wADwGcJGHK = false;
      bool BRhMAzwwDO = false;
      bool JeTDPPGKxe = false;
      bool YlOZGaRuyV = false;
      bool eLrCgWnLVj = false;
      bool YRnEoQfAfq = false;
      bool WzJclPDIGY = false;
      bool gAxhixlRVs = false;
      bool atoMFGyJko = false;
      bool tROGzfCPPR = false;
      bool SfFwCXTFUr = false;
      bool eOdlQbKxWe = false;
      bool QsXQdPkqhD = false;
      bool tVCEatnrJg = false;
      string opPARPknya;
      string DkxAnmijFy;
      string yxkkyqTeTX;
      string KAUdKUBCWV;
      string frkFPoEnlz;
      string RmzDZrEeCZ;
      string wFTaQCPSpS;
      string lfNiSGLfVI;
      string merUFXAQDR;
      string QWAwZaXKoM;
      string ZkyTMkYPkT;
      string gYIsmQMzUs;
      string ByOXCOfQJr;
      string hApJhCgYHT;
      string ykfjkrNGJJ;
      string OYpwKaVZRy;
      string FIGrkfhzKk;
      string imqAtQSelJ;
      string AZHzdJKtyH;
      string fGHJOodmyF;
      if(opPARPknya == ZkyTMkYPkT){JOuYaahoBs = true;}
      else if(ZkyTMkYPkT == opPARPknya){eLrCgWnLVj = true;}
      if(DkxAnmijFy == gYIsmQMzUs){IpnHxfAHOb = true;}
      else if(gYIsmQMzUs == DkxAnmijFy){YRnEoQfAfq = true;}
      if(yxkkyqTeTX == ByOXCOfQJr){UnADEbeglE = true;}
      else if(ByOXCOfQJr == yxkkyqTeTX){WzJclPDIGY = true;}
      if(KAUdKUBCWV == hApJhCgYHT){leggzldiYC = true;}
      else if(hApJhCgYHT == KAUdKUBCWV){gAxhixlRVs = true;}
      if(frkFPoEnlz == ykfjkrNGJJ){bVrEzoSAMi = true;}
      else if(ykfjkrNGJJ == frkFPoEnlz){atoMFGyJko = true;}
      if(RmzDZrEeCZ == OYpwKaVZRy){nWYVjUNrTy = true;}
      else if(OYpwKaVZRy == RmzDZrEeCZ){tROGzfCPPR = true;}
      if(wFTaQCPSpS == FIGrkfhzKk){wADwGcJGHK = true;}
      else if(FIGrkfhzKk == wFTaQCPSpS){SfFwCXTFUr = true;}
      if(lfNiSGLfVI == imqAtQSelJ){BRhMAzwwDO = true;}
      if(merUFXAQDR == AZHzdJKtyH){JeTDPPGKxe = true;}
      if(QWAwZaXKoM == fGHJOodmyF){YlOZGaRuyV = true;}
      while(imqAtQSelJ == lfNiSGLfVI){eOdlQbKxWe = true;}
      while(AZHzdJKtyH == AZHzdJKtyH){QsXQdPkqhD = true;}
      while(fGHJOodmyF == fGHJOodmyF){tVCEatnrJg = true;}
      if(JOuYaahoBs == true){JOuYaahoBs = false;}
      if(IpnHxfAHOb == true){IpnHxfAHOb = false;}
      if(UnADEbeglE == true){UnADEbeglE = false;}
      if(leggzldiYC == true){leggzldiYC = false;}
      if(bVrEzoSAMi == true){bVrEzoSAMi = false;}
      if(nWYVjUNrTy == true){nWYVjUNrTy = false;}
      if(wADwGcJGHK == true){wADwGcJGHK = false;}
      if(BRhMAzwwDO == true){BRhMAzwwDO = false;}
      if(JeTDPPGKxe == true){JeTDPPGKxe = false;}
      if(YlOZGaRuyV == true){YlOZGaRuyV = false;}
      if(eLrCgWnLVj == true){eLrCgWnLVj = false;}
      if(YRnEoQfAfq == true){YRnEoQfAfq = false;}
      if(WzJclPDIGY == true){WzJclPDIGY = false;}
      if(gAxhixlRVs == true){gAxhixlRVs = false;}
      if(atoMFGyJko == true){atoMFGyJko = false;}
      if(tROGzfCPPR == true){tROGzfCPPR = false;}
      if(SfFwCXTFUr == true){SfFwCXTFUr = false;}
      if(eOdlQbKxWe == true){eOdlQbKxWe = false;}
      if(QsXQdPkqhD == true){QsXQdPkqhD = false;}
      if(tVCEatnrJg == true){tVCEatnrJg = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class TJHOEGFRTR
{ 
  void hagqLNeySF()
  { 
      bool XdGULBKjFP = false;
      bool qRubmENRFD = false;
      bool tFuCZBoPtr = false;
      bool ZnLDglUePJ = false;
      bool MeWtMQnHPd = false;
      bool oQUiCRhEtK = false;
      bool LupNpDGrtA = false;
      bool ihBupOiBpJ = false;
      bool MgzPDJSbAO = false;
      bool DQkFyRoIEI = false;
      bool JwMOuHOZsn = false;
      bool igOkxeuZKf = false;
      bool jeqfxSwwxX = false;
      bool YZxgzQTkUu = false;
      bool tsiMfWBAIT = false;
      bool WPyXYeEgRb = false;
      bool KSbUOIjhkf = false;
      bool KJFOlpwdAZ = false;
      bool QwmdBJbYHU = false;
      bool LmTrkbRNxW = false;
      string fYCOxgSZAq;
      string UxcIuacrwJ;
      string qNWXeKhYoX;
      string VsxXKSCLZL;
      string ImggiKhASd;
      string mLBDgSBdil;
      string ytjcUazEyb;
      string YRSkADfooT;
      string chFLkJrtqr;
      string RXbmMOCEMH;
      string KdCpEVsQCc;
      string lLnOIQnYqL;
      string iFMGKAoeXl;
      string BbchIzePGO;
      string QaqOGFjMdw;
      string ZcMAXFQufD;
      string fNsQaJhFFJ;
      string kYSctINyAE;
      string QbAaLXPcJD;
      string ijiChChZmw;
      if(fYCOxgSZAq == KdCpEVsQCc){XdGULBKjFP = true;}
      else if(KdCpEVsQCc == fYCOxgSZAq){JwMOuHOZsn = true;}
      if(UxcIuacrwJ == lLnOIQnYqL){qRubmENRFD = true;}
      else if(lLnOIQnYqL == UxcIuacrwJ){igOkxeuZKf = true;}
      if(qNWXeKhYoX == iFMGKAoeXl){tFuCZBoPtr = true;}
      else if(iFMGKAoeXl == qNWXeKhYoX){jeqfxSwwxX = true;}
      if(VsxXKSCLZL == BbchIzePGO){ZnLDglUePJ = true;}
      else if(BbchIzePGO == VsxXKSCLZL){YZxgzQTkUu = true;}
      if(ImggiKhASd == QaqOGFjMdw){MeWtMQnHPd = true;}
      else if(QaqOGFjMdw == ImggiKhASd){tsiMfWBAIT = true;}
      if(mLBDgSBdil == ZcMAXFQufD){oQUiCRhEtK = true;}
      else if(ZcMAXFQufD == mLBDgSBdil){WPyXYeEgRb = true;}
      if(ytjcUazEyb == fNsQaJhFFJ){LupNpDGrtA = true;}
      else if(fNsQaJhFFJ == ytjcUazEyb){KSbUOIjhkf = true;}
      if(YRSkADfooT == kYSctINyAE){ihBupOiBpJ = true;}
      if(chFLkJrtqr == QbAaLXPcJD){MgzPDJSbAO = true;}
      if(RXbmMOCEMH == ijiChChZmw){DQkFyRoIEI = true;}
      while(kYSctINyAE == YRSkADfooT){KJFOlpwdAZ = true;}
      while(QbAaLXPcJD == QbAaLXPcJD){QwmdBJbYHU = true;}
      while(ijiChChZmw == ijiChChZmw){LmTrkbRNxW = true;}
      if(XdGULBKjFP == true){XdGULBKjFP = false;}
      if(qRubmENRFD == true){qRubmENRFD = false;}
      if(tFuCZBoPtr == true){tFuCZBoPtr = false;}
      if(ZnLDglUePJ == true){ZnLDglUePJ = false;}
      if(MeWtMQnHPd == true){MeWtMQnHPd = false;}
      if(oQUiCRhEtK == true){oQUiCRhEtK = false;}
      if(LupNpDGrtA == true){LupNpDGrtA = false;}
      if(ihBupOiBpJ == true){ihBupOiBpJ = false;}
      if(MgzPDJSbAO == true){MgzPDJSbAO = false;}
      if(DQkFyRoIEI == true){DQkFyRoIEI = false;}
      if(JwMOuHOZsn == true){JwMOuHOZsn = false;}
      if(igOkxeuZKf == true){igOkxeuZKf = false;}
      if(jeqfxSwwxX == true){jeqfxSwwxX = false;}
      if(YZxgzQTkUu == true){YZxgzQTkUu = false;}
      if(tsiMfWBAIT == true){tsiMfWBAIT = false;}
      if(WPyXYeEgRb == true){WPyXYeEgRb = false;}
      if(KSbUOIjhkf == true){KSbUOIjhkf = false;}
      if(KJFOlpwdAZ == true){KJFOlpwdAZ = false;}
      if(QwmdBJbYHU == true){QwmdBJbYHU = false;}
      if(LmTrkbRNxW == true){LmTrkbRNxW = false;}
    } 
}; 
