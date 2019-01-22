void looseSel_Jet_1_tau_2_2017()
{
//=========Macro generated from canvas: looseSel_Jet_1_tau_2/looseSel_Jet_1_tau_2
//=========  (Wed Sep  5 11:20:37 2018) by ROOT version6.02/05
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
   
   TH1D *ratiohist661239 = new TH1D("ratiohist661239","",20,0,1);
   ratiohist661239->SetBinContent(1,0.8428888);
   ratiohist661239->SetBinContent(2,0.9707002);
   ratiohist661239->SetBinContent(3,1.132273);
   ratiohist661239->SetBinContent(4,1.216796);
   ratiohist661239->SetBinContent(5,1.3047);
   ratiohist661239->SetBinContent(6,1.392333);
   ratiohist661239->SetBinContent(7,1.479016);
   ratiohist661239->SetBinContent(8,0.64097);
   ratiohist661239->SetBinError(1,0.01120249);
   ratiohist661239->SetBinError(2,0.004134918);
   ratiohist661239->SetBinError(3,0.00585584);
   ratiohist661239->SetBinError(4,0.01079822);
   ratiohist661239->SetBinError(5,0.03022107);
   ratiohist661239->SetBinError(6,0.06968416);
   ratiohist661239->SetBinError(7,0.2362834);
   ratiohist661239->SetBinError(8,0.341996);
   ratiohist661239->SetMinimum(0.2);
   ratiohist661239->SetMaximum(1.8);
   ratiohist661239->SetEntries(450.8408);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist661239->SetFillColor(ci);
   ratiohist661239->SetLineWidth(2);
   ratiohist661239->SetMarkerStyle(20);
   ratiohist661239->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   ratiohist661239->GetXaxis()->SetNdivisions(505);
   ratiohist661239->GetXaxis()->SetLabelFont(42);
   ratiohist661239->GetXaxis()->SetLabelSize(0.14);
   ratiohist661239->GetXaxis()->SetTitleSize(0.17);
   ratiohist661239->GetXaxis()->SetTitleOffset(0.98);
   ratiohist661239->GetXaxis()->SetTitleFont(42);
   ratiohist661239->GetYaxis()->SetTitle("Data/MC");
   ratiohist661239->GetYaxis()->CenterTitle(true);
   ratiohist661239->GetYaxis()->SetNdivisions(105);
   ratiohist661239->GetYaxis()->SetLabelFont(42);
   ratiohist661239->GetYaxis()->SetLabelSize(0.14);
   ratiohist661239->GetYaxis()->SetTitleSize(0.16);
   ratiohist661239->GetYaxis()->SetTitleOffset(0.2);
   ratiohist661239->GetYaxis()->SetTitleFont(42);
   ratiohist661239->GetZaxis()->SetLabelFont(42);
   ratiohist661239->GetZaxis()->SetLabelSize(0.035);
   ratiohist661239->GetZaxis()->SetTitleSize(0.035);
   ratiohist661239->GetZaxis()->SetTitleFont(42);
   ratiohist661239->Draw("");
   
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
   0.01312469,
   0.01312469,
   0.004080898,
   0.004864326,
   0.008292901,
   0.02225873,
   0.04770599,
   0.1534472,
   0.5052471,
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
   
   TH1D *H_ratiohist2286240 = new TH1D("H_ratiohist2286240","",20,0,1);
   H_ratiohist2286240->SetBinContent(1,0.8904757);
   H_ratiohist2286240->SetBinContent(2,1.050417);
   H_ratiohist2286240->SetBinContent(3,1.007916);
   H_ratiohist2286240->SetBinContent(4,0.9525438);
   H_ratiohist2286240->SetBinContent(5,0.9300071);
   H_ratiohist2286240->SetBinContent(6,1.003534);
   H_ratiohist2286240->SetBinContent(7,1.389946);
   H_ratiohist2286240->SetBinContent(8,1.346476);
   H_ratiohist2286240->SetBinError(1,0.009812652);
   H_ratiohist2286240->SetBinError(2,0.007403057);
   H_ratiohist2286240->SetBinError(3,0.01014126);
   H_ratiohist2286240->SetBinError(4,0.01823025);
   H_ratiohist2286240->SetBinError(5,0.03894779);
   H_ratiohist2286240->SetBinError(6,0.09385271);
   H_ratiohist2286240->SetBinError(7,0.3504299);
   H_ratiohist2286240->SetBinError(8,1.259221);
   H_ratiohist2286240->SetMinimum(0);
   H_ratiohist2286240->SetMaximum(1340892);
   H_ratiohist2286240->SetEntries(42.72976);

   ci = 982;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist2286240->SetFillColor(ci);
   H_ratiohist2286240->SetLineStyle(9);
   H_ratiohist2286240->SetLineWidth(2);
   H_ratiohist2286240->SetMarkerStyle(20);
   H_ratiohist2286240->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   H_ratiohist2286240->GetXaxis()->SetLabelFont(42);
   H_ratiohist2286240->GetXaxis()->SetLabelSize(0);
   H_ratiohist2286240->GetXaxis()->SetTitleSize(0);
   H_ratiohist2286240->GetXaxis()->SetTitleFont(42);
   H_ratiohist2286240->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist2286240->GetYaxis()->SetLabelFont(42);
   H_ratiohist2286240->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist2286240->GetYaxis()->SetTitleFont(42);
   H_ratiohist2286240->GetZaxis()->SetLabelFont(42);
   H_ratiohist2286240->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist2286240->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist2286240->GetZaxis()->SetTitleFont(42);
   H_ratiohist2286240->Draw("HISTsame");
   
   TH1D *MG_ratiohist6087241 = new TH1D("MG_ratiohist6087241","",20,0,1);
   MG_ratiohist6087241->SetBinContent(1,0.9098279);
   MG_ratiohist6087241->SetBinContent(2,0.9790984);
   MG_ratiohist6087241->SetBinContent(3,1.082287);
   MG_ratiohist6087241->SetBinContent(4,1.086432);
   MG_ratiohist6087241->SetBinContent(5,1.154822);
   MG_ratiohist6087241->SetBinContent(6,1.25855);
   MG_ratiohist6087241->SetBinContent(7,1.404242);
   MG_ratiohist6087241->SetBinContent(8,1.474188);
   MG_ratiohist6087241->SetBinError(1,0.06935942);
   MG_ratiohist6087241->SetBinError(2,0.03951835);
   MG_ratiohist6087241->SetBinError(3,0.003649883);
   MG_ratiohist6087241->SetBinError(4,0.0067054);
   MG_ratiohist6087241->SetBinError(5,0.01519129);
   MG_ratiohist6087241->SetBinError(6,0.04208547);
   MG_ratiohist6087241->SetBinError(7,0.1385266);
   MG_ratiohist6087241->SetBinError(8,0.5898505);
   MG_ratiohist6087241->SetMinimum(0);
   MG_ratiohist6087241->SetMaximum(1340892);
   MG_ratiohist6087241->SetEntries(232.7603);

   ci = 983;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist6087241->SetFillColor(ci);
   MG_ratiohist6087241->SetLineStyle(2);
   MG_ratiohist6087241->SetLineWidth(2);
   MG_ratiohist6087241->SetMarkerStyle(20);
   MG_ratiohist6087241->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   MG_ratiohist6087241->GetXaxis()->SetLabelFont(42);
   MG_ratiohist6087241->GetXaxis()->SetLabelSize(0);
   MG_ratiohist6087241->GetXaxis()->SetTitleSize(0);
   MG_ratiohist6087241->GetXaxis()->SetTitleFont(42);
   MG_ratiohist6087241->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist6087241->GetYaxis()->SetLabelFont(42);
   MG_ratiohist6087241->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist6087241->GetYaxis()->SetTitleFont(42);
   MG_ratiohist6087241->GetZaxis()->SetLabelFont(42);
   MG_ratiohist6087241->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist6087241->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist6087241->GetZaxis()->SetTitleFont(42);
   MG_ratiohist6087241->Draw("HISTsame");
   
   TH1D *ratiohist661242 = new TH1D("ratiohist661242","",20,0,1);
   ratiohist661242->SetBinContent(1,0.8428888);
   ratiohist661242->SetBinContent(2,0.9707002);
   ratiohist661242->SetBinContent(3,1.132273);
   ratiohist661242->SetBinContent(4,1.216796);
   ratiohist661242->SetBinContent(5,1.3047);
   ratiohist661242->SetBinContent(6,1.392333);
   ratiohist661242->SetBinContent(7,1.479016);
   ratiohist661242->SetBinContent(8,0.64097);
   ratiohist661242->SetBinError(1,0.01120249);
   ratiohist661242->SetBinError(2,0.004134918);
   ratiohist661242->SetBinError(3,0.00585584);
   ratiohist661242->SetBinError(4,0.01079822);
   ratiohist661242->SetBinError(5,0.03022107);
   ratiohist661242->SetBinError(6,0.06968416);
   ratiohist661242->SetBinError(7,0.2362834);
   ratiohist661242->SetBinError(8,0.341996);
   ratiohist661242->SetMinimum(0.2);
   ratiohist661242->SetMaximum(1.8);
   ratiohist661242->SetEntries(450.8408);

   ci = TColor::GetColor("#ff9900");
   ratiohist661242->SetFillColor(ci);
   ratiohist661242->SetLineWidth(2);
   ratiohist661242->SetMarkerStyle(20);
   ratiohist661242->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   ratiohist661242->GetXaxis()->SetNdivisions(505);
   ratiohist661242->GetXaxis()->SetLabelFont(42);
   ratiohist661242->GetXaxis()->SetLabelSize(0.14);
   ratiohist661242->GetXaxis()->SetTitleSize(0.17);
   ratiohist661242->GetXaxis()->SetTitleOffset(0.98);
   ratiohist661242->GetXaxis()->SetTitleFont(42);
   ratiohist661242->GetYaxis()->SetTitle("Data/MC");
   ratiohist661242->GetYaxis()->CenterTitle(true);
   ratiohist661242->GetYaxis()->SetNdivisions(105);
   ratiohist661242->GetYaxis()->SetLabelFont(42);
   ratiohist661242->GetYaxis()->SetLabelSize(0.14);
   ratiohist661242->GetYaxis()->SetTitleSize(0.16);
   ratiohist661242->GetYaxis()->SetTitleOffset(0.2);
   ratiohist661242->GetYaxis()->SetTitleFont(42);
   ratiohist661242->GetZaxis()->SetLabelFont(42);
   ratiohist661242->GetZaxis()->SetLabelSize(0.035);
   ratiohist661242->GetZaxis()->SetTitleSize(0.035);
   ratiohist661242->GetZaxis()->SetTitleFont(42);
   ratiohist661242->Draw("same");
   c1_1->Modified();
   looseSel_Jet_1_tau_2->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-20105.65,1.047619,1526483);
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
   looseSel_Jet_1_tau_2hdata243->SetBinContent(1,228199);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(2,670446);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(3,324106);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(4,100190);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(5,24340);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(6,4367);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(7,506);
   looseSel_Jet_1_tau_2hdata243->SetBinContent(8,34);
   looseSel_Jet_1_tau_2hdata243->SetBinError(1,477.7018);
   looseSel_Jet_1_tau_2hdata243->SetBinError(2,818.8077);
   looseSel_Jet_1_tau_2hdata243->SetBinError(3,569.3031);
   looseSel_Jet_1_tau_2hdata243->SetBinError(4,316.528);
   looseSel_Jet_1_tau_2hdata243->SetBinError(5,156.0128);
   looseSel_Jet_1_tau_2hdata243->SetBinError(6,66.08328);
   looseSel_Jet_1_tau_2hdata243->SetBinError(7,22.49444);
   looseSel_Jet_1_tau_2hdata243->SetBinError(8,5.830952);
   looseSel_Jet_1_tau_2hdata243->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata243->SetMaximum(1340892);
   looseSel_Jet_1_tau_2hdata243->SetEntries(1352188);
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
   test1_stack_15->SetMaximum(725217);
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
   
   
   TH1D *resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244 = new TH1D("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244","",20,0,1);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(1,3923.934);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(2,5563.119);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(3,2200.893);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(4,687.1259);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(5,158.7171);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(6,28.55935);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(7,2.673642);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinContent(8,0.4861167);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(1,21.92111);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(2,26.09398);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(3,16.40509);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(4,9.163976);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(5,4.391897);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(6,1.863007);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(7,0.5700223);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetBinError(8,0.2430583);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetEntries(104113);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetDirectory(0);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetFillColor(47);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetLineWidth(2);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc244->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245 = new TH1D("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245","",20,0,1);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(1,7835.296);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(2,10823.4);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(3,4426.308);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(4,1389.374);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(5,310.1776);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(6,40.13133);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(7,5.337665);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(8,0.3953826);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinContent(9,0.1976913);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(1,39.47791);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(2,46.38168);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(3,29.6471);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(4,16.58959);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(5,7.850609);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(6,2.830508);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(7,1.027234);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(8,0.2795777);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetBinError(9,0.1976913);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetEntries(126267);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetDirectory(0);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetFillColor(21);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc245->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246 = new TH1D("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246","",20,0,1);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(1,2523.474);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(2,7094.148);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(3,6792.252);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(4,3816.194);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(5,1062.581);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(6,167.848);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(7,21.58969);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(8,1.162043);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinContent(9,0.2811086);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(1,20.12716);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(2,33.75431);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(3,32.95184);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(4,24.53527);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(5,12.85271);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(6,5.087972);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(7,1.784215);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(8,0.4196436);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetBinError(9,0.2003476);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetEntries(188628);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetFillColor(ci);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetLineWidth(2);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc246->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *looseSel_Jet_1_tau_2hqcd247 = new TH1D("looseSel_Jet_1_tau_2hqcd247","",20,0,1);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(1,256451.7);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(2,667202.2);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(3,272824.3);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(4,76446.48);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(5,17124.16);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(6,2899.924);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(7,312.5182);
   looseSel_Jet_1_tau_2hqcd247->SetBinContent(8,51.00106);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(1,3552.962);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(2,2817.902);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(3,1391.581);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(4,682.1264);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(5,414.9543);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(6,149.5031);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(7,52.45377);
   looseSel_Jet_1_tau_2hqcd247->SetBinError(8,26.79479);
   looseSel_Jet_1_tau_2hqcd247->SetEntries(5601853);
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
   
   TH1D *resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248 = new TH1D("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248","",20,0,1);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(1,355102.4);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(2,48673.91);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(3,1831.307);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(4,26.133);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinContent(5,22.63683);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(1,3277.185);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(2,1223.876);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(3,245.4313);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(4,16.51018);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetBinError(5,22.63683);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetEntries(17066);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetLineColor(ci);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig248->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(1,347618.8);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(2,52879.44);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(3,4507.18);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(4,543.5888);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(5,85.17607);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinContent(6,22.25147);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(1,1416.692);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(2,551.7335);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(3,161.0451);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(4,56.45689);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(5,21.9353);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetBinError(6,11.27243);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetEntries(82884);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetLineStyle(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig249->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(1,339272.9);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(2,60736.69);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(3,4995.657);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(4,488.3948);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(5,103.9541);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinContent(6,58.81236);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(1,3233.079);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(2,1371.164);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(3,393.0627);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(4,122.0186);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(5,53.70029);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetBinError(6,41.92882);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetEntries(15908);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetLineStyle(4);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig250->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_1_tau_2hqcd251 = new TH1D("looseSel_Jet_1_tau_2hqcd251","",20,0,1);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(1,270734.4);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(2,690682.9);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(3,286243.8);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(4,82339.17);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(5,18655.64);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(6,3136.463);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(7,342.1192);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(8,53.0446);
   looseSel_Jet_1_tau_2hqcd251->SetBinContent(9,0.4787998);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(1,3553.306);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(2,2818.606);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(3,1392.383);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(4,682.8306);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(5,415.2507);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(6,149.6281);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(7,52.49725);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(8,26.80063);
   looseSel_Jet_1_tau_2hqcd251->SetBinError(9,0.2814622);
   looseSel_Jet_1_tau_2hqcd251->SetEntries(6020861);
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
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(1,256266.4);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(2,638266.3);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(3,321560.5);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(4,105181.5);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(5,26171.84);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(6,4351.623);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(7,364.0429);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(8,25.2511);
   looseSel_Jet_1_tau_2hherwig252->SetBinContent(9,0.4787998);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(1,2772.521);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(2,4430.274);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(3,3185.734);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(4,1985.399);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(5,1083.137);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(6,401.6106);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(7,90.34353);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(8,23.21431);
   looseSel_Jet_1_tau_2hherwig252->SetBinError(9,0.2814622);
   looseSel_Jet_1_tau_2hherwig252->SetEntries(546959);
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
   looseSel_Jet_1_tau_2hmg253->SetBinContent(1,250815.6);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(2,684758.5);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(3,299464);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(4,92219.26);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(5,21076.84);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(6,3469.865);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(7,360.3368);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(8,23.06354);
   looseSel_Jet_1_tau_2hmg253->SetBinContent(9,0.4787998);
   looseSel_Jet_1_tau_2hmg253->SetBinError(1,19113.35);
   looseSel_Jet_1_tau_2hmg253->SetBinError(2,27625.55);
   looseSel_Jet_1_tau_2hmg253->SetBinError(3,862.0998);
   looseSel_Jet_1_tau_2hmg253->SetBinError(4,488.9522);
   looseSel_Jet_1_tau_2hmg253->SetBinError(5,242.1183);
   looseSel_Jet_1_tau_2hmg253->SetBinError(6,103.4706);
   looseSel_Jet_1_tau_2hmg253->SetBinError(7,31.73271);
   looseSel_Jet_1_tau_2hmg253->SetBinError(8,8.337507);
   looseSel_Jet_1_tau_2hmg253->SetBinError(9,0.2814622);
   looseSel_Jet_1_tau_2hmg253->SetEntries(1729089);
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
   looseSel_Jet_1_tau_2hdata254->SetBinContent(1,228199);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(2,670446);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(3,324106);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(4,100190);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(5,24340);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(6,4367);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(7,506);
   looseSel_Jet_1_tau_2hdata254->SetBinContent(8,34);
   looseSel_Jet_1_tau_2hdata254->SetBinError(1,477.7018);
   looseSel_Jet_1_tau_2hdata254->SetBinError(2,818.8077);
   looseSel_Jet_1_tau_2hdata254->SetBinError(3,569.3031);
   looseSel_Jet_1_tau_2hdata254->SetBinError(4,316.528);
   looseSel_Jet_1_tau_2hdata254->SetBinError(5,156.0128);
   looseSel_Jet_1_tau_2hdata254->SetBinError(6,66.08328);
   looseSel_Jet_1_tau_2hdata254->SetBinError(7,22.49444);
   looseSel_Jet_1_tau_2hdata254->SetBinError(8,5.830952);
   looseSel_Jet_1_tau_2hdata254->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata254->SetMaximum(1340892);
   looseSel_Jet_1_tau_2hdata254->SetEntries(1352188);
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
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_1_tau_2hdata","Data (2017)","LEP");
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
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc","Z+jets","F");

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
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"(2017) 41.4 fb^{-1}(13 TeV)");
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
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(1,228199);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(2,670446);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(3,324106);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(4,100190);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(5,24340);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(6,4367);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(7,506);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinContent(8,34);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(1,477.7018);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(2,818.8077);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(3,569.3031);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(4,316.528);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(5,156.0128);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(6,66.08328);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(7,22.49444);
   looseSel_Jet_1_tau_2hdata_copy255->SetBinError(8,5.830952);
   looseSel_Jet_1_tau_2hdata_copy255->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata_copy255->SetMaximum(1340892);
   looseSel_Jet_1_tau_2hdata_copy255->SetEntries(1352188);
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
