void looseSel_Jet_1_tau_1_2016()
{
//=========Macro generated from canvas: looseSel_Jet_1_tau_1/looseSel_Jet_1_tau_1
//=========  (Wed Sep  5 11:23:18 2018) by ROOT version6.02/05
   TCanvas *looseSel_Jet_1_tau_1 = new TCanvas("looseSel_Jet_1_tau_1", "looseSel_Jet_1_tau_1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   looseSel_Jet_1_tau_1->SetHighLightColor(2);
   looseSel_Jet_1_tau_1->Range(0,0,1,1);
   looseSel_Jet_1_tau_1->SetFillColor(0);
   looseSel_Jet_1_tau_1->SetBorderMode(0);
   looseSel_Jet_1_tau_1->SetBorderSize(2);
   looseSel_Jet_1_tau_1->SetLeftMargin(0.16);
   looseSel_Jet_1_tau_1->SetRightMargin(0.02);
   looseSel_Jet_1_tau_1->SetTopMargin(0.05);
   looseSel_Jet_1_tau_1->SetBottomMargin(0.13);
   looseSel_Jet_1_tau_1->SetFrameFillStyle(0);
   looseSel_Jet_1_tau_1->SetFrameBorderMode(0);
  
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
   
   TH1D *ratiohist8947273 = new TH1D("ratiohist8947273","",20,0,1);
   ratiohist8947273->SetBinContent(1,0.8082916);
   ratiohist8947273->SetBinContent(2,1.021243);
   ratiohist8947273->SetBinContent(3,1.01452);
   ratiohist8947273->SetBinContent(4,1.014248);
   ratiohist8947273->SetBinContent(5,0.9920807);
   ratiohist8947273->SetBinContent(6,0.9969437);
   ratiohist8947273->SetBinContent(7,0.9691311);
   ratiohist8947273->SetBinContent(8,0.9572511);
   ratiohist8947273->SetBinContent(9,0.954379);
   ratiohist8947273->SetBinContent(10,0.8831049);
   ratiohist8947273->SetBinContent(11,0.8302221);
   ratiohist8947273->SetBinContent(12,1.091292);
   ratiohist8947273->SetBinContent(13,1.161107);
   ratiohist8947273->SetBinError(1,0.03072458);
   ratiohist8947273->SetBinError(2,0.006275904);
   ratiohist8947273->SetBinError(3,0.003751634);
   ratiohist8947273->SetBinError(4,0.003679438);
   ratiohist8947273->SetBinError(5,0.005106945);
   ratiohist8947273->SetBinError(6,0.006432459);
   ratiohist8947273->SetBinError(7,0.009207254);
   ratiohist8947273->SetBinError(8,0.0137506);
   ratiohist8947273->SetBinError(9,0.02129256);
   ratiohist8947273->SetBinError(10,0.05285766);
   ratiohist8947273->SetBinError(11,0.1295727);
   ratiohist8947273->SetBinError(12,0.3020167);
   ratiohist8947273->SetBinError(13,1.096105);
   ratiohist8947273->SetMinimum(0.2);
   ratiohist8947273->SetMaximum(1.8);
   ratiohist8947273->SetEntries(122.6233);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist8947273->SetFillColor(ci);
   ratiohist8947273->SetLineWidth(2);
   ratiohist8947273->SetMarkerStyle(20);
   ratiohist8947273->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   ratiohist8947273->GetXaxis()->SetNdivisions(505);
   ratiohist8947273->GetXaxis()->SetLabelFont(42);
   ratiohist8947273->GetXaxis()->SetLabelSize(0.14);
   ratiohist8947273->GetXaxis()->SetTitleSize(0.17);
   ratiohist8947273->GetXaxis()->SetTitleOffset(0.98);
   ratiohist8947273->GetXaxis()->SetTitleFont(42);
   ratiohist8947273->GetYaxis()->SetTitle("Data/MC");
   ratiohist8947273->GetYaxis()->CenterTitle(true);
   ratiohist8947273->GetYaxis()->SetNdivisions(105);
   ratiohist8947273->GetYaxis()->SetLabelFont(42);
   ratiohist8947273->GetYaxis()->SetLabelSize(0.14);
   ratiohist8947273->GetYaxis()->SetTitleSize(0.16);
   ratiohist8947273->GetYaxis()->SetTitleOffset(0.2);
   ratiohist8947273->GetYaxis()->SetTitleFont(42);
   ratiohist8947273->GetZaxis()->SetLabelFont(42);
   ratiohist8947273->GetZaxis()->SetLabelSize(0.035);
   ratiohist8947273->GetZaxis()->SetTitleSize(0.035);
   ratiohist8947273->GetZaxis()->SetTitleFont(42);
   ratiohist8947273->Draw("");
   
   Double_t Graph0_fx1017[21] = {
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
   Double_t Graph0_fy1017[21] = {
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
   Double_t Graph0_fex1017[21] = {
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
   Double_t Graph0_fey1017[21] = {
   0.01496302,
   0.01496302,
   0.005115624,
   0.003160204,
   0.003105329,
   0.004647367,
   0.00585014,
   0.008855929,
   0.01363448,
   0.02135525,
   0.05886967,
   0.1537612,
   0.2593176,
   0.625434,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,-0.1575,1.1325);
   Graph_Graph1017->SetMinimum(0.2494792);
   Graph_Graph1017->SetMaximum(1.750521);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);
   Graph_Graph1017->SetLineStyle(0);
   Graph_Graph1017->SetMarkerStyle(20);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist2805274 = new TH1D("H_ratiohist2805274","",20,0,1);
   H_ratiohist2805274->SetBinContent(1,0.7132965);
   H_ratiohist2805274->SetBinContent(2,0.8805032);
   H_ratiohist2805274->SetBinContent(3,1.010862);
   H_ratiohist2805274->SetBinContent(4,1.010755);
   H_ratiohist2805274->SetBinContent(5,1.027522);
   H_ratiohist2805274->SetBinContent(6,1.011711);
   H_ratiohist2805274->SetBinContent(7,1.032449);
   H_ratiohist2805274->SetBinContent(8,0.9340168);
   H_ratiohist2805274->SetBinContent(9,0.9765312);
   H_ratiohist2805274->SetBinContent(10,1.021456);
   H_ratiohist2805274->SetBinContent(11,1.185936);
   H_ratiohist2805274->SetBinContent(12,1.619201);
   H_ratiohist2805274->SetBinContent(13,6.188713);
   H_ratiohist2805274->SetBinError(1,0.04736148);
   H_ratiohist2805274->SetBinError(2,0.01707688);
   H_ratiohist2805274->SetBinError(3,0.008038269);
   H_ratiohist2805274->SetBinError(4,0.008756604);
   H_ratiohist2805274->SetBinError(5,0.01068729);
   H_ratiohist2805274->SetBinError(6,0.01426265);
   H_ratiohist2805274->SetBinError(7,0.01835934);
   H_ratiohist2805274->SetBinError(8,0.03282051);
   H_ratiohist2805274->SetBinError(9,0.04834659);
   H_ratiohist2805274->SetBinError(10,0.07399162);
   H_ratiohist2805274->SetBinError(11,0.1944062);
   H_ratiohist2805274->SetBinError(12,0.9643845);
   H_ratiohist2805274->SetBinError(13,5.66137);
   H_ratiohist2805274->SetMinimum(0);
   H_ratiohist2805274->SetMaximum(568584);
   H_ratiohist2805274->SetEntries(10.48834);

   ci = 990;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist2805274->SetFillColor(ci);
   H_ratiohist2805274->SetLineStyle(9);
   H_ratiohist2805274->SetLineWidth(2);
   H_ratiohist2805274->SetMarkerStyle(20);
   H_ratiohist2805274->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   H_ratiohist2805274->GetXaxis()->SetLabelFont(42);
   H_ratiohist2805274->GetXaxis()->SetLabelSize(0);
   H_ratiohist2805274->GetXaxis()->SetTitleSize(0);
   H_ratiohist2805274->GetXaxis()->SetTitleFont(42);
   H_ratiohist2805274->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist2805274->GetYaxis()->SetLabelFont(42);
   H_ratiohist2805274->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist2805274->GetYaxis()->SetTitleFont(42);
   H_ratiohist2805274->GetZaxis()->SetLabelFont(42);
   H_ratiohist2805274->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist2805274->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist2805274->GetZaxis()->SetTitleFont(42);
   H_ratiohist2805274->Draw("HISTsame");
   
   TH1D *MG_ratiohist1672275 = new TH1D("MG_ratiohist1672275","",20,0,1);
   MG_ratiohist1672275->SetBinContent(1,0.7856849);
   MG_ratiohist1672275->SetBinContent(2,1.081905);
   MG_ratiohist1672275->SetBinContent(3,1.048869);
   MG_ratiohist1672275->SetBinContent(4,0.9879084);
   MG_ratiohist1672275->SetBinContent(5,0.9457628);
   MG_ratiohist1672275->SetBinContent(6,0.9575626);
   MG_ratiohist1672275->SetBinContent(7,0.9790505);
   MG_ratiohist1672275->SetBinContent(8,1.036258);
   MG_ratiohist1672275->SetBinContent(9,1.070807);
   MG_ratiohist1672275->SetBinContent(10,1.082835);
   MG_ratiohist1672275->SetBinContent(11,1.049154);
   MG_ratiohist1672275->SetBinContent(12,1.198348);
   MG_ratiohist1672275->SetBinContent(13,0.8394084);
   MG_ratiohist1672275->SetBinError(1,0.03028455);
   MG_ratiohist1672275->SetBinError(2,0.005536361);
   MG_ratiohist1672275->SetBinError(3,0.003216123);
   MG_ratiohist1672275->SetBinError(4,0.003004491);
   MG_ratiohist1672275->SetBinError(5,0.003414576);
   MG_ratiohist1672275->SetBinError(6,0.004319953);
   MG_ratiohist1672275->SetBinError(7,0.005700002);
   MG_ratiohist1672275->SetBinError(8,0.008200014);
   MG_ratiohist1672275->SetBinError(9,0.01247533);
   MG_ratiohist1672275->SetBinError(10,0.02166233);
   MG_ratiohist1672275->SetBinError(11,0.05196272);
   MG_ratiohist1672275->SetBinError(12,0.2175667);
   MG_ratiohist1672275->SetBinError(13,0.9397337);
   MG_ratiohist1672275->SetMinimum(0);
   MG_ratiohist1672275->SetMaximum(568584);
   MG_ratiohist1672275->SetEntries(182.5482);

   ci = 991;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist1672275->SetFillColor(ci);
   MG_ratiohist1672275->SetLineStyle(2);
   MG_ratiohist1672275->SetLineWidth(2);
   MG_ratiohist1672275->SetMarkerStyle(20);
   MG_ratiohist1672275->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   MG_ratiohist1672275->GetXaxis()->SetLabelFont(42);
   MG_ratiohist1672275->GetXaxis()->SetLabelSize(0);
   MG_ratiohist1672275->GetXaxis()->SetTitleSize(0);
   MG_ratiohist1672275->GetXaxis()->SetTitleFont(42);
   MG_ratiohist1672275->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist1672275->GetYaxis()->SetLabelFont(42);
   MG_ratiohist1672275->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist1672275->GetYaxis()->SetTitleFont(42);
   MG_ratiohist1672275->GetZaxis()->SetLabelFont(42);
   MG_ratiohist1672275->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist1672275->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist1672275->GetZaxis()->SetTitleFont(42);
   MG_ratiohist1672275->Draw("HISTsame");
   
   TH1D *ratiohist8947276 = new TH1D("ratiohist8947276","",20,0,1);
   ratiohist8947276->SetBinContent(1,0.8082916);
   ratiohist8947276->SetBinContent(2,1.021243);
   ratiohist8947276->SetBinContent(3,1.01452);
   ratiohist8947276->SetBinContent(4,1.014248);
   ratiohist8947276->SetBinContent(5,0.9920807);
   ratiohist8947276->SetBinContent(6,0.9969437);
   ratiohist8947276->SetBinContent(7,0.9691311);
   ratiohist8947276->SetBinContent(8,0.9572511);
   ratiohist8947276->SetBinContent(9,0.954379);
   ratiohist8947276->SetBinContent(10,0.8831049);
   ratiohist8947276->SetBinContent(11,0.8302221);
   ratiohist8947276->SetBinContent(12,1.091292);
   ratiohist8947276->SetBinContent(13,1.161107);
   ratiohist8947276->SetBinError(1,0.03072458);
   ratiohist8947276->SetBinError(2,0.006275904);
   ratiohist8947276->SetBinError(3,0.003751634);
   ratiohist8947276->SetBinError(4,0.003679438);
   ratiohist8947276->SetBinError(5,0.005106945);
   ratiohist8947276->SetBinError(6,0.006432459);
   ratiohist8947276->SetBinError(7,0.009207254);
   ratiohist8947276->SetBinError(8,0.0137506);
   ratiohist8947276->SetBinError(9,0.02129256);
   ratiohist8947276->SetBinError(10,0.05285766);
   ratiohist8947276->SetBinError(11,0.1295727);
   ratiohist8947276->SetBinError(12,0.3020167);
   ratiohist8947276->SetBinError(13,1.096105);
   ratiohist8947276->SetMinimum(0.2);
   ratiohist8947276->SetMaximum(1.8);
   ratiohist8947276->SetEntries(122.6233);

   ci = TColor::GetColor("#ff9900");
   ratiohist8947276->SetFillColor(ci);
   ratiohist8947276->SetLineWidth(2);
   ratiohist8947276->SetMarkerStyle(20);
   ratiohist8947276->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   ratiohist8947276->GetXaxis()->SetNdivisions(505);
   ratiohist8947276->GetXaxis()->SetLabelFont(42);
   ratiohist8947276->GetXaxis()->SetLabelSize(0.14);
   ratiohist8947276->GetXaxis()->SetTitleSize(0.17);
   ratiohist8947276->GetXaxis()->SetTitleOffset(0.98);
   ratiohist8947276->GetXaxis()->SetTitleFont(42);
   ratiohist8947276->GetYaxis()->SetTitle("Data/MC");
   ratiohist8947276->GetYaxis()->CenterTitle(true);
   ratiohist8947276->GetYaxis()->SetNdivisions(105);
   ratiohist8947276->GetYaxis()->SetLabelFont(42);
   ratiohist8947276->GetYaxis()->SetLabelSize(0.14);
   ratiohist8947276->GetYaxis()->SetTitleSize(0.16);
   ratiohist8947276->GetYaxis()->SetTitleOffset(0.2);
   ratiohist8947276->GetYaxis()->SetTitleFont(42);
   ratiohist8947276->GetZaxis()->SetLabelFont(42);
   ratiohist8947276->GetZaxis()->SetLabelSize(0.035);
   ratiohist8947276->GetZaxis()->SetTitleSize(0.035);
   ratiohist8947276->GetZaxis()->SetTitleFont(42);
   ratiohist8947276->Draw("same");
   c1_1->Modified();
   looseSel_Jet_1_tau_1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-8525.481,1.047619,647280.7);
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
   
   TH1D *looseSel_Jet_1_tau_1hdata277 = new TH1D("looseSel_Jet_1_tau_1hdata277","",20,0,1);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(1,819);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(2,86238);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(3,271158);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(4,284292);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(5,204044);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(6,135017);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(7,84513);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(8,48912);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(9,23977);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(10,8554);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(11,1398);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(12,107);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(13,2);
   looseSel_Jet_1_tau_1hdata277->SetBinError(1,28.61818);
   looseSel_Jet_1_tau_1hdata277->SetBinError(2,293.6631);
   looseSel_Jet_1_tau_1hdata277->SetBinError(3,520.7283);
   looseSel_Jet_1_tau_1hdata277->SetBinError(4,533.1904);
   looseSel_Jet_1_tau_1hdata277->SetBinError(5,451.7123);
   looseSel_Jet_1_tau_1hdata277->SetBinError(6,367.4466);
   looseSel_Jet_1_tau_1hdata277->SetBinError(7,290.7112);
   looseSel_Jet_1_tau_1hdata277->SetBinError(8,221.1606);
   looseSel_Jet_1_tau_1hdata277->SetBinError(9,154.8451);
   looseSel_Jet_1_tau_1hdata277->SetBinError(10,92.48784);
   looseSel_Jet_1_tau_1hdata277->SetBinError(11,37.38984);
   looseSel_Jet_1_tau_1hdata277->SetBinError(12,10.34408);
   looseSel_Jet_1_tau_1hdata277->SetBinError(13,1.414214);
   looseSel_Jet_1_tau_1hdata277->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata277->SetMaximum(568584);
   looseSel_Jet_1_tau_1hdata277->SetEntries(1149031);
   looseSel_Jet_1_tau_1hdata277->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_1hdata277->SetFillColor(ci);
   looseSel_Jet_1_tau_1hdata277->SetLineWidth(2);
   looseSel_Jet_1_tau_1hdata277->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hdata277->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hdata277->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata277->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_1hdata277->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_1hdata277->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata277->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hdata277->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata277->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata277->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata277->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata277->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata277->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hdata277->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata277->Draw("EP");
   
   THStack *test1 = new THStack();
   test1->SetName("test1");
   test1->SetTitle("test1");
   
   TH1F *test1_stack_17 = new TH1F("test1_stack_17","test1",20,0,1);
   test1_stack_17->SetMinimum(0);
   test1_stack_17->SetMaximum(294313.3);
   test1_stack_17->SetDirectory(0);
   test1_stack_17->SetStats(0);
   test1_stack_17->SetLineStyle(0);
   test1_stack_17->SetMarkerStyle(20);
   test1_stack_17->GetXaxis()->SetLabelFont(42);
   test1_stack_17->GetXaxis()->SetLabelOffset(0.007);
   test1_stack_17->GetXaxis()->SetTitleOffset(1.1);
   test1_stack_17->GetXaxis()->SetTitleFont(42);
   test1_stack_17->GetYaxis()->SetLabelFont(42);
   test1_stack_17->GetYaxis()->SetLabelOffset(0.007);
   test1_stack_17->GetYaxis()->SetTitleOffset(1.25);
   test1_stack_17->GetYaxis()->SetTitleFont(42);
   test1_stack_17->GetZaxis()->SetLabelFont(42);
   test1_stack_17->GetZaxis()->SetLabelOffset(0.007);
   test1_stack_17->GetZaxis()->SetTitleFont(42);
   test1->SetHistogram(test1_stack_17);
   
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(1,19.19475);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(2,1194.188);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(3,3139.397);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(4,2779.97);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(5,1685.658);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(6,977.3505);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(7,587.5493);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(8,321.4594);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(9,142.8005);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(10,49.14701);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(11,7.382598);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(12,0.4218627);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(13,0.1054657);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(1,1.47652);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(2,11.27793);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(3,18.26871);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(4,17.18185);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(5,13.36754);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(6,10.17457);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(7,7.893034);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(8,5.832167);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(9,3.892241);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(10,2.281572);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(11,0.8823892);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(12,0.2109314);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(13,0.1054657);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetEntries(104113);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetDirectory(0);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(1,43.57646);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(2,2598.975);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(3,6196.263);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(4,5249.59);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(5,3212.134);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(6,1978.783);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(7,1195.951);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(8,664.2836);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(9,297.4865);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(10,94.18691);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(11,15.61204);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(12,1.715608);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(1,2.776955);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(2,21.20217);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(3,32.70519);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(4,30.07408);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(5,23.52136);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(6,18.46333);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(7,14.35279);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(8,10.69472);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(9,7.164591);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(10,4.034417);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(11,1.636586);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(12,0.542523);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetEntries(126267);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetDirectory(0);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(1,2.479656);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(2,398.0482);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(3,1814.524);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(4,3166.101);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(5,3889.793);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(6,3830.62);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(7,2966.852);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(8,1677.311);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(9,656.4099);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(10,193.2734);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(11,39.6558);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(12,5.123562);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(13,0.2177033);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(1,0.6219773);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(2,7.437054);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(3,15.94285);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(4,21.15708);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(5,23.2964);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(6,22.96487);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(7,20.14874);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(8,15.07718);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(9,9.390369);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(10,5.072763);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(11,2.276494);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(12,0.8463348);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(13,0.1550998);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetEntries(188628);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *looseSel_Jet_1_tau_1hqcd281 = new TH1D("looseSel_Jet_1_tau_1hqcd281","",20,0,1);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(1,947.9974);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(2,80252.93);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(3,256127.1);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(4,269102.7);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(5,196885.2);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(6,128644.2);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(7,82454.57);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(8,48433.26);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(9,24026.44);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(10,9349.672);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(11,1621.236);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(12,90.7879);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(13,1.399325);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(1,14.8184);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(2,431.2523);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(3,843.6687);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(4,869.4717);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(5,955.17);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(6,791.6763);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(7,771.8438);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(8,696.4021);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(9,536.3667);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(10,570.1866);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(11,258.8997);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(12,25.40506);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(13,1.060853);
   looseSel_Jet_1_tau_1hqcd281->SetEntries(3841747);
   looseSel_Jet_1_tau_1hqcd281->SetDirectory(0);
   looseSel_Jet_1_tau_1hqcd281->SetFillColor(36);
   looseSel_Jet_1_tau_1hqcd281->SetLineWidth(2);
   looseSel_Jet_1_tau_1hqcd281->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hqcd281->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hqcd281->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd281->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd281->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd281->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd281->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hqcd281->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd281->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd281->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd281->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd281->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd281->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd281->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd281->GetZaxis()->SetTitleFont(42);
   test1->Add(looseSel_Jet_1_tau_1hqcd,"");
   test1->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(1,3346.736);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(2,184315.1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(3,149852);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(4,6441.624);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(5,596.483);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(6,93.97324);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(7,14.30885);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(8,41.16885);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(10,7.92389);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(1,293.1886);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(2,2176.596);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(3,1968.329);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(4,406.9786);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(5,119.0804);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(6,46.64757);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(7,8.950788);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(8,29.17318);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(10,7.92389);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetEntries(17066);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(1,5592.166);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(2,209365);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(3,113508.1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(4,10704.99);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(5,2825.599);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(6,1234.5);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(7,703.3343);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(8,434.7463);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(9,248.9351);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(10,65.36935);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(11,26.52526);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(1,165.5641);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(2,1013.378);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(3,746.3059);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(4,228.3248);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(5,117.6474);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(6,77.51719);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(7,58.85446);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(8,45.39103);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(9,35.11302);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(10,17.87458);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(11,11.85654);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetEntries(82884);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(1,2520.289);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(2,159515.6);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(3,164168);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(4,15436.79);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(5,1919.782);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(6,562.4361);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(7,250.963);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(8,148.4832);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(9,63.98367);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(10,103.5289);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(11,19.41883);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(1,258.0075);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(2,2047.522);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(3,2070.503);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(4,636.8943);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(5,219.55);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(6,125.4363);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(7,85.51618);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(8,58.84176);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(9,41.47954);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(10,52.31339);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(11,19.41883);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetEntries(15908);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_1_tau_1hqcd285 = new TH1D("looseSel_Jet_1_tau_1hqcd285","",20,0,1);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(1,1013.248);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(2,84444.14);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(3,267277.2);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(4,280298.4);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(5,205672.8);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(6,135430.9);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(7,87204.92);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(8,51096.31);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(9,25123.14);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(10,9686.279);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(11,1683.887);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(12,98.04893);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(13,1.722494);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(1,15.16125);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(2,431.9844);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(3,844.6505);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(4,870.4185);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(5,955.837);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(6,792.2898);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(7,772.2805);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(8,696.6718);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(9,536.5108);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(10,570.228);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(11,258.9164);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(12,25.42581);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(13,1.077306);
   looseSel_Jet_1_tau_1hqcd285->SetEntries(4260755);
   looseSel_Jet_1_tau_1hqcd285->SetDirectory(0);
   looseSel_Jet_1_tau_1hqcd285->SetFillColor(1);
   looseSel_Jet_1_tau_1hqcd285->SetFillStyle(3013);
   looseSel_Jet_1_tau_1hqcd285->SetLineWidth(2);
   looseSel_Jet_1_tau_1hqcd285->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hqcd285->SetMarkerSize(0);
   looseSel_Jet_1_tau_1hqcd285->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hqcd285->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd285->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd285->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd285->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd285->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hqcd285->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd285->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd285->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd285->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd285->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd285->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd285->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd285->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd285->Draw("E2same");
   
   TH1D *looseSel_Jet_1_tau_1hherwig286 = new TH1D("looseSel_Jet_1_tau_1hherwig286","",20,0,1);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(1,1148.19);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(2,97941.73);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(3,268244.3);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(4,281267);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(5,198578.7);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(6,133454.1);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(7,81856.81);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(8,52367.37);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(9,24553.24);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(10,8374.317);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(11,1178.815);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(12,66.08199);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(13,0.323169);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(1,64.82646);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(2,1870.018);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(3,2069.913);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(4,2378.953);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(5,2018.098);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(6,1845.986);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(7,1428.11);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(8,1824.844);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(9,1205.207);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(10,599.8179);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(11,190.6496);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(12,38.83604);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(13,0.1875606);
   looseSel_Jet_1_tau_1hherwig286->SetEntries(709468);
   looseSel_Jet_1_tau_1hherwig286->SetDirectory(0);

   ci = 988;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_1hherwig286->SetFillColor(ci);
   looseSel_Jet_1_tau_1hherwig286->SetLineStyle(9);
   looseSel_Jet_1_tau_1hherwig286->SetLineWidth(2);
   looseSel_Jet_1_tau_1hherwig286->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hherwig286->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hherwig286->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hherwig286->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hherwig286->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hherwig286->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hherwig286->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hherwig286->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hherwig286->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hherwig286->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hherwig286->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hherwig286->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hherwig286->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hherwig286->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hherwig286->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hherwig286->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_1hmg287 = new TH1D("looseSel_Jet_1_tau_1hmg287","",20,0,1);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(1,1042.403);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(2,79709.41);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(3,258524.1);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(4,287771.6);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(5,215745.4);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(6,141000.7);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(7,86321.39);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(8,47200.6);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(9,22391.53);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(10,7899.637);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(11,1332.502);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(12,89.28957);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(13,2.382631);
   looseSel_Jet_1_tau_1hmg287->SetBinError(1,16.96101);
   looseSel_Jet_1_tau_1hmg287->SetBinError(2,304.4677);
   looseSel_Jet_1_tau_1hmg287->SetBinError(3,617.9843);
   looseSel_Jet_1_tau_1hmg287->SetBinError(4,688.9582);
   looseSel_Jet_1_tau_1hmg287->SetBinError(5,615.3109);
   looseSel_Jet_1_tau_1hmg287->SetBinError(6,507.3343);
   looseSel_Jet_1_tau_1hmg287->SetBinError(7,405.4609);
   looseSel_Jet_1_tau_1hmg287->SetBinError(8,306.5216);
   looseSel_Jet_1_tau_1hmg287->SetBinError(9,217.1231);
   looseSel_Jet_1_tau_1hmg287->SetBinError(10,132.9638);
   looseSel_Jet_1_tau_1hmg287->SetBinError(11,55.54687);
   looseSel_Jet_1_tau_1hmg287->SetBinError(12,13.72174);
   looseSel_Jet_1_tau_1hmg287->SetBinError(13,2.067985);
   looseSel_Jet_1_tau_1hmg287->SetEntries(1966122);
   looseSel_Jet_1_tau_1hmg287->SetDirectory(0);

   ci = 989;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_1hmg287->SetFillColor(ci);
   looseSel_Jet_1_tau_1hmg287->SetLineStyle(2);
   looseSel_Jet_1_tau_1hmg287->SetLineWidth(2);
   looseSel_Jet_1_tau_1hmg287->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hmg287->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hmg287->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hmg287->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hmg287->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hmg287->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hmg287->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hmg287->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hmg287->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hmg287->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hmg287->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hmg287->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hmg287->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hmg287->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hmg287->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hmg287->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_1hdata288 = new TH1D("looseSel_Jet_1_tau_1hdata288","",20,0,1);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(1,819);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(2,86238);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(3,271158);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(4,284292);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(5,204044);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(6,135017);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(7,84513);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(8,48912);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(9,23977);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(10,8554);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(11,1398);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(12,107);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(13,2);
   looseSel_Jet_1_tau_1hdata288->SetBinError(1,28.61818);
   looseSel_Jet_1_tau_1hdata288->SetBinError(2,293.6631);
   looseSel_Jet_1_tau_1hdata288->SetBinError(3,520.7283);
   looseSel_Jet_1_tau_1hdata288->SetBinError(4,533.1904);
   looseSel_Jet_1_tau_1hdata288->SetBinError(5,451.7123);
   looseSel_Jet_1_tau_1hdata288->SetBinError(6,367.4466);
   looseSel_Jet_1_tau_1hdata288->SetBinError(7,290.7112);
   looseSel_Jet_1_tau_1hdata288->SetBinError(8,221.1606);
   looseSel_Jet_1_tau_1hdata288->SetBinError(9,154.8451);
   looseSel_Jet_1_tau_1hdata288->SetBinError(10,92.48784);
   looseSel_Jet_1_tau_1hdata288->SetBinError(11,37.38984);
   looseSel_Jet_1_tau_1hdata288->SetBinError(12,10.34408);
   looseSel_Jet_1_tau_1hdata288->SetBinError(13,1.414214);
   looseSel_Jet_1_tau_1hdata288->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata288->SetMaximum(568584);
   looseSel_Jet_1_tau_1hdata288->SetEntries(1149031);
   looseSel_Jet_1_tau_1hdata288->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_1hdata288->SetFillColor(ci);
   looseSel_Jet_1_tau_1hdata288->SetLineWidth(2);
   looseSel_Jet_1_tau_1hdata288->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hdata288->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hdata288->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata288->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_1hdata288->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_1hdata288->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata288->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hdata288->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata288->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata288->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata288->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata288->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata288->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hdata288->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata288->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_1_tau_1hdata","Data (2016)","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_1hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_1hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_1hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc","Z+jets","F");

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
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

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
   
   TH1D *looseSel_Jet_1_tau_1hdata_copy289 = new TH1D("looseSel_Jet_1_tau_1hdata_copy289","",20,0,1);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(1,819);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(2,86238);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(3,271158);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(4,284292);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(5,204044);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(6,135017);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(7,84513);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(8,48912);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(9,23977);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(10,8554);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(11,1398);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(12,107);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(13,2);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(1,28.61818);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(2,293.6631);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(3,520.7283);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(4,533.1904);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(5,451.7123);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(6,367.4466);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(7,290.7112);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(8,221.1606);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(9,154.8451);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(10,92.48784);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(11,37.38984);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(12,10.34408);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(13,1.414214);
   looseSel_Jet_1_tau_1hdata_copy289->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata_copy289->SetMaximum(568584);
   looseSel_Jet_1_tau_1hdata_copy289->SetEntries(1149031);
   looseSel_Jet_1_tau_1hdata_copy289->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_1hdata_copy289->SetFillColor(ci);
   looseSel_Jet_1_tau_1hdata_copy289->SetLineWidth(2);
   looseSel_Jet_1_tau_1hdata_copy289->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hdata_copy289->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hdata_copy289->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata_copy289->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_1hdata_copy289->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_1hdata_copy289->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata_copy289->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hdata_copy289->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata_copy289->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata_copy289->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata_copy289->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata_copy289->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata_copy289->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hdata_copy289->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata_copy289->Draw("sameaxis");
   c1_2->Modified();
   looseSel_Jet_1_tau_1->cd();
   looseSel_Jet_1_tau_1->Modified();
   looseSel_Jet_1_tau_1->cd();
   looseSel_Jet_1_tau_1->SetSelected(looseSel_Jet_1_tau_1);
}
