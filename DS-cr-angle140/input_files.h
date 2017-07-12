#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	std::string prefix = "root://xrootd-cms.infn.it///store/data/Run2017B/";
	input_files = {
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/02A251B3-AD65-E711-B189-02163E011E18.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/20D0D935-B165-E711-9ED2-02163E01186A.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/2AA6694A-AA65-E711-BCA7-02163E01A6C3.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/2AAEF3DD-A765-E711-9023-02163E01A1D6.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/5206B20F-AB65-E711-9AF1-02163E019DB4.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/70B3459B-A765-E711-BEC8-02163E01A6FF.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/8447BA68-A965-E711-A962-02163E01A42A.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/944EA82F-A665-E711-9BA4-02163E01A3BC.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/B413893F-A865-E711-BF28-02163E013865.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/B4BCE1CE-A865-E711-AEA4-02163E01A54A.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/B667EA31-A965-E711-ADCB-02163E013623.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/D8C23FFD-A665-E711-92E0-02163E01A23D.root",
		prefix + "ZeroBias1/AOD/PromptReco-v2/000/298/593/00000/E4E7B169-BA65-E711-8463-02163E01A6B4.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/26871B3B-A865-E711-918F-02163E01A1D8.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/3A48FE30-AA65-E711-87E2-02163E01A5A0.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/643DB9D2-AB65-E711-A9CD-02163E01A6E7.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/6A36B1AC-AD65-E711-8A51-02163E0139BD.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/8ABEC0E4-A965-E711-863B-02163E012204.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/8EC2EAC3-A765-E711-87DB-02163E019DF0.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/AA1C4A4E-A765-E711-A73A-02163E019BB8.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/BE695D5F-A965-E711-9391-02163E019BCC.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/CE461433-AA65-E711-8B3A-02163E019CDD.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/D40E0B96-AA65-E711-9E0C-02163E01A69D.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/EAEDCA25-B165-E711-9F0E-02163E01A618.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/F05D6112-A965-E711-BBA8-02163E01A67F.root",
		prefix + "ZeroBias2/AOD/PromptReco-v2/000/298/593/00000/F218D7EB-A665-E711-A749-02163E019CD8.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/0A5AB266-A765-E711-A7E3-02163E01A4AC.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/0C3993EE-A865-E711-A341-02163E01A287.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/0C780537-AA65-E711-97F0-02163E019DFA.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/1C39BFCE-AF65-E711-9DAC-02163E01A426.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/1EED2CF0-A665-E711-8C2E-02163E01A583.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/36743C31-A865-E711-8BF2-02163E019D8E.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/387657CC-A765-E711-AD75-02163E013878.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/50D79EF4-AA65-E711-B9F6-02163E0133FE.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/60EB2795-A865-E711-8968-02163E013903.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/660AD76A-A965-E711-9358-02163E01A4C1.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/84036486-AD65-E711-872B-02163E0135B4.root",
		prefix + "ZeroBias3/AOD/PromptReco-v2/000/298/593/00000/A0B75CCE-AB65-E711-9091-02163E01A766.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/142BA399-A865-E711-9B07-02163E011F01.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/28042D93-A665-E711-B7C2-02163E01A320.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/340AAEF4-A765-E711-BD10-02163E019CA1.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/4A48DB97-AB65-E711-B5F3-02163E0125DF.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/54754891-A965-E711-9DD5-02163E01A642.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/683355FB-A665-E711-931D-02163E01437F.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/A8C0A513-BC65-E711-B030-02163E013810.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/AC1D7D68-A765-E711-927D-02163E01A749.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/B0EE86AB-AD65-E711-91A4-02163E01A463.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/D0E654B6-A865-E711-AFC4-02163E019B1E.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/E0D9993F-AA65-E711-BDEA-02163E01A69B.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/E2978242-A965-E711-8064-02163E013945.root",
		prefix + "ZeroBias4/AOD/PromptReco-v2/000/298/593/00000/EC809405-AA65-E711-A09E-02163E0146D9.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/16CB85DE-A765-E711-96B7-02163E019B92.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/1E884E2E-B165-E711-802C-02163E014219.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/24CFF197-A765-E711-B167-02163E013818.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/3EBAE5F2-A865-E711-874B-02163E0124FE.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/48C219DD-AA65-E711-8C2F-02163E0140F7.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/4C3F327C-A965-E711-AF08-02163E019CEC.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/72834F40-A965-E711-8A77-02163E012505.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/743A0FC3-A865-E711-85A9-02163E019E30.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/7E8743E1-A965-E711-B01A-02163E01A21E.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/86B17020-AC65-E711-84F7-02163E01A59B.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/8EDCE2F8-BA65-E711-9C9E-02163E013703.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/CC2B3AF5-A765-E711-BF6A-02163E01A5B8.root",
		prefix + "ZeroBias5/AOD/PromptReco-v2/000/298/593/00000/E8B58352-AB65-E711-A1E7-02163E01243E.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/34B9AE99-A865-E711-9FE5-02163E019C88.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/3EF1425B-B165-E711-B831-02163E01A24F.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/4023D1B2-AB65-E711-B53B-02163E01A3F2.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/42CF9A6B-A865-E711-978B-02163E0128BD.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/4A7AE348-A765-E711-A760-02163E0143A7.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/6A05E756-A965-E711-9F08-02163E01A760.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/8CC365E3-AE65-E711-9F16-02163E019C43.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/A0E9A7D2-A765-E711-8AAE-02163E019D49.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/BCE2B8AA-A965-E711-A121-02163E0145AA.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/D42A38F7-AA65-E711-9294-02163E012614.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/DC9F17CF-A865-E711-80BC-02163E0146F8.root",
		prefix + "ZeroBias6/AOD/PromptReco-v2/000/298/593/00000/F0CB08D7-A665-E711-9FE5-02163E011F95.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/16D28BE6-AB65-E711-A1F6-02163E01A5BB.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/360B08AB-A865-E711-89B6-02163E019C23.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/38BB1C24-B465-E711-AEEF-02163E01A689.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/42B08862-AB65-E711-9883-02163E0135DE.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/6CDDC016-A965-E711-A59D-02163E011A99.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/7C002A59-A765-E711-B70A-02163E01A420.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/985765C3-A765-E711-92DD-02163E01A46E.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/B875FE4D-AA65-E711-AF8D-02163E01A35D.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/BEFB04DE-AF65-E711-9701-02163E0141D9.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/CE9F6D64-A865-E711-BD8F-02163E0145EE.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/DC1C8E97-A665-E711-9110-02163E019BC1.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/DCF3C1F5-A665-E711-BFA9-02163E01A297.root",
		prefix + "ZeroBias7/AOD/PromptReco-v2/000/298/593/00000/F495586B-A965-E711-899F-02163E019B90.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/04BC4BFE-A665-E711-AA86-02163E01A4FB.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/18BE808B-B065-E711-9F6A-02163E019DD2.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/1AEE2B99-A765-E711-BD37-02163E0139BC.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/26805000-AB65-E711-990F-02163E01361F.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/2A5B86D0-A765-E711-B50A-02163E019B22.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/42C73D02-A965-E711-AE2F-02163E01A39D.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/6899C969-A965-E711-8833-02163E019BE5.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/92F34649-AA65-E711-9B48-02163E012A3E.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/A6F58E6C-AB65-E711-9200-02163E01A51A.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/D2AE113A-A865-E711-8F75-02163E01A7A2.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/D6670E1B-B365-E711-9751-02163E013967.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/D81A2E88-A865-E711-B7E8-02163E019D03.root",
		prefix + "ZeroBias8/AOD/PromptReco-v2/000/298/593/00000/DAA2DED3-A965-E711-927B-02163E01A2E3.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/125DB7BA-B665-E711-9A51-02163E01A6AD.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/28E3F903-AD65-E711-8F3F-02163E019DBC.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/36FC1F9E-A765-E711-B613-02163E01A30D.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/38977298-A965-E711-8657-02163E01A24D.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/445D9A13-A865-E711-BCFC-02163E01A351.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/6E75F98A-A865-E711-AFE6-02163E014426.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/760BEE85-A765-E711-A27E-02163E01A1B7.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/C444B4B6-A665-E711-96F9-02163E019B94.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/C8F9AD1C-A765-E711-93DD-02163E01A2C2.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/D259BFDB-A865-E711-A928-02163E01A2AC.root",
		prefix + "ZeroBias9/AOD/PromptReco-v2/000/298/593/00000/E893A66B-AA65-E711-A231-02163E012750.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/04E7FC69-AA65-E711-BC2E-02163E019CA2.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/0674B307-A965-E711-B80C-02163E012307.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/54757E3E-A865-E711-B492-02163E01A2B3.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/701A3DC4-A765-E711-8DE0-02163E01A727.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/7E7EB23A-A965-E711-804F-02163E01A792.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/865C45E6-A765-E711-B201-02163E01A3D8.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/8E18D49E-AB65-E711-8E4B-02163E011C63.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/9EDBD153-A865-E711-BBDD-02163E01A311.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/A210DF8C-A665-E711-9DE7-02163E01A414.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/BA2BA4B9-A965-E711-B49C-02163E013662.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/D6F4DDF3-AF65-E711-B69B-02163E01A57E.root",
		prefix + "ZeroBias10/AOD/PromptReco-v2/000/298/593/00000/E6A925BD-BB65-E711-93B0-02163E019B4E.root",
	};
}
