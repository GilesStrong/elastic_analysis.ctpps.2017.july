#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_July/version2/";
	input_files = {
		prefix + "run_298594.0_re_reco.root",
		prefix + "run_298594.10_re_reco.root",
		prefix + "run_298594.11_re_reco.root",
		prefix + "run_298594.12_re_reco.root",
		prefix + "run_298594.13_re_reco.root",
		prefix + "run_298594.1_re_reco.root",
		prefix + "run_298594.2_re_reco.root",
		prefix + "run_298594.3_re_reco.root",
		prefix + "run_298594.4_re_reco.root",
		prefix + "run_298594.5_re_reco.root",
		prefix + "run_298594.6_re_reco.root",
		prefix + "run_298594.7_re_reco.root",
		prefix + "run_298594.8_re_reco.root",
		prefix + "run_298594.9_re_reco.root",
		prefix + "run_298596.0_re_reco.root",
		prefix + "run_298596.1_re_reco.root",
		prefix + "run_298596.2_re_reco.root",
		prefix + "run_298596.3_re_reco.root",
		prefix + "run_298596.4_re_reco.root",
		prefix + "run_298596.5_re_reco.root",
		prefix + "run_298596.6_re_reco.root",
	};
}
