#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_July/version4-";
	std::string prefix_pilot = prefix + "pilot/";
	std::string prefix_rest = prefix + "rest/";
	input_files = {
		prefix_pilot + "run_298597.0_re_reco.root",
		prefix_pilot + "run_298597.10_re_reco.root",
		prefix_pilot + "run_298597.11_re_reco.root",
		prefix_pilot + "run_298597.12_re_reco.root",
		prefix_pilot + "run_298597.13_re_reco.root",
		prefix_pilot + "run_298597.14_re_reco.root",
		prefix_pilot + "run_298597.15_re_reco.root",
		prefix_pilot + "run_298597.17_re_reco.root",
		prefix_pilot + "run_298597.18_re_reco.root",
		prefix_pilot + "run_298597.19_re_reco.root",
		prefix_pilot + "run_298597.1_re_reco.root",
		prefix_pilot + "run_298597.20_re_reco.root",
		prefix_pilot + "run_298597.2_re_reco.root",
		prefix_pilot + "run_298597.3_re_reco.root",
		prefix_pilot + "run_298597.4_re_reco.root",
		prefix_pilot + "run_298597.5_re_reco.root",
		prefix_pilot + "run_298597.6_re_reco.root",
		prefix_pilot + "run_298597.7_re_reco.root",
		prefix_pilot + "run_298597.8_re_reco.root",
		prefix_pilot + "run_298597.9_re_reco.root",
		prefix_rest + "run_298597.0_re_reco.root",
		prefix_rest + "run_298597.100_re_reco.root",
		prefix_rest + "run_298597.101_re_reco.root",
		prefix_rest + "run_298597.102_re_reco.root",
		prefix_rest + "run_298597.103_re_reco.root",
		prefix_rest + "run_298597.104_re_reco.root",
		prefix_rest + "run_298597.105_re_reco.root",
		prefix_rest + "run_298597.106_re_reco.root",
		prefix_rest + "run_298597.107_re_reco.root",
		prefix_rest + "run_298597.108_re_reco.root",
		prefix_rest + "run_298597.10_re_reco.root",
		prefix_rest + "run_298597.110_re_reco.root",
		prefix_rest + "run_298597.111_re_reco.root",
		prefix_rest + "run_298597.112_re_reco.root",
		prefix_rest + "run_298597.113_re_reco.root",
		prefix_rest + "run_298597.114_re_reco.root",
		prefix_rest + "run_298597.115_re_reco.root",
		prefix_rest + "run_298597.116_re_reco.root",
		prefix_rest + "run_298597.117_re_reco.root",
		prefix_rest + "run_298597.118_re_reco.root",
		prefix_rest + "run_298597.119_re_reco.root",
		prefix_rest + "run_298597.11_re_reco.root",
		prefix_rest + "run_298597.120_re_reco.root",
		prefix_rest + "run_298597.121_re_reco.root",
		prefix_rest + "run_298597.122_re_reco.root",
		prefix_rest + "run_298597.123_re_reco.root",
		prefix_rest + "run_298597.124_re_reco.root",
		prefix_rest + "run_298597.125_re_reco.root",
		prefix_rest + "run_298597.126_re_reco.root",
		prefix_rest + "run_298597.127_re_reco.root",
		prefix_rest + "run_298597.128_re_reco.root",
		prefix_rest + "run_298597.129_re_reco.root",
		prefix_rest + "run_298597.12_re_reco.root",
		prefix_rest + "run_298597.130_re_reco.root",
		prefix_rest + "run_298597.131_re_reco.root",
		prefix_rest + "run_298597.132_re_reco.root",
		prefix_rest + "run_298597.133_re_reco.root",
		prefix_rest + "run_298597.134_re_reco.root",
		prefix_rest + "run_298597.135_re_reco.root",
		prefix_rest + "run_298597.136_re_reco.root",
		prefix_rest + "run_298597.137_re_reco.root",
		prefix_rest + "run_298597.138_re_reco.root",
		prefix_rest + "run_298597.139_re_reco.root",
		prefix_rest + "run_298597.13_re_reco.root",
		prefix_rest + "run_298597.140_re_reco.root",
		prefix_rest + "run_298597.141_re_reco.root",
		prefix_rest + "run_298597.142_re_reco.root",
		prefix_rest + "run_298597.143_re_reco.root",
		prefix_rest + "run_298597.144_re_reco.root",
		prefix_rest + "run_298597.145_re_reco.root",
		prefix_rest + "run_298597.146_re_reco.root",
		prefix_rest + "run_298597.147_re_reco.root",
		prefix_rest + "run_298597.148_re_reco.root",
		prefix_rest + "run_298597.149_re_reco.root",
		prefix_rest + "run_298597.14_re_reco.root",
		prefix_rest + "run_298597.150_re_reco.root",
		prefix_rest + "run_298597.151_re_reco.root",
		prefix_rest + "run_298597.152_re_reco.root",
		prefix_rest + "run_298597.153_re_reco.root",
		prefix_rest + "run_298597.154_re_reco.root",
		prefix_rest + "run_298597.155_re_reco.root",
		prefix_rest + "run_298597.156_re_reco.root",
		prefix_rest + "run_298597.157_re_reco.root",
		prefix_rest + "run_298597.158_re_reco.root",
		prefix_rest + "run_298597.159_re_reco.root",
		prefix_rest + "run_298597.15_re_reco.root",
		prefix_rest + "run_298597.160_re_reco.root",
		prefix_rest + "run_298597.161_re_reco.root",
		prefix_rest + "run_298597.162_re_reco.root",
		prefix_rest + "run_298597.163_re_reco.root",
		prefix_rest + "run_298597.164_re_reco.root",
		prefix_rest + "run_298597.165_re_reco.root",
		prefix_rest + "run_298597.166_re_reco.root",
		prefix_rest + "run_298597.167_re_reco.root",
		prefix_rest + "run_298597.168_re_reco.root",
		prefix_rest + "run_298597.169_re_reco.root",
		prefix_rest + "run_298597.16_re_reco.root",
		prefix_rest + "run_298597.170_re_reco.root",
		prefix_rest + "run_298597.171_re_reco.root",
		prefix_rest + "run_298597.172_re_reco.root",
		prefix_rest + "run_298597.173_re_reco.root",
		prefix_rest + "run_298597.174_re_reco.root",
		prefix_rest + "run_298597.175_re_reco.root",
		prefix_rest + "run_298597.177_re_reco.root",
		prefix_rest + "run_298597.178_re_reco.root",
		prefix_rest + "run_298597.17_re_reco.root",
		prefix_rest + "run_298597.18_re_reco.root",
		prefix_rest + "run_298597.19_re_reco.root",
		prefix_rest + "run_298597.1_re_reco.root",
		prefix_rest + "run_298597.20_re_reco.root",
		prefix_rest + "run_298597.21_re_reco.root",
		prefix_rest + "run_298597.22_re_reco.root",
		prefix_rest + "run_298597.23_re_reco.root",
		prefix_rest + "run_298597.24_re_reco.root",
		prefix_rest + "run_298597.25_re_reco.root",
		prefix_rest + "run_298597.26_re_reco.root",
		prefix_rest + "run_298597.27_re_reco.root",
		prefix_rest + "run_298597.28_re_reco.root",
		prefix_rest + "run_298597.30_re_reco.root",
		prefix_rest + "run_298597.31_re_reco.root",
		prefix_rest + "run_298597.32_re_reco.root",
		prefix_rest + "run_298597.34_re_reco.root",
		prefix_rest + "run_298597.35_re_reco.root",
		prefix_rest + "run_298597.36_re_reco.root",
		prefix_rest + "run_298597.37_re_reco.root",
		prefix_rest + "run_298597.38_re_reco.root",
		prefix_rest + "run_298597.39_re_reco.root",
		prefix_rest + "run_298597.3_re_reco.root",
		prefix_rest + "run_298597.40_re_reco.root",
		prefix_rest + "run_298597.41_re_reco.root",
		prefix_rest + "run_298597.42_re_reco.root",
		prefix_rest + "run_298597.43_re_reco.root",
		prefix_rest + "run_298597.44_re_reco.root",
		prefix_rest + "run_298597.45_re_reco.root",
		prefix_rest + "run_298597.46_re_reco.root",
		prefix_rest + "run_298597.47_re_reco.root",
		prefix_rest + "run_298597.48_re_reco.root",
		prefix_rest + "run_298597.49_re_reco.root",
		prefix_rest + "run_298597.4_re_reco.root",
		prefix_rest + "run_298597.50_re_reco.root",
		prefix_rest + "run_298597.51_re_reco.root",
		prefix_rest + "run_298597.52_re_reco.root",
		prefix_rest + "run_298597.54_re_reco.root",
		prefix_rest + "run_298597.55_re_reco.root",
		prefix_rest + "run_298597.56_re_reco.root",
		prefix_rest + "run_298597.57_re_reco.root",
		prefix_rest + "run_298597.58_re_reco.root",
		prefix_rest + "run_298597.59_re_reco.root",
		prefix_rest + "run_298597.5_re_reco.root",
		prefix_rest + "run_298597.60_re_reco.root",
		prefix_rest + "run_298597.61_re_reco.root",
		prefix_rest + "run_298597.62_re_reco.root",
		prefix_rest + "run_298597.63_re_reco.root",
		prefix_rest + "run_298597.64_re_reco.root",
		prefix_rest + "run_298597.65_re_reco.root",
		prefix_rest + "run_298597.66_re_reco.root",
		prefix_rest + "run_298597.67_re_reco.root",
		prefix_rest + "run_298597.68_re_reco.root",
		prefix_rest + "run_298597.69_re_reco.root",
		prefix_rest + "run_298597.6_re_reco.root",
		prefix_rest + "run_298597.70_re_reco.root",
		prefix_rest + "run_298597.71_re_reco.root",
		prefix_rest + "run_298597.72_re_reco.root",
		prefix_rest + "run_298597.73_re_reco.root",
		prefix_rest + "run_298597.74_re_reco.root",
		prefix_rest + "run_298597.75_re_reco.root",
		prefix_rest + "run_298597.76_re_reco.root",
		prefix_rest + "run_298597.77_re_reco.root",
		prefix_rest + "run_298597.78_re_reco.root",
		prefix_rest + "run_298597.79_re_reco.root",
		prefix_rest + "run_298597.7_re_reco.root",
		prefix_rest + "run_298597.80_re_reco.root",
		prefix_rest + "run_298597.81_re_reco.root",
		prefix_rest + "run_298597.82_re_reco.root",
		prefix_rest + "run_298597.83_re_reco.root",
		prefix_rest + "run_298597.84_re_reco.root",
		prefix_rest + "run_298597.85_re_reco.root",
		prefix_rest + "run_298597.86_re_reco.root",
		prefix_rest + "run_298597.87_re_reco.root",
		prefix_rest + "run_298597.88_re_reco.root",
		prefix_rest + "run_298597.89_re_reco.root",
		prefix_rest + "run_298597.8_re_reco.root",
		prefix_rest + "run_298597.90_re_reco.root",
		prefix_rest + "run_298597.91_re_reco.root",
		prefix_rest + "run_298597.92_re_reco.root",
		prefix_rest + "run_298597.93_re_reco.root",
		prefix_rest + "run_298597.94_re_reco.root",
		prefix_rest + "run_298597.95_re_reco.root",
		prefix_rest + "run_298597.96_re_reco.root",
		prefix_rest + "run_298597.97_re_reco.root",
		prefix_rest + "run_298597.98_re_reco.root",
		prefix_rest + "run_298597.99_re_reco.root",
		prefix_rest + "run_298597.9_re_reco.root",
	};
}
