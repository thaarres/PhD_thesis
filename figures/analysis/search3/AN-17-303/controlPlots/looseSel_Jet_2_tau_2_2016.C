void looseSel_Jet_2_tau_2_2016()
{
//=========Macro generated from canvas: looseSel_Jet_2_tau_2/looseSel_Jet_2_tau_2
//=========  (Wed Sep  5 11:23:16 2018) by ROOT version6.02/05
   TCanvas *looseSel_Jet_2_tau_2 = new TCanvas("looseSel_Jet_2_tau_2", "looseSel_Jet_2_tau_2",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   looseSel_Jet_2_tau_2->SetHighLightColor(2);
   looseSel_Jet_2_tau_2->Range(0,0,1,1);
   looseSel_Jet_2_tau_2->SetFillColor(0);
   looseSel_Jet_2_tau_2->SetBorderMode(0);
   looseSel_Jet_2_tau_2->SetBorderSize(2);
   looseSel_Jet_2_tau_2->SetLeftMargin(0.16);
   looseSel_Jet_2_tau_2->SetRightMargin(0.02);
   looseSel_Jet_2_tau_2->SetTopMargin(0.05);
   looseSel_Jet_2_tau_2->SetBottomMargin(0.13);
   looseSel_Jet_2_tau_2->SetFrameFillStyle(0);
   looseSel_Jet_2_tau_2->SetFrameBorderMode(0);
  
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
   
   TH1D *ratiohist8384256 = new TH1D("ratiohist8384256","",20,0,1);
   ratiohist8384256->SetBinContent(1,1.011059);
   ratiohist8384256->SetBinContent(2,1.015412);
   ratiohist8384256->SetBinContent(3,0.9828869);
   ratiohist8384256->SetBinContent(4,0.9545527);
   ratiohist8384256->SetBinContent(5,0.948901);
   ratiohist8384256->SetBinContent(6,0.9045444);
   ratiohist8384256->SetBinContent(7,0.5989893);
   ratiohist8384256->SetBinContent(8,1.083821);
   ratiohist8384256->SetBinContent(9,4.355154);
   ratiohist8384256->SetBinError(1,0.00407558);
   ratiohist8384256->SetBinError(2,0.003053609);
   ratiohist8384256->SetBinError(3,0.00469608);
   ratiohist8384256->SetBinError(4,0.008525044);
   ratiohist8384256->SetBinError(5,0.01552162);
   ratiohist8384256->SetBinError(6,0.03634016);
   ratiohist8384256->SetBinError(7,0.1837125);
   ratiohist8384256->SetBinError(8,0.4213835);
   ratiohist8384256->SetBinError(9,3.335794);
   ratiohist8384256->SetMinimum(0.2);
   ratiohist8384256->SetMaximum(1.8);
   ratiohist8384256->SetEntries(12.39349);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist8384256->SetFillColor(ci);
   ratiohist8384256->SetLineWidth(2);
   ratiohist8384256->SetMarkerStyle(20);
   ratiohist8384256->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   ratiohist8384256->GetXaxis()->SetNdivisions(505);
   ratiohist8384256->GetXaxis()->SetLabelFont(42);
   ratiohist8384256->GetXaxis()->SetLabelSize(0.14);
   ratiohist8384256->GetXaxis()->SetTitleSize(0.17);
   ratiohist8384256->GetXaxis()->SetTitleOffset(0.98);
   ratiohist8384256->GetXaxis()->SetTitleFont(42);
   ratiohist8384256->GetYaxis()->SetTitle("Data/MC");
   ratiohist8384256->GetYaxis()->CenterTitle(true);
   ratiohist8384256->GetYaxis()->SetNdivisions(105);
   ratiohist8384256->GetYaxis()->SetLabelFont(42);
   ratiohist8384256->GetYaxis()->SetLabelSize(0.14);
   ratiohist8384256->GetYaxis()->SetTitleSize(0.16);
   ratiohist8384256->GetYaxis()->SetTitleOffset(0.2);
   ratiohist8384256->GetYaxis()->SetTitleFont(42);
   ratiohist8384256->GetZaxis()->SetLabelFont(42);
   ratiohist8384256->GetZaxis()->SetLabelSize(0.035);
   ratiohist8384256->GetZaxis()->SetTitleSize(0.035);
   ratiohist8384256->GetZaxis()->SetTitleFont(42);
   ratiohist8384256->Draw("");
   
   Double_t Graph0_fx1016[21] = {
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
   Double_t Graph0_fy1016[21] = {
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
   Double_t Graph0_fex1016[21] = {
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
   Double_t Graph0_fey1016[21] = {
   0.003316932,
   0.003316932,
   0.002700753,
   0.004381878,
   0.008250181,
   0.01484846,
   0.03681358,
   0.3035034,
   0.3576385,
   0.5033223,
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
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Graph",100,-0.1575,1.1325);
   Graph_Graph1016->SetMinimum(0.3960132);
   Graph_Graph1016->SetMaximum(1.603987);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);
   Graph_Graph1016->SetLineStyle(0);
   Graph_Graph1016->SetMarkerStyle(20);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist3107257 = new TH1D("H_ratiohist3107257","",20,0,1);
   H_ratiohist3107257->SetBinContent(1,0.8416262);
   H_ratiohist3107257->SetBinContent(2,1.051129);
   H_ratiohist3107257->SetBinContent(3,1.034516);
   H_ratiohist3107257->SetBinContent(4,0.994683);
   H_ratiohist3107257->SetBinContent(5,0.974133);
   H_ratiohist3107257->SetBinContent(6,0.9533348);
   H_ratiohist3107257->SetBinContent(7,1.194065);
   H_ratiohist3107257->SetBinContent(8,0.7581863);
   H_ratiohist3107257->SetBinContent(9,21.50779);
   H_ratiohist3107257->SetBinError(1,0.00846604);
   H_ratiohist3107257->SetBinError(2,0.007180132);
   H_ratiohist3107257->SetBinError(3,0.01023861);
   H_ratiohist3107257->SetBinError(4,0.01730955);
   H_ratiohist3107257->SetBinError(5,0.04454632);
   H_ratiohist3107257->SetBinError(6,0.07954758);
   H_ratiohist3107257->SetBinError(7,0.3175379);
   H_ratiohist3107257->SetBinError(8,0.3801159);
   H_ratiohist3107257->SetBinError(9,24.83506);
   H_ratiohist3107257->SetMinimum(0);
   H_ratiohist3107257->SetMaximum(1143144);
   H_ratiohist3107257->SetEntries(1.392216);

   ci = 986;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist3107257->SetFillColor(ci);
   H_ratiohist3107257->SetLineStyle(9);
   H_ratiohist3107257->SetLineWidth(2);
   H_ratiohist3107257->SetMarkerStyle(20);
   H_ratiohist3107257->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   H_ratiohist3107257->GetXaxis()->SetLabelFont(42);
   H_ratiohist3107257->GetXaxis()->SetLabelSize(0);
   H_ratiohist3107257->GetXaxis()->SetTitleSize(0);
   H_ratiohist3107257->GetXaxis()->SetTitleFont(42);
   H_ratiohist3107257->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist3107257->GetYaxis()->SetLabelFont(42);
   H_ratiohist3107257->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist3107257->GetYaxis()->SetTitleFont(42);
   H_ratiohist3107257->GetZaxis()->SetLabelFont(42);
   H_ratiohist3107257->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist3107257->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist3107257->GetZaxis()->SetTitleFont(42);
   H_ratiohist3107257->Draw("HISTsame");
   
   TH1D *MG_ratiohist865258 = new TH1D("MG_ratiohist865258","",20,0,1);
   MG_ratiohist865258->SetBinContent(1,1.11608);
   MG_ratiohist865258->SetBinContent(2,1.056877);
   MG_ratiohist865258->SetBinContent(3,0.9118646);
   MG_ratiohist865258->SetBinContent(4,0.829146);
   MG_ratiohist865258->SetBinContent(5,0.8040457);
   MG_ratiohist865258->SetBinContent(6,0.7931912);
   MG_ratiohist865258->SetBinContent(7,0.8124958);
   MG_ratiohist865258->SetBinContent(8,0.7883192);
   MG_ratiohist865258->SetBinContent(9,0.520076);
   MG_ratiohist865258->SetBinError(1,0.00404793);
   MG_ratiohist865258->SetBinError(2,0.002306126);
   MG_ratiohist865258->SetBinError(3,0.002812825);
   MG_ratiohist865258->SetBinError(4,0.004550803);
   MG_ratiohist865258->SetBinError(5,0.008972275);
   MG_ratiohist865258->SetBinError(6,0.02112598);
   MG_ratiohist865258->SetBinError(7,0.06059883);
   MG_ratiohist865258->SetBinError(8,0.2050172);
   MG_ratiohist865258->SetBinError(9,0.468988);
   MG_ratiohist865258->SetMinimum(0);
   MG_ratiohist865258->SetMaximum(1143144);
   MG_ratiohist865258->SetEntries(218.7907);

   ci = 987;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist865258->SetFillColor(ci);
   MG_ratiohist865258->SetLineStyle(2);
   MG_ratiohist865258->SetLineWidth(2);
   MG_ratiohist865258->SetMarkerStyle(20);
   MG_ratiohist865258->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   MG_ratiohist865258->GetXaxis()->SetLabelFont(42);
   MG_ratiohist865258->GetXaxis()->SetLabelSize(0);
   MG_ratiohist865258->GetXaxis()->SetTitleSize(0);
   MG_ratiohist865258->GetXaxis()->SetTitleFont(42);
   MG_ratiohist865258->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist865258->GetYaxis()->SetLabelFont(42);
   MG_ratiohist865258->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist865258->GetYaxis()->SetTitleFont(42);
   MG_ratiohist865258->GetZaxis()->SetLabelFont(42);
   MG_ratiohist865258->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist865258->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist865258->GetZaxis()->SetTitleFont(42);
   MG_ratiohist865258->Draw("HISTsame");
   
   TH1D *ratiohist8384259 = new TH1D("ratiohist8384259","",20,0,1);
   ratiohist8384259->SetBinContent(1,1.011059);
   ratiohist8384259->SetBinContent(2,1.015412);
   ratiohist8384259->SetBinContent(3,0.9828869);
   ratiohist8384259->SetBinContent(4,0.9545527);
   ratiohist8384259->SetBinContent(5,0.948901);
   ratiohist8384259->SetBinContent(6,0.9045444);
   ratiohist8384259->SetBinContent(7,0.5989893);
   ratiohist8384259->SetBinContent(8,1.083821);
   ratiohist8384259->SetBinContent(9,4.355154);
   ratiohist8384259->SetBinError(1,0.00407558);
   ratiohist8384259->SetBinError(2,0.003053609);
   ratiohist8384259->SetBinError(3,0.00469608);
   ratiohist8384259->SetBinError(4,0.008525044);
   ratiohist8384259->SetBinError(5,0.01552162);
   ratiohist8384259->SetBinError(6,0.03634016);
   ratiohist8384259->SetBinError(7,0.1837125);
   ratiohist8384259->SetBinError(8,0.4213835);
   ratiohist8384259->SetBinError(9,3.335794);
   ratiohist8384259->SetMinimum(0.2);
   ratiohist8384259->SetMaximum(1.8);
   ratiohist8384259->SetEntries(12.39349);

   ci = TColor::GetColor("#ff9900");
   ratiohist8384259->SetFillColor(ci);
   ratiohist8384259->SetLineWidth(2);
   ratiohist8384259->SetMarkerStyle(20);
   ratiohist8384259->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   ratiohist8384259->GetXaxis()->SetNdivisions(505);
   ratiohist8384259->GetXaxis()->SetLabelFont(42);
   ratiohist8384259->GetXaxis()->SetLabelSize(0.14);
   ratiohist8384259->GetXaxis()->SetTitleSize(0.17);
   ratiohist8384259->GetXaxis()->SetTitleOffset(0.98);
   ratiohist8384259->GetXaxis()->SetTitleFont(42);
   ratiohist8384259->GetYaxis()->SetTitle("Data/MC");
   ratiohist8384259->GetYaxis()->CenterTitle(true);
   ratiohist8384259->GetYaxis()->SetNdivisions(105);
   ratiohist8384259->GetYaxis()->SetLabelFont(42);
   ratiohist8384259->GetYaxis()->SetLabelSize(0.14);
   ratiohist8384259->GetYaxis()->SetTitleSize(0.16);
   ratiohist8384259->GetYaxis()->SetTitleOffset(0.2);
   ratiohist8384259->GetYaxis()->SetTitleFont(42);
   ratiohist8384259->GetZaxis()->SetLabelFont(42);
   ratiohist8384259->GetZaxis()->SetLabelSize(0.035);
   ratiohist8384259->GetZaxis()->SetTitleSize(0.035);
   ratiohist8384259->GetZaxis()->SetTitleFont(42);
   ratiohist8384259->Draw("same");
   c1_1->Modified();
   looseSel_Jet_2_tau_2->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-17140.57,1.047619,1301365);
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
   
   TH1D *looseSel_Jet_2_tau_2hdata260 = new TH1D("looseSel_Jet_2_tau_2hdata260","",20,0,1);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(1,190587);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(2,571572);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(3,275715);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(4,85499);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(5,21236);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(6,3864);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(7,512);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(8,43);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(9,3);
   looseSel_Jet_2_tau_2hdata260->SetBinError(1,436.5627);
   looseSel_Jet_2_tau_2hdata260->SetBinError(2,756.0238);
   looseSel_Jet_2_tau_2hdata260->SetBinError(3,525.0857);
   looseSel_Jet_2_tau_2hdata260->SetBinError(4,292.4021);
   looseSel_Jet_2_tau_2hdata260->SetBinError(5,145.7258);
   looseSel_Jet_2_tau_2hdata260->SetBinError(6,62.16108);
   looseSel_Jet_2_tau_2hdata260->SetBinError(7,22.62742);
   looseSel_Jet_2_tau_2hdata260->SetBinError(8,6.557439);
   looseSel_Jet_2_tau_2hdata260->SetBinError(9,1.732051);
   looseSel_Jet_2_tau_2hdata260->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata260->SetMaximum(1143144);
   looseSel_Jet_2_tau_2hdata260->SetEntries(1149031);
   looseSel_Jet_2_tau_2hdata260->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_2hdata260->SetFillColor(ci);
   looseSel_Jet_2_tau_2hdata260->SetLineWidth(2);
   looseSel_Jet_2_tau_2hdata260->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hdata260->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hdata260->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata260->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_2hdata260->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_2hdata260->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata260->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hdata260->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata260->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata260->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata260->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata260->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata260->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hdata260->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata260->Draw("EP");
   
   THStack *test1 = new THStack();
   test1->SetName("test1");
   test1->SetTitle("test1");
   
   TH1F *test1_stack_16 = new TH1F("test1_stack_16","test1",20,0,1);
   test1_stack_16->SetMinimum(-2.775558e-17);
   test1_stack_16->SetMaximum(591041.7);
   test1_stack_16->SetDirectory(0);
   test1_stack_16->SetStats(0);
   test1_stack_16->SetLineStyle(0);
   test1_stack_16->SetMarkerStyle(20);
   test1_stack_16->GetXaxis()->SetLabelFont(42);
   test1_stack_16->GetXaxis()->SetLabelOffset(0.007);
   test1_stack_16->GetXaxis()->SetTitleOffset(1.1);
   test1_stack_16->GetXaxis()->SetTitleFont(42);
   test1_stack_16->GetYaxis()->SetLabelFont(42);
   test1_stack_16->GetYaxis()->SetLabelOffset(0.007);
   test1_stack_16->GetYaxis()->SetTitleOffset(1.25);
   test1_stack_16->GetYaxis()->SetTitleFont(42);
   test1_stack_16->GetZaxis()->SetLabelFont(42);
   test1_stack_16->GetZaxis()->SetLabelOffset(0.007);
   test1_stack_16->GetZaxis()->SetTitleFont(42);
   test1->SetHistogram(test1_stack_16);
   
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(1,3389.984);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(2,4833.914);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(3,1935.717);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(4,586.8111);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(5,133.7305);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(6,20.67127);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(7,3.374902);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(8,0.4218627);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(1,18.98294);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(2,22.6577);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(3,14.32859);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(4,7.8881);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(5,3.767355);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(6,1.484034);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(7,0.596604);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(8,0.2109314);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetEntries(104113);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetDirectory(0);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(1,6827.607);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(2,9376.83);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(3,3845.88);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(4,1184.799);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(5,270.0368);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(6,37.57183);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(7,5.318386);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(8,0.5146825);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(1,34.33918);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(2,40.21117);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(3,25.73584);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(4,14.28598);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(5,6.815091);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(6,2.538869);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(7,0.9552104);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(8,0.2971521);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetEntries(126267);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetDirectory(0);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(1,2209.903);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(2,6200.502);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(3,5847.795);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(4,3313.186);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(5,897.0838);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(6,149.9097);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(7,19.31023);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(8,2.580878);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(9,0.1394843);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(1,17.47837);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(2,29.45031);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(3,28.48087);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(4,21.2788);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(5,11.00587);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(6,4.459213);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(7,1.605452);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(8,0.5969106);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(9,0.1394843);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetEntries(188628);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *looseSel_Jet_2_tau_2hqcd264 = new TH1D("looseSel_Jet_2_tau_2hqcd264","",20,0,1);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(1,176074.9);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(2,542485.6);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(3,268886.1);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(4,84484.91);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(5,21078.72);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(6,4063.611);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(7,826.7697);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(8,36.15703);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(9,0.5493547);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(1,623.7726);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(2,1519.259);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(3,1228.502);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(4,738.4795);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(5,332.0286);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(6,157.1682);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(7,259.4191);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(8,14.17187);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(9,0.3174123);
   looseSel_Jet_2_tau_2hqcd264->SetEntries(3841747);
   looseSel_Jet_2_tau_2hqcd264->SetDirectory(0);
   looseSel_Jet_2_tau_2hqcd264->SetFillColor(36);
   looseSel_Jet_2_tau_2hqcd264->SetLineWidth(2);
   looseSel_Jet_2_tau_2hqcd264->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hqcd264->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hqcd264->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd264->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd264->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd264->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd264->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hqcd264->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd264->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd264->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd264->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd264->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd264->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd264->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd264->GetZaxis()->SetTitleFont(42);
   test1->Add(looseSel_Jet_2_tau_2hqcd,"");
   test1->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(1,301869);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(2,41271.32);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(3,1548.987);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(4,19.95674);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(1,2785.407);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(2,1039.059);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(3,205.6534);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(4,19.95674);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetEntries(17066);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(1,296345.3);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(2,44068.57);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(3,3689.726);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(4,480.9121);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(5,92.46619);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(6,32.28347);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(1,1205.314);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(2,465.4854);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(3,134.3526);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(4,48.90917);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(5,21.51556);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(6,12.36206);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetEntries(82884);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(1,287520);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(2,53163.56);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(3,3596.219);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(4,318.4595);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(5,111.0288);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(1,2744.692);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(2,1180.917);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(3,304.4052);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(4,85.68623);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(5,56.32351);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetEntries(15908);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_2_tau_2hqcd268 = new TH1D("looseSel_Jet_2_tau_2hqcd268","",20,0,1);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(1,188502.4);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(2,562896.9);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(3,280515.5);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(4,89569.7);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(5,22379.57);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(6,4271.764);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(7,854.7732);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(8,39.67445);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(9,0.688839);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(1,625.2498);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(2,1520.246);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(3,1229.185);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(4,738.9662);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(5,332.3023);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(6,157.2589);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(7,259.4266);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(8,14.18911);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(9,0.3467081);
   looseSel_Jet_2_tau_2hqcd268->SetEntries(4260755);
   looseSel_Jet_2_tau_2hqcd268->SetDirectory(0);
   looseSel_Jet_2_tau_2hqcd268->SetFillColor(1);
   looseSel_Jet_2_tau_2hqcd268->SetFillStyle(3013);
   looseSel_Jet_2_tau_2hqcd268->SetLineWidth(2);
   looseSel_Jet_2_tau_2hqcd268->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hqcd268->SetMarkerSize(0);
   looseSel_Jet_2_tau_2hqcd268->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hqcd268->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd268->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd268->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd268->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd268->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hqcd268->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd268->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd268->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd268->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd268->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd268->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd268->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd268->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd268->Draw("E2same");
   
   TH1D *looseSel_Jet_2_tau_2hherwig269 = new TH1D("looseSel_Jet_2_tau_2hherwig269","",20,0,1);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(1,226450.9);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(2,543769.5);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(3,266515.9);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(4,85956.03);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(5,21799.9);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(6,4053.141);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(7,428.7873);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(8,56.71429);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(9,0.1394843);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(1,2218.057);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(2,3644.119);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(3,2588.413);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(4,1466.644);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(5,985.6037);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(6,331.8546);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(7,112.4418);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(8,27.08634);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(9,0.1394843);
   looseSel_Jet_2_tau_2hherwig269->SetEntries(709468);
   looseSel_Jet_2_tau_2hherwig269->SetDirectory(0);

   ci = 984;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_2hherwig269->SetFillColor(ci);
   looseSel_Jet_2_tau_2hherwig269->SetLineStyle(9);
   looseSel_Jet_2_tau_2hherwig269->SetLineWidth(2);
   looseSel_Jet_2_tau_2hherwig269->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hherwig269->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hherwig269->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hherwig269->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hherwig269->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hherwig269->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hherwig269->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hherwig269->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hherwig269->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hherwig269->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hherwig269->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hherwig269->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hherwig269->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hherwig269->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hherwig269->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hherwig269->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_2hmg270 = new TH1D("looseSel_Jet_2_tau_2hmg270","",20,0,1);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(1,170764.6);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(2,540812.1);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(3,302364);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(4,103116.9);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(5,26411.43);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(6,4871.461);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(7,630.1571);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(8,54.54643);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(9,5.768388);
   looseSel_Jet_2_tau_2hmg270->SetBinError(1,480.1971);
   looseSel_Jet_2_tau_2hmg270->SetBinError(2,938.5302);
   looseSel_Jet_2_tau_2hmg270->SetBinError(3,733.7183);
   looseSel_Jet_2_tau_2hmg270->SetBinError(4,442.6595);
   looseSel_Jet_2_tau_2hmg270->SetBinError(5,232.4078);
   looseSel_Jet_2_tau_2hmg270->SetBinError(6,103.4058);
   looseSel_Jet_2_tau_2hmg270->SetBinError(7,37.85971);
   looseSel_Jet_2_tau_2hmg270->SetBinError(8,11.49105);
   looseSel_Jet_2_tau_2hmg270->SetBinError(9,3.995842);
   looseSel_Jet_2_tau_2hmg270->SetEntries(1966122);
   looseSel_Jet_2_tau_2hmg270->SetDirectory(0);

   ci = 985;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_2hmg270->SetFillColor(ci);
   looseSel_Jet_2_tau_2hmg270->SetLineStyle(2);
   looseSel_Jet_2_tau_2hmg270->SetLineWidth(2);
   looseSel_Jet_2_tau_2hmg270->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hmg270->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hmg270->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hmg270->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hmg270->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hmg270->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hmg270->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hmg270->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hmg270->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hmg270->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hmg270->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hmg270->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hmg270->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hmg270->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hmg270->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hmg270->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_2hdata271 = new TH1D("looseSel_Jet_2_tau_2hdata271","",20,0,1);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(1,190587);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(2,571572);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(3,275715);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(4,85499);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(5,21236);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(6,3864);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(7,512);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(8,43);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(9,3);
   looseSel_Jet_2_tau_2hdata271->SetBinError(1,436.5627);
   looseSel_Jet_2_tau_2hdata271->SetBinError(2,756.0238);
   looseSel_Jet_2_tau_2hdata271->SetBinError(3,525.0857);
   looseSel_Jet_2_tau_2hdata271->SetBinError(4,292.4021);
   looseSel_Jet_2_tau_2hdata271->SetBinError(5,145.7258);
   looseSel_Jet_2_tau_2hdata271->SetBinError(6,62.16108);
   looseSel_Jet_2_tau_2hdata271->SetBinError(7,22.62742);
   looseSel_Jet_2_tau_2hdata271->SetBinError(8,6.557439);
   looseSel_Jet_2_tau_2hdata271->SetBinError(9,1.732051);
   looseSel_Jet_2_tau_2hdata271->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata271->SetMaximum(1143144);
   looseSel_Jet_2_tau_2hdata271->SetEntries(1149031);
   looseSel_Jet_2_tau_2hdata271->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_2hdata271->SetFillColor(ci);
   looseSel_Jet_2_tau_2hdata271->SetLineWidth(2);
   looseSel_Jet_2_tau_2hdata271->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hdata271->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hdata271->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata271->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_2hdata271->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_2hdata271->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata271->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hdata271->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata271->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata271->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata271->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata271->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata271->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hdata271->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata271->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_2_tau_2hdata","Data (2016)","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_2hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_2hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_2hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc","Z+jets","F");

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
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

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
   
   TH1D *looseSel_Jet_2_tau_2hdata_copy272 = new TH1D("looseSel_Jet_2_tau_2hdata_copy272","",20,0,1);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(1,190587);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(2,571572);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(3,275715);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(4,85499);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(5,21236);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(6,3864);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(7,512);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(8,43);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(9,3);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(1,436.5627);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(2,756.0238);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(3,525.0857);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(4,292.4021);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(5,145.7258);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(6,62.16108);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(7,22.62742);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(8,6.557439);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(9,1.732051);
   looseSel_Jet_2_tau_2hdata_copy272->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata_copy272->SetMaximum(1143144);
   looseSel_Jet_2_tau_2hdata_copy272->SetEntries(1149031);
   looseSel_Jet_2_tau_2hdata_copy272->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_2hdata_copy272->SetFillColor(ci);
   looseSel_Jet_2_tau_2hdata_copy272->SetLineWidth(2);
   looseSel_Jet_2_tau_2hdata_copy272->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hdata_copy272->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hdata_copy272->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata_copy272->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_2hdata_copy272->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_2hdata_copy272->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata_copy272->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hdata_copy272->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata_copy272->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata_copy272->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata_copy272->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata_copy272->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata_copy272->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hdata_copy272->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata_copy272->Draw("sameaxis");
   c1_2->Modified();
   looseSel_Jet_2_tau_2->cd();
   looseSel_Jet_2_tau_2->Modified();
   looseSel_Jet_2_tau_2->cd();
   looseSel_Jet_2_tau_2->SetSelected(looseSel_Jet_2_tau_2);
}
