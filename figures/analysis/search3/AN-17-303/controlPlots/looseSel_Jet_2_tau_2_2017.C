void looseSel_Jet_2_tau_2_2017()
{
//=========Macro generated from canvas: looseSel_Jet_2_tau_2/looseSel_Jet_2_tau_2
//=========  (Wed Sep  5 11:20:39 2018) by ROOT version6.02/05
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
   
   TH1D *ratiohist3755256 = new TH1D("ratiohist3755256","",20,0,1);
   ratiohist3755256->SetBinContent(1,0.8501324);
   ratiohist3755256->SetBinContent(2,0.9675789);
   ratiohist3755256->SetBinContent(3,1.132611);
   ratiohist3755256->SetBinContent(4,1.223368);
   ratiohist3755256->SetBinContent(5,1.26914);
   ratiohist3755256->SetBinContent(6,1.287229);
   ratiohist3755256->SetBinContent(7,1.767834);
   ratiohist3755256->SetBinContent(8,0.7559628);
   ratiohist3755256->SetBinContent(9,12.44329);
   ratiohist3755256->SetBinError(1,0.008153219);
   ratiohist3755256->SetBinError(2,0.005453991);
   ratiohist3755256->SetBinError(3,0.0053775);
   ratiohist3755256->SetBinError(4,0.01147455);
   ratiohist3755256->SetBinError(5,0.02979573);
   ratiohist3755256->SetBinError(6,0.06456712);
   ratiohist3755256->SetBinError(7,0.2809844);
   ratiohist3755256->SetBinError(8,0.2958227);
   ratiohist3755256->SetBinError(9,15.23986);
   ratiohist3755256->SetMinimum(0.2);
   ratiohist3755256->SetMaximum(1.8);
   ratiohist3755256->SetEntries(2.025454);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist3755256->SetFillColor(ci);
   ratiohist3755256->SetLineWidth(2);
   ratiohist3755256->SetMarkerStyle(20);
   ratiohist3755256->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   ratiohist3755256->GetXaxis()->SetNdivisions(505);
   ratiohist3755256->GetXaxis()->SetLabelFont(42);
   ratiohist3755256->GetXaxis()->SetLabelSize(0.14);
   ratiohist3755256->GetXaxis()->SetTitleSize(0.17);
   ratiohist3755256->GetXaxis()->SetTitleOffset(0.98);
   ratiohist3755256->GetXaxis()->SetTitleFont(42);
   ratiohist3755256->GetYaxis()->SetTitle("Data/MC");
   ratiohist3755256->GetYaxis()->CenterTitle(true);
   ratiohist3755256->GetYaxis()->SetNdivisions(105);
   ratiohist3755256->GetYaxis()->SetLabelFont(42);
   ratiohist3755256->GetYaxis()->SetLabelSize(0.14);
   ratiohist3755256->GetYaxis()->SetTitleSize(0.16);
   ratiohist3755256->GetYaxis()->SetTitleOffset(0.2);
   ratiohist3755256->GetYaxis()->SetTitleFont(42);
   ratiohist3755256->GetZaxis()->SetLabelFont(42);
   ratiohist3755256->GetZaxis()->SetLabelSize(0.035);
   ratiohist3755256->GetZaxis()->SetTitleSize(0.035);
   ratiohist3755256->GetZaxis()->SetTitleFont(42);
   ratiohist3755256->Draw("");
   
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
   0.009358983,
   0.009358983,
   0.005502863,
   0.004410862,
   0.008831739,
   0.0225922,
   0.0478227,
   0.1532841,
   0.3624796,
   1,
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
   Graph_Graph1016->SetMinimum(0);
   Graph_Graph1016->SetMaximum(2.2);
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
   
   TH1D *H_ratiohist8197257 = new TH1D("H_ratiohist8197257","",20,0,1);
   H_ratiohist8197257->SetBinContent(1,0.9253149);
   H_ratiohist8197257->SetBinContent(2,1.039492);
   H_ratiohist8197257->SetBinContent(3,1.004953);
   H_ratiohist8197257->SetBinContent(4,0.9581788);
   H_ratiohist8197257->SetBinContent(5,0.8833578);
   H_ratiohist8197257->SetBinContent(6,0.8369008);
   H_ratiohist8197257->SetBinContent(7,0.6944371);
   H_ratiohist8197257->SetBinContent(8,5.011861);
   H_ratiohist8197257->SetBinContent(9,12.44329);
   H_ratiohist8197257->SetBinError(1,0.0093325);
   H_ratiohist8197257->SetBinError(2,0.007325667);
   H_ratiohist8197257->SetBinError(3,0.01024998);
   H_ratiohist8197257->SetBinError(4,0.01863258);
   H_ratiohist8197257->SetBinError(5,0.03532642);
   H_ratiohist8197257->SetBinError(6,0.1630071);
   H_ratiohist8197257->SetBinError(7,0.1890264);
   H_ratiohist8197257->SetBinError(8,2.927768);
   H_ratiohist8197257->SetBinError(9,15.23986);
   H_ratiohist8197257->SetMinimum(0);
   H_ratiohist8197257->SetMaximum(1341076);
   H_ratiohist8197257->SetEntries(2.351017);

   ci = 986;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist8197257->SetFillColor(ci);
   H_ratiohist8197257->SetLineStyle(9);
   H_ratiohist8197257->SetLineWidth(2);
   H_ratiohist8197257->SetMarkerStyle(20);
   H_ratiohist8197257->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   H_ratiohist8197257->GetXaxis()->SetLabelFont(42);
   H_ratiohist8197257->GetXaxis()->SetLabelSize(0);
   H_ratiohist8197257->GetXaxis()->SetTitleSize(0);
   H_ratiohist8197257->GetXaxis()->SetTitleFont(42);
   H_ratiohist8197257->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist8197257->GetYaxis()->SetLabelFont(42);
   H_ratiohist8197257->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist8197257->GetYaxis()->SetTitleFont(42);
   H_ratiohist8197257->GetZaxis()->SetLabelFont(42);
   H_ratiohist8197257->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist8197257->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist8197257->GetZaxis()->SetTitleFont(42);
   H_ratiohist8197257->Draw("HISTsame");
   
   TH1D *MG_ratiohist6103258 = new TH1D("MG_ratiohist6103258","",20,0,1);
   MG_ratiohist6103258->SetBinContent(1,0.8210572);
   MG_ratiohist6103258->SetBinContent(2,1.018405);
   MG_ratiohist6103258->SetBinContent(3,1.08304);
   MG_ratiohist6103258->SetBinContent(4,1.087556);
   MG_ratiohist6103258->SetBinContent(5,1.172947);
   MG_ratiohist6103258->SetBinContent(6,1.256609);
   MG_ratiohist6103258->SetBinContent(7,1.247406);
   MG_ratiohist6103258->SetBinContent(8,1.975712);
   MG_ratiohist6103258->SetBinContent(9,0.5879726);
   MG_ratiohist6103258->SetBinError(1,0.08167525);
   MG_ratiohist6103258->SetBinError(2,0.02963177);
   MG_ratiohist6103258->SetBinError(3,0.003646864);
   MG_ratiohist6103258->SetBinError(4,0.006733489);
   MG_ratiohist6103258->SetBinError(5,0.01543617);
   MG_ratiohist6103258->SetBinError(6,0.0412542);
   MG_ratiohist6103258->SetBinError(7,0.116887);
   MG_ratiohist6103258->SetBinError(8,0.7439906);
   MG_ratiohist6103258->SetBinError(9,0.5964062);
   MG_ratiohist6103258->SetMinimum(0);
   MG_ratiohist6103258->SetMaximum(1341076);
   MG_ratiohist6103258->SetEntries(112.6912);

   ci = 987;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist6103258->SetFillColor(ci);
   MG_ratiohist6103258->SetLineStyle(2);
   MG_ratiohist6103258->SetLineWidth(2);
   MG_ratiohist6103258->SetMarkerStyle(20);
   MG_ratiohist6103258->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   MG_ratiohist6103258->GetXaxis()->SetLabelFont(42);
   MG_ratiohist6103258->GetXaxis()->SetLabelSize(0);
   MG_ratiohist6103258->GetXaxis()->SetTitleSize(0);
   MG_ratiohist6103258->GetXaxis()->SetTitleFont(42);
   MG_ratiohist6103258->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist6103258->GetYaxis()->SetLabelFont(42);
   MG_ratiohist6103258->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist6103258->GetYaxis()->SetTitleFont(42);
   MG_ratiohist6103258->GetZaxis()->SetLabelFont(42);
   MG_ratiohist6103258->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist6103258->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist6103258->GetZaxis()->SetTitleFont(42);
   MG_ratiohist6103258->Draw("HISTsame");
   
   TH1D *ratiohist3755259 = new TH1D("ratiohist3755259","",20,0,1);
   ratiohist3755259->SetBinContent(1,0.8501324);
   ratiohist3755259->SetBinContent(2,0.9675789);
   ratiohist3755259->SetBinContent(3,1.132611);
   ratiohist3755259->SetBinContent(4,1.223368);
   ratiohist3755259->SetBinContent(5,1.26914);
   ratiohist3755259->SetBinContent(6,1.287229);
   ratiohist3755259->SetBinContent(7,1.767834);
   ratiohist3755259->SetBinContent(8,0.7559628);
   ratiohist3755259->SetBinContent(9,12.44329);
   ratiohist3755259->SetBinError(1,0.008153219);
   ratiohist3755259->SetBinError(2,0.005453991);
   ratiohist3755259->SetBinError(3,0.0053775);
   ratiohist3755259->SetBinError(4,0.01147455);
   ratiohist3755259->SetBinError(5,0.02979573);
   ratiohist3755259->SetBinError(6,0.06456712);
   ratiohist3755259->SetBinError(7,0.2809844);
   ratiohist3755259->SetBinError(8,0.2958227);
   ratiohist3755259->SetBinError(9,15.23986);
   ratiohist3755259->SetMinimum(0.2);
   ratiohist3755259->SetMaximum(1.8);
   ratiohist3755259->SetEntries(2.025454);

   ci = TColor::GetColor("#ff9900");
   ratiohist3755259->SetFillColor(ci);
   ratiohist3755259->SetLineWidth(2);
   ratiohist3755259->SetMarkerStyle(20);
   ratiohist3755259->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   ratiohist3755259->GetXaxis()->SetNdivisions(505);
   ratiohist3755259->GetXaxis()->SetLabelFont(42);
   ratiohist3755259->GetXaxis()->SetLabelSize(0.14);
   ratiohist3755259->GetXaxis()->SetTitleSize(0.17);
   ratiohist3755259->GetXaxis()->SetTitleOffset(0.98);
   ratiohist3755259->GetXaxis()->SetTitleFont(42);
   ratiohist3755259->GetYaxis()->SetTitle("Data/MC");
   ratiohist3755259->GetYaxis()->CenterTitle(true);
   ratiohist3755259->GetYaxis()->SetNdivisions(105);
   ratiohist3755259->GetYaxis()->SetLabelFont(42);
   ratiohist3755259->GetYaxis()->SetLabelSize(0.14);
   ratiohist3755259->GetYaxis()->SetTitleSize(0.16);
   ratiohist3755259->GetYaxis()->SetTitleOffset(0.2);
   ratiohist3755259->GetYaxis()->SetTitleFont(42);
   ratiohist3755259->GetZaxis()->SetLabelFont(42);
   ratiohist3755259->GetZaxis()->SetLabelSize(0.035);
   ratiohist3755259->GetZaxis()->SetTitleSize(0.035);
   ratiohist3755259->GetZaxis()->SetTitleFont(42);
   ratiohist3755259->Draw("same");
   c1_1->Modified();
   looseSel_Jet_2_tau_2->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-20108.41,1.047619,1526692);
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
   looseSel_Jet_2_tau_2hdata260->SetBinContent(1,227912);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(2,670538);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(3,323975);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(4,100252);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(5,24530);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(6,4367);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(7,566);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(8,46);
   looseSel_Jet_2_tau_2hdata260->SetBinContent(9,2);
   looseSel_Jet_2_tau_2hdata260->SetBinError(1,477.4013);
   looseSel_Jet_2_tau_2hdata260->SetBinError(2,818.8638);
   looseSel_Jet_2_tau_2hdata260->SetBinError(3,569.188);
   looseSel_Jet_2_tau_2hdata260->SetBinError(4,316.626);
   looseSel_Jet_2_tau_2hdata260->SetBinError(5,156.6206);
   looseSel_Jet_2_tau_2hdata260->SetBinError(6,66.08328);
   looseSel_Jet_2_tau_2hdata260->SetBinError(7,23.79075);
   looseSel_Jet_2_tau_2hdata260->SetBinError(8,6.78233);
   looseSel_Jet_2_tau_2hdata260->SetBinError(9,1.414214);
   looseSel_Jet_2_tau_2hdata260->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata260->SetMaximum(1341076);
   looseSel_Jet_2_tau_2hdata260->SetEntries(1352188);
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
   test1_stack_16->SetMinimum(0);
   test1_stack_16->SetMaximum(727656.3);
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
   
   
   TH1D *resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261 = new TH1D("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261","",20,0,1);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(1,3906.312);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(2,5570.168);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(3,2230.546);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(4,676.1883);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(5,154.099);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(6,23.81972);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(7,3.888933);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinContent(8,0.4861167);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(1,21.87424);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(2,26.1087);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(3,16.51098);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(4,9.089537);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(5,4.341161);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(6,1.710067);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(7,0.6874728);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetBinError(8,0.2430583);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetEntries(104113);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetDirectory(0);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetFillColor(47);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetLineWidth(2);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc261->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262 = new TH1D("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262","",20,0,1);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(1,7867.52);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(2,10805.01);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(3,4431.645);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(4,1365.256);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(5,311.1661);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(6,43.29439);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(7,6.12843);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinContent(8,0.5930738);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(1,39.56938);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(2,46.33573);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(3,29.65567);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(4,16.46188);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(5,7.853098);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(6,2.925564);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(7,1.100698);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetBinError(8,0.3424113);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetEntries(126267);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetDirectory(0);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetFillColor(21);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc262->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263 = new TH1D("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263","",20,0,1);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(1,2546.494);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(2,7144.9);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(3,6738.472);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(4,3817.817);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(5,1033.719);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(6,172.7424);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(7,22.25137);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(8,2.973972);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinContent(9,0.1607292);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(1,20.14051);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(2,33.93589);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(3,32.81879);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(4,24.51977);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(5,12.68217);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(6,5.138395);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(7,1.849979);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(8,0.687826);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetBinError(9,0.1607292);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetEntries(188628);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetFillColor(ci);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetLineWidth(2);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc263->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *looseSel_Jet_2_tau_2hqcd264 = new TH1D("looseSel_Jet_2_tau_2hqcd264","",20,0,1);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(1,253769.7);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(2,669486);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(3,272642);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(4,76088.28);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(5,17829.06);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(6,3152.701);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(7,287.8972);
   looseSel_Jet_2_tau_2hqcd264->SetBinContent(8,56.79639);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(1,2508.562);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(2,3812.995);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(3,1260.811);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(4,723.0794);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(5,436.3866);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(6,162.1245);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(7,49.02429);
   looseSel_Jet_2_tau_2hqcd264->SetBinError(8,22.042);
   looseSel_Jet_2_tau_2hqcd264->SetEntries(5601853);
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
   
   TH1D *resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265 = new TH1D("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265","",20,0,1);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(1,355241.7);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(2,48568.39);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(3,1822.859);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinContent(4,23.48523);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(1,3277.887);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(2,1222.773);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(3,242.0145);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetBinError(4,23.48523);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetEntries(17066);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetLineColor(ci);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig265->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(1,348741.4);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(2,51860.21);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(3,4342.096);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(4,565.9408);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(5,108.8149);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinContent(6,37.99142);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(1,1418.423);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(2,547.7866);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(3,158.1071);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(4,57.55666);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(5,25.31967);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetBinError(6,14.54776);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetEntries(82884);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetLineStyle(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig266->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(1,338355.7);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(2,62563.26);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(3,4232.056);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(4,374.7654);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinContent(5,130.6595);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(1,3229.974);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(2,1389.712);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(3,358.2262);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(4,100.8362);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetBinError(5,66.28191);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetEntries(15908);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetLineStyle(4);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig267->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_2_tau_2hqcd268 = new TH1D("looseSel_Jet_2_tau_2hqcd268","",20,0,1);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(1,268090);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(2,693006);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(3,286042.6);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(4,81947.54);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(5,19328.04);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(6,3392.557);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(7,320.1659);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(8,60.84955);
   looseSel_Jet_2_tau_2hqcd268->SetBinContent(9,0.1607292);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(1,2509.05);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(2,3813.517);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(3,1261.695);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(4,723.7393);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(5,436.663);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(6,162.2413);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(7,49.07634);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(8,22.05672);
   looseSel_Jet_2_tau_2hqcd268->SetBinError(9,0.1607292);
   looseSel_Jet_2_tau_2hqcd268->SetEntries(6020861);
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
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(1,246307.5);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(2,645063);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(3,322378.4);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(4,104627.6);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(5,27769.04);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(6,5218.062);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(7,815.0486);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(8,9.178227);
   looseSel_Jet_2_tau_2hherwig269->SetBinContent(9,0.1607292);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(1,2430.031);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(2,4477.212);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(3,3238.938);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(4,2007.557);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(5,1096.268);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(6,1013.274);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(7,219.1959);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(8,5.188035);
   looseSel_Jet_2_tau_2hherwig269->SetBinError(9,0.1607292);
   looseSel_Jet_2_tau_2hherwig269->SetEntries(546959);
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
   looseSel_Jet_2_tau_2hmg270->SetBinContent(1,277583.6);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(2,658419.9);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(3,299134.8);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(4,92181.01);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(5,20913.13);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(6,3475.227);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(7,453.7417);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(8,23.28275);
   looseSel_Jet_2_tau_2hmg270->SetBinContent(9,3.401519);
   looseSel_Jet_2_tau_2hmg270->SetBinError(1,27606.7);
   looseSel_Jet_2_tau_2hmg270->SetBinError(2,19140.67);
   looseSel_Jet_2_tau_2hmg270->SetBinError(3,859.2874);
   looseSel_Jet_2_tau_2hmg270->SetBinError(4,490.889);
   looseSel_Jet_2_tau_2hmg270->SetBinError(5,240.6584);
   looseSel_Jet_2_tau_2hmg270->SetBinError(6,101.2482);
   looseSel_Jet_2_tau_2hmg270->SetBinError(7,37.99979);
   looseSel_Jet_2_tau_2hmg270->SetBinError(8,8.067554);
   looseSel_Jet_2_tau_2hmg270->SetBinError(9,2.473755);
   looseSel_Jet_2_tau_2hmg270->SetEntries(1729089);
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
   looseSel_Jet_2_tau_2hdata271->SetBinContent(1,227912);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(2,670538);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(3,323975);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(4,100252);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(5,24530);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(6,4367);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(7,566);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(8,46);
   looseSel_Jet_2_tau_2hdata271->SetBinContent(9,2);
   looseSel_Jet_2_tau_2hdata271->SetBinError(1,477.4013);
   looseSel_Jet_2_tau_2hdata271->SetBinError(2,818.8638);
   looseSel_Jet_2_tau_2hdata271->SetBinError(3,569.188);
   looseSel_Jet_2_tau_2hdata271->SetBinError(4,316.626);
   looseSel_Jet_2_tau_2hdata271->SetBinError(5,156.6206);
   looseSel_Jet_2_tau_2hdata271->SetBinError(6,66.08328);
   looseSel_Jet_2_tau_2hdata271->SetBinError(7,23.79075);
   looseSel_Jet_2_tau_2hdata271->SetBinError(8,6.78233);
   looseSel_Jet_2_tau_2hdata271->SetBinError(9,1.414214);
   looseSel_Jet_2_tau_2hdata271->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata271->SetMaximum(1341076);
   looseSel_Jet_2_tau_2hdata271->SetEntries(1352188);
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
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_2_tau_2hdata","Data (2017)","LEP");
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
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc","Z+jets","F");

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
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

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
   
   TH1D *looseSel_Jet_2_tau_2hdata_copy272 = new TH1D("looseSel_Jet_2_tau_2hdata_copy272","",20,0,1);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(1,227912);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(2,670538);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(3,323975);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(4,100252);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(5,24530);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(6,4367);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(7,566);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(8,46);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinContent(9,2);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(1,477.4013);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(2,818.8638);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(3,569.188);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(4,316.626);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(5,156.6206);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(6,66.08328);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(7,23.79075);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(8,6.78233);
   looseSel_Jet_2_tau_2hdata_copy272->SetBinError(9,1.414214);
   looseSel_Jet_2_tau_2hdata_copy272->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata_copy272->SetMaximum(1341076);
   looseSel_Jet_2_tau_2hdata_copy272->SetEntries(1352188);
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
