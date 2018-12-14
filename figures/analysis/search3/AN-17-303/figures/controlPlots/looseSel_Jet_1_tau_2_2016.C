void looseSel_Jet_1_tau_2_2016()
{
//=========Macro generated from canvas: looseSel_Jet_1_tau_2/looseSel_Jet_1_tau_2
//=========  (Wed Sep  5 11:23:14 2018) by ROOT version6.02/05
   TCanvas *looseSel_Jet_1_tau_2 = new TCanvas("looseSel_Jet_1_tau_2", "looseSel_Jet_1_tau_2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   looseSel_Jet_1_tau_2->SetHighLightColor(2);
   looseSel_Jet_1_tau_2->Range(0,0,1,1);
   looseSel_Jet_1_tau_2->SetFillColor(0);
   looseSel_Jet_1_tau_2->SetBorderMode(0);
   looseSel_Jet_1_tau_2->SetBorderSize(2);
   looseSel_Jet_1_tau_2->SetLeftMargin(0.16);
   looseSel_Jet_1_tau_2->SetRightMargin(0.02);
   looseSel_Jet_1_tau_2->SetTopMargin(0.05);
   looseSel_Jet_1_tau_2->SetBottomMargin(0.13);
   looseSel_Jet_1_tau_2->SetFrameFillStyle(0);
   looseSel_Jet_1_tau_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "newpad1",0,0,1,0.2);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-0.1428571,-0.7000001,1.047619,1.8);
   c1_1->SetFillColor(0);
   c1_1->SetFillStyle(4000);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetGridx();
   c1_1->SetGridy();
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0);
   c1_1->SetBottomMargin(0.36);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *ratiohist6046239 = new TH1D("ratiohist6046239","",20,0,1);
   ratiohist6046239->SetBinContent(1,1.01486);
   ratiohist6046239->SetBinContent(2,1.017802);
   ratiohist6046239->SetBinContent(3,0.981272);
   ratiohist6046239->SetBinContent(4,0.9381898);
   ratiohist6046239->SetBinContent(5,0.9461259);
   ratiohist6046239->SetBinContent(6,0.924011);
   ratiohist6046239->SetBinContent(7,0.5783175);
   ratiohist6046239->SetBinContent(8,1.904625);
   ratiohist6046239->SetBinContent(9,4.813327);
   ratiohist6046239->SetBinError(1,0.004561971);
   ratiohist6046239->SetBinError(2,0.002917726);
   ratiohist6046239->SetBinError(3,0.004270458);
   ratiohist6046239->SetBinError(4,0.009837086);
   ratiohist6046239->SetBinError(5,0.02085866);
   ratiohist6046239->SetBinError(6,0.06230908);
   ratiohist6046239->SetBinError(7,0.1698868);
   ratiohist6046239->SetBinError(8,0.4610296);
   ratiohist6046239->SetBinError(9,4.426081);
   ratiohist6046239->SetMinimum(0.2);
   ratiohist6046239->SetMaximum(1.8);
   ratiohist6046239->SetEntries(8.675907);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist6046239->SetFillColor(ci);
   ratiohist6046239->SetLineWidth(2);
   ratiohist6046239->SetMarkerStyle(20);
   ratiohist6046239->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   ratiohist6046239->GetXaxis()->SetNdivisions(505);
   ratiohist6046239->GetXaxis()->SetLabelFont(42);
   ratiohist6046239->GetXaxis()->SetLabelSize(0.14);
   ratiohist6046239->GetXaxis()->SetTitleSize(0.17);
   ratiohist6046239->GetXaxis()->SetTitleOffset(0.98);
   ratiohist6046239->GetXaxis()->SetTitleFont(42);
   ratiohist6046239->GetYaxis()->SetTitle("Data/MC");
   ratiohist6046239->GetYaxis()->CenterTitle(true);
   ratiohist6046239->GetYaxis()->SetNdivisions(105);
   ratiohist6046239->GetYaxis()->SetLabelFont(42);
   ratiohist6046239->GetYaxis()->SetLabelSize(0.14);
   ratiohist6046239->GetYaxis()->SetTitleSize(0.16);
   ratiohist6046239->GetYaxis()->SetTitleOffset(0.2);
   ratiohist6046239->GetYaxis()->SetTitleFont(42);
   ratiohist6046239->GetZaxis()->SetLabelFont(42);
   ratiohist6046239->GetZaxis()->SetLabelSize(0.035);
   ratiohist6046239->GetZaxis()->SetTitleSize(0.035);
   ratiohist6046239->GetZaxis()->SetTitleFont(42);
   ratiohist6046239->Draw("");
   
   Double_t Graph0_fx1015[21] = {
   0,
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph0_fy1015[21] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fex1015[21] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph0_fey1015[21] = {
   0.003868443,
   0.003868443,
   0.002543305,
   0.003911795,
   0.009914734,
   0.02094718,
   0.06560619,
   0.2903156,
   0.1907088,
   0.5878494,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Graph",100,-0.1575,1.1325);
   Graph_Graph1015->SetMinimum(0.2945807);
   Graph_Graph1015->SetMaximum(1.705419);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);
   Graph_Graph1015->SetLineStyle(0);
   Graph_Graph1015->SetMarkerStyle(20);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist6466240 = new TH1D("H_ratiohist6466240","",20,0,1);
   H_ratiohist6466240->SetBinContent(1,0.8217146);
   H_ratiohist6466240->SetBinContent(2,1.064693);
   H_ratiohist6466240->SetBinContent(3,1.035306);
   H_ratiohist6466240->SetBinContent(4,0.9924378);
   H_ratiohist6466240->SetBinContent(5,0.9140629);
   H_ratiohist6466240->SetBinContent(6,1.034289);
   H_ratiohist6466240->SetBinContent(7,0.6792874);
   H_ratiohist6466240->SetBinContent(8,2.591621);
   H_ratiohist6466240->SetBinContent(9,4.813327);
   H_ratiohist6466240->SetBinError(1,0.008367015);
   H_ratiohist6466240->SetBinError(2,0.007082509);
   H_ratiohist6466240->SetBinError(3,0.009977606);
   H_ratiohist6466240->SetBinError(4,0.02024096);
   H_ratiohist6466240->SetBinError(5,0.04204257);
   H_ratiohist6466240->SetBinError(6,0.08341391);
   H_ratiohist6466240->SetBinError(7,0.225213);
   H_ratiohist6466240->SetBinError(8,2.359894);
   H_ratiohist6466240->SetBinError(9,4.426081);
   H_ratiohist6466240->SetMinimum(0);
   H_ratiohist6466240->SetMaximum(1143168);
   H_ratiohist6466240->SetEntries(7.712782);

   ci = 982;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist6466240->SetFillColor(ci);
   H_ratiohist6466240->SetLineStyle(9);
   H_ratiohist6466240->SetLineWidth(2);
   H_ratiohist6466240->SetMarkerStyle(20);
   H_ratiohist6466240->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   H_ratiohist6466240->GetXaxis()->SetLabelFont(42);
   H_ratiohist6466240->GetXaxis()->SetLabelSize(0);
   H_ratiohist6466240->GetXaxis()->SetTitleSize(0);
   H_ratiohist6466240->GetXaxis()->SetTitleFont(42);
   H_ratiohist6466240->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist6466240->GetYaxis()->SetLabelFont(42);
   H_ratiohist6466240->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist6466240->GetYaxis()->SetTitleFont(42);
   H_ratiohist6466240->GetZaxis()->SetLabelFont(42);
   H_ratiohist6466240->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist6466240->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist6466240->GetZaxis()->SetTitleFont(42);
   H_ratiohist6466240->Draw("HISTsame");
   
   TH1D *MG_ratiohist2726241 = new TH1D("MG_ratiohist2726241","",20,0,1);
   MG_ratiohist2726241->SetBinContent(1,1.117509);
   MG_ratiohist2726241->SetBinContent(2,1.057348);
   MG_ratiohist2726241->SetBinContent(3,0.9065839);
   MG_ratiohist2726241->SetBinContent(4,0.8329174);
   MG_ratiohist2726241->SetBinContent(5,0.819087);
   MG_ratiohist2726241->SetBinContent(6,0.8532323);
   MG_ratiohist2726241->SetBinContent(7,0.8264276);
   MG_ratiohist2726241->SetBinContent(8,0.825348);
   MG_ratiohist2726241->SetBinContent(9,0.7294244);
   MG_ratiohist2726241->SetBinError(1,0.004054296);
   MG_ratiohist2726241->SetBinError(2,0.002307303);
   MG_ratiohist2726241->SetBinError(3,0.002796627);
   MG_ratiohist2726241->SetBinError(4,0.004567608);
   MG_ratiohist2726241->SetBinError(5,0.009173003);
   MG_ratiohist2726241->SetBinError(6,0.02239733);
   MG_ratiohist2726241->SetBinError(7,0.06318722);
   MG_ratiohist2726241->SetBinError(8,0.2217031);
   MG_ratiohist2726241->SetBinError(9,0.7585943);
   MG_ratiohist2726241->SetMinimum(0);
   MG_ratiohist2726241->SetMaximum(1143168);
   MG_ratiohist2726241->SetEntries(100.8938);

   ci = 983;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist2726241->SetFillColor(ci);
   MG_ratiohist2726241->SetLineStyle(2);
   MG_ratiohist2726241->SetLineWidth(2);
   MG_ratiohist2726241->SetMarkerStyle(20);
   MG_ratiohist2726241->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   MG_ratiohist2726241->GetXaxis()->SetLabelFont(42);
   MG_ratiohist2726241->GetXaxis()->SetLabelSize(0);
   MG_ratiohist2726241->GetXaxis()->SetTitleSize(0);
   MG_ratiohist2726241->GetXaxis()->SetTitleFont(42);
   MG_ratiohist2726241->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist2726241->GetYaxis()->SetLabelFont(42);
   MG_ratiohist2726241->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist2726241->GetYaxis()->SetTitleFont(42);
   MG_ratiohist2726241->GetZaxis()->SetLabelFont(42);
   MG_ratiohist2726241->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist2726241->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist2726241->GetZaxis()->SetTitleFont(42);
   MG_ratiohist2726241->Draw("HISTsame");
   
   TH1D *ratiohist6046242 = new TH1D("ratiohist6046242","",20,0,1);
   ratiohist6046242->SetBinContent(1,1.01486);
   ratiohist6046242->SetBinContent(2,1.017802);
   ratiohist6046242->SetBinContent(3,0.981272);
   ratiohist6046242->SetBinContent(4,0.9381898);
   ratiohist6046242->SetBinContent(5,0.9461259);
   ratiohist6046242->SetBinContent(6,0.924011);
   ratiohist6046242->SetBinContent(7,0.5783175);
   ratiohist6046242->SetBinContent(8,1.904625);
   ratiohist6046242->SetBinContent(9,4.813327);
   ratiohist6046242->SetBinError(1,0.004561971);
   ratiohist6046242->SetBinError(2,0.002917726);
   ratiohist6046242->SetBinError(3,0.004270458);
   ratiohist6046242->SetBinError(4,0.009837086);
   ratiohist6046242->SetBinError(5,0.02085866);
   ratiohist6046242->SetBinError(6,0.06230908);
   ratiohist6046242->SetBinError(7,0.1698868);
   ratiohist6046242->SetBinError(8,0.4610296);
   ratiohist6046242->SetBinError(9,4.426081);
   ratiohist6046242->SetMinimum(0.2);
   ratiohist6046242->SetMaximum(1.8);
   ratiohist6046242->SetEntries(8.675907);

   ci = TColor::GetColor("#ff9900");
   ratiohist6046242->SetFillColor(ci);
   ratiohist6046242->SetLineWidth(2);
   ratiohist6046242->SetMarkerStyle(20);
   ratiohist6046242->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   ratiohist6046242->GetXaxis()->SetNdivisions(505);
   ratiohist6046242->GetXaxis()->SetLabelFont(42);
   ratiohist6046242->GetXaxis()->SetLabelSize(0.14);
   ratiohist6046242->GetXaxis()->SetTitleSize(0.17);
   ratiohist6046242->GetXaxis()->SetTitleOffset(0.98);
   ratiohist6046242->GetXaxis()->SetTitleFont(42);
   ratiohist6046242->GetYaxis()->SetTitle("Data/MC");
   ratiohist6046242->GetYaxis()->CenterTitle(true);
   ratiohist6046242->GetYaxis()->SetNdivisions(105);
   ratiohist6046242->GetYaxis()->SetLabelFont(42);
   ratiohist6046242->GetYaxis()->SetLabelSize(0.14);
   ratiohist6046242->GetYaxis()->SetTitleSize(0.16);
   ratiohist6046242->GetYaxis()->SetTitleOffset(0.2);
   ratiohist6046242->GetYaxis()->SetTitleFont(42);
   ratiohist6046242->GetZaxis()->SetLabelFont(42);
   ratiohist6046242->GetZaxis()->SetLabelSize(0.035);
   ratiohist6046242->GetZaxis()->SetTitleSize(0.035);
   ratiohist6046242->GetZaxis()->SetTitleFont(42);
   ratiohist6046242->Draw("same");
   c1_1->Modified();
   looseSel_Jet_1_tau_2->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-17140.93,1.047619,1301392);
   c1_2->SetFillColor(0);
   c1_2->SetFillStyle(4000);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.12);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0.12);
   c1_2->SetBottomMargin(0.013);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *looseSel_Jet_1_tau_2hdata243 = new TH1D("looseSel_Jet_1_tau_2hdata243","",20,0,1);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(1,190777);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(2,571584);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(3,274919);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(4,85933);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(5,21160);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(6,4114);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(7,497);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(8,45);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(9,2);
   looseSel_Jet_1_tau_2hdata243->SetBinError(1,436.7803);
   looseSel_Jet_1_tau_2hdata243->SetBinError(2,756.0317);
   looseSel_Jet_1_tau_2hdata243->SetBinError(3,524.3272);
   looseSel_Jet_1_tau_2hdata243->SetBinError(4,293.1433);
   looseSel_Jet_1_tau_2hdata243->SetBinError(5,145.4648);
   looseSel_Jet_1_tau_2hdata243->SetBinError(6,64.14047);
   looseSel_Jet_1_tau_2hdata243->SetBinError(7,22.2935);
   looseSel_Jet_1_tau_2hdata243->SetBinError(8,6.708204);
   looseSel_Jet_1_tau_2hdata243->SetBinError(9,1.414214);
   looseSel_Jet_1_tau_2hdata243->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata243->SetMaximum(1143168);
   looseSel_Jet_1_tau_2hdata243->SetEntries(1149031);
   looseSel_Jet_1_tau_2hdata243->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_2hdata243->SetFillColor(ci);
   looseSel_Jet_1_tau_2hdata243->SetLineWidth(2);
   looseSel_Jet_1_tau_2hdata243->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hdata243->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hdata243->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata243->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_2hdata243->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_2hdata243->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata243->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hdata243->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata243->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata243->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata243->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata243->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata243->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hdata243->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata243->Draw("EP");
   
   THStack *test1 = new THStack();
   test1->SetName("test1");
   test1->SetTitle("test1");
   
   TH1F *test1_stack_15 = new TH1F("test1_stack_15","test1",20,0,1);
   test1_stack_15->SetMinimum(0);
   test1_stack_15->SetMaximum(589665.7);
   test1_stack_15->SetDirectory(0);
   test1_stack_15->SetStats(0);
   test1_stack_15->SetLineStyle(0);
   test1_stack_15->SetMarkerStyle(20);
   test1_stack_15->GetXaxis()->SetLabelFont(42);
   test1_stack_15->GetXaxis()->SetLabelOffset(0.007);
   test1_stack_15->GetXaxis()->SetTitleOffset(1.1);
   test1_stack_15->GetXaxis()->SetTitleFont(42);
   test1_stack_15->GetYaxis()->SetLabelFont(42);
   test1_stack_15->GetYaxis()->SetLabelOffset(0.007);
   test1_stack_15->GetYaxis()->SetTitleOffset(1.25);
   test1_stack_15->GetYaxis()->SetTitleFont(42);
   test1_stack_15->GetZaxis()->SetLabelFont(42);
   test1_stack_15->GetZaxis()->SetLabelOffset(0.007);
   test1_stack_15->GetZaxis()->SetTitleFont(42);
   test1->SetHistogram(test1_stack_15);
   
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(1,3405.276);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(2,4827.797);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(3,1909.984);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(4,596.303);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(5,137.7382);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(6,24.78444);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(7,2.320245);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(8,0.4218627);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(1,19.02362);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(2,22.64493);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(3,14.2367);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(4,7.9527);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(5,3.811385);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(6,1.616758);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(7,0.4946779);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(8,0.2109314);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetEntries(104113);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetDirectory(0);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(1,6799.643);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(2,9392.785);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(3,3841.247);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(4,1205.73);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(5,269.179);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(6,34.82685);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(7,4.632143);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(8,0.3431217);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(9,0.1715608);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(1,34.2598);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(2,40.25104);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(3,25.72841);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(4,14.39681);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(5,6.812932);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(6,2.456378);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(7,0.8914563);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(8,0.2426237);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(9,0.1715608);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetEntries(126267);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetDirectory(0);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(1,2189.926);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(2,6156.458);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(3,5894.466);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(4,3311.777);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(5,922.1309);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(6,145.6622);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(7,18.73601);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(8,1.008446);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(9,0.2439522);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(1,17.4668);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(2,29.29273);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(3,28.59633);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(4,21.29225);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(5,11.15386);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(6,4.415454);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(7,1.548381);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(8,0.3641759);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(9,0.173866);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetEntries(188628);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *looseSel_Jet_1_tau_2hqcd247 = new TH1D("looseSel_Jet_1_tau_2hqcd247","",20,0,1);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(1,175588.7);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(2,541209.4);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(3,268520.2);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(4,86480.66);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(5,21035.84);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(6,4247.054);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(7,833.7011);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(8,21.85327);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(1,725.9369);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(2,1427.238);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(3,1095.184);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(4,907.7363);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(5,468.2835);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(6,292.0521);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(7,249.4873);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(8,4.479555);
   looseSel_Jet_1_tau_2hqcd247->SetEntries(3841747);
   looseSel_Jet_1_tau_2hqcd247->SetDirectory(0);
   looseSel_Jet_1_tau_2hqcd247->SetFillColor(36);
   looseSel_Jet_1_tau_2hqcd247->SetLineWidth(2);
   looseSel_Jet_1_tau_2hqcd247->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hqcd247->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hqcd247->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd247->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd247->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd247->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd247->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hqcd247->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd247->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd247->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd247->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd247->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd247->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd247->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd247->GetZaxis()->SetTitleFont(42);
   test1->Add(looseSel_Jet_1_tau_2hqcd,"");
   test1->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(1,301750.7);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(2,41360.99);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(3,1556.166);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(4,22.2067);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(5,19.2358);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(1,2784.811);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(2,1039.997);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(3,208.5569);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(4,14.02964);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(5,19.2358);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetEntries(17066);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(1,295391.4);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(2,44934.67);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(3,3830.007);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(4,461.9183);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(5,72.37895);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(6,18.90834);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(1,1203.843);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(2,468.8393);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(3,136.8492);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(4,47.97463);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(5,18.63967);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(6,9.578821);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetEntries(82884);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(1,288299.5);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(2,51611.41);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(3,4245.094);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(4,415.0168);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(5,88.33569);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(6,49.97621);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(1,2747.331);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(2,1165.156);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(3,334.0077);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(4,103.6861);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(5,45.63219);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(6,35.62931);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetEntries(15908);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_1_tau_2hqcd251 = new TH1D("looseSel_Jet_1_tau_2hqcd251","",20,0,1);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(1,187983.5);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(2,561586.4);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(3,280165.9);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(4,91594.47);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(5,22364.89);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(6,4452.328);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(7,859.3895);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(8,23.6267);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(9,0.415513);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(1,727.2037);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(2,1428.286);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(3,1095.952);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(4,908.1349);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(5,468.4814);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(6,292.1003);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(7,249.4942);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(8,4.505818);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(9,0.2442591);
   looseSel_Jet_1_tau_2hqcd251->SetEntries(4260755);
   looseSel_Jet_1_tau_2hqcd251->SetDirectory(0);
   looseSel_Jet_1_tau_2hqcd251->SetFillColor(1);
   looseSel_Jet_1_tau_2hqcd251->SetFillStyle(3013);
   looseSel_Jet_1_tau_2hqcd251->SetLineWidth(2);
   looseSel_Jet_1_tau_2hqcd251->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hqcd251->SetMarkerSize(0);
   looseSel_Jet_1_tau_2hqcd251->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hqcd251->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd251->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd251->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd251->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd251->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hqcd251->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd251->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd251->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd251->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd251->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd251->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd251->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd251->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd251->Draw("E2same");
   
   TH1D *looseSel_Jet_1_tau_2hherwig252 = new TH1D("looseSel_Jet_1_tau_2hherwig252","",20,0,1);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(1,232169.4);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(2,536853.5);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(3,265543.8);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(4,86587.8);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(5,23149.39);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(6,3977.613);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(7,731.6491);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(8,17.36365);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(9,0.415513);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(1,2303.505);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(2,3499.929);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(3,2508.527);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(4,1741.097);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(5,1052.803);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(6,314.7376);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(7,240.3427);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(8,15.59779);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(9,0.2442591);
   looseSel_Jet_1_tau_2hherwig252->SetEntries(709468);
   looseSel_Jet_1_tau_2hherwig252->SetDirectory(0);

   ci = 980;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_2hherwig252->SetFillColor(ci);
   looseSel_Jet_1_tau_2hherwig252->SetLineStyle(9);
   looseSel_Jet_1_tau_2hherwig252->SetLineWidth(2);
   looseSel_Jet_1_tau_2hherwig252->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hherwig252->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hherwig252->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hherwig252->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hherwig252->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hherwig252->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hherwig252->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hherwig252->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hherwig252->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hherwig252->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hherwig252->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hherwig252->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hherwig252->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hherwig252->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hherwig252->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hherwig252->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_2hmg253 = new TH1D("looseSel_Jet_1_tau_2hmg253","",20,0,1);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(1,170716.3);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(2,540582.5);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(3,303247.2);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(4,103171.1);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(5,25833.64);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(6,4821.664);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(7,601.3836);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(8,54.52245);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(9,2.741888);
   looseSel_Jet_1_tau_2hmg253->SetBinError(1,480.4528);
   looseSel_Jet_1_tau_2hmg253->SetBinError(2,938.2333);
   looseSel_Jet_1_tau_2hmg253->SetBinError(3,735.2436);
   looseSel_Jet_1_tau_2hmg253->SetBinError(4,442.9852);
   looseSel_Jet_1_tau_2hmg253->SetBinError(5,228.3903);
   looseSel_Jet_1_tau_2hmg253->SetBinError(6,101.8261);
   looseSel_Jet_1_tau_2hmg253->SetBinError(7,37.23626);
   looseSel_Jet_1_tau_2hmg253->SetBinError(8,12.18345);
   looseSel_Jet_1_tau_2hmg253->SetBinError(9,2.091001);
   looseSel_Jet_1_tau_2hmg253->SetEntries(1966122);
   looseSel_Jet_1_tau_2hmg253->SetDirectory(0);

   ci = 981;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_2hmg253->SetFillColor(ci);
   looseSel_Jet_1_tau_2hmg253->SetLineStyle(2);
   looseSel_Jet_1_tau_2hmg253->SetLineWidth(2);
   looseSel_Jet_1_tau_2hmg253->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hmg253->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hmg253->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hmg253->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hmg253->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hmg253->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hmg253->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hmg253->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hmg253->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hmg253->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hmg253->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hmg253->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hmg253->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hmg253->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hmg253->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hmg253->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_2hdata254 = new TH1D("looseSel_Jet_1_tau_2hdata254","",20,0,1);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(1,190777);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(2,571584);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(3,274919);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(4,85933);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(5,21160);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(6,4114);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(7,497);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(8,45);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(9,2);
   looseSel_Jet_1_tau_2hdata254->SetBinError(1,436.7803);
   looseSel_Jet_1_tau_2hdata254->SetBinError(2,756.0317);
   looseSel_Jet_1_tau_2hdata254->SetBinError(3,524.3272);
   looseSel_Jet_1_tau_2hdata254->SetBinError(4,293.1433);
   looseSel_Jet_1_tau_2hdata254->SetBinError(5,145.4648);
   looseSel_Jet_1_tau_2hdata254->SetBinError(6,64.14047);
   looseSel_Jet_1_tau_2hdata254->SetBinError(7,22.2935);
   looseSel_Jet_1_tau_2hdata254->SetBinError(8,6.708204);
   looseSel_Jet_1_tau_2hdata254->SetBinError(9,1.414214);
   looseSel_Jet_1_tau_2hdata254->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata254->SetMaximum(1143168);
   looseSel_Jet_1_tau_2hdata254->SetEntries(1149031);
   looseSel_Jet_1_tau_2hdata254->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_2hdata254->SetFillColor(ci);
   looseSel_Jet_1_tau_2hdata254->SetLineWidth(2);
   looseSel_Jet_1_tau_2hdata254->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hdata254->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hdata254->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata254->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_2hdata254->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_2hdata254->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata254->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hdata254->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata254->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata254->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata254->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata254->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata254->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hdata254->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata254->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_1_tau_2hdata","Data (2016)","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_2hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_2hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_2hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc","Z+jets","F");

   ci = TColor::GetColor("#cc3333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"35.9 fb^{-1}(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.849655,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.072);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.763255,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.05472);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *looseSel_Jet_1_tau_2hdata_copy255 = new TH1D("looseSel_Jet_1_tau_2hdata_copy255","",20,0,1);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(1,190777);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(2,571584);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(3,274919);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(4,85933);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(5,21160);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(6,4114);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(7,497);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(8,45);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(9,2);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(1,436.7803);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(2,756.0317);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(3,524.3272);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(4,293.1433);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(5,145.4648);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(6,64.14047);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(7,22.2935);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(8,6.708204);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(9,1.414214);
   looseSel_Jet_1_tau_2hdata_copy255->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata_copy255->SetMaximum(1143168);
   looseSel_Jet_1_tau_2hdata_copy255->SetEntries(1149031);
   looseSel_Jet_1_tau_2hdata_copy255->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_2hdata_copy255->SetFillColor(ci);
   looseSel_Jet_1_tau_2hdata_copy255->SetLineWidth(2);
   looseSel_Jet_1_tau_2hdata_copy255->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hdata_copy255->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hdata_copy255->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata_copy255->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_2hdata_copy255->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_2hdata_copy255->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata_copy255->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hdata_copy255->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata_copy255->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata_copy255->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata_copy255->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata_copy255->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata_copy255->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hdata_copy255->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata_copy255->Draw("sameaxis");
   c1_2->Modified();
   looseSel_Jet_1_tau_2->cd();
   looseSel_Jet_1_tau_2->Modified();
   looseSel_Jet_1_tau_2->cd();
   looseSel_Jet_1_tau_2->SetSelected(looseSel_Jet_1_tau_2);
}
