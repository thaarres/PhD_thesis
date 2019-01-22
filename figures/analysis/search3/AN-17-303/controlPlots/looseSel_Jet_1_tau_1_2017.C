void looseSel_Jet_1_tau_1_2017()
{
//=========Macro generated from canvas: looseSel_Jet_1_tau_1/looseSel_Jet_1_tau_1
//=========  (Wed Sep  5 11:20:40 2018) by ROOT version6.02/05
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
   
   TH1D *ratiohist5449273 = new TH1D("ratiohist5449273","",20,0,1);
   ratiohist5449273->SetBinContent(1,0.9232509);
   ratiohist5449273->SetBinContent(2,0.9069405);
   ratiohist5449273->SetBinContent(3,0.9492207);
   ratiohist5449273->SetBinContent(4,1.009047);
   ratiohist5449273->SetBinContent(5,1.04318);
   ratiohist5449273->SetBinContent(6,1.015499);
   ratiohist5449273->SetBinContent(7,1.062);
   ratiohist5449273->SetBinContent(8,1.058175);
   ratiohist5449273->SetBinContent(9,1.092897);
   ratiohist5449273->SetBinContent(10,1.033274);
   ratiohist5449273->SetBinContent(11,1.525259);
   ratiohist5449273->SetBinContent(12,0.7138045);
   ratiohist5449273->SetBinContent(13,9.400473);
   ratiohist5449273->SetBinError(1,0.02857638);
   ratiohist5449273->SetBinError(2,0.004565123);
   ratiohist5449273->SetBinError(3,0.007152668);
   ratiohist5449273->SetBinError(4,0.004186066);
   ratiohist5449273->SetBinError(5,0.004900577);
   ratiohist5449273->SetBinError(6,0.02324816);
   ratiohist5449273->SetBinError(7,0.009448639);
   ratiohist5449273->SetBinError(8,0.01453954);
   ratiohist5449273->SetBinError(9,0.02905754);
   ratiohist5449273->SetBinError(10,0.04593106);
   ratiohist5449273->SetBinError(11,0.1396654);
   ratiohist5449273->SetBinError(12,0.1984038);
   ratiohist5449273->SetBinError(13,6.341209);
   ratiohist5449273->SetMinimum(0.2);
   ratiohist5449273->SetMaximum(1.8);
   ratiohist5449273->SetEntries(11.72762);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist5449273->SetFillColor(ci);
   ratiohist5449273->SetLineWidth(2);
   ratiohist5449273->SetMarkerStyle(20);
   ratiohist5449273->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   ratiohist5449273->GetXaxis()->SetNdivisions(505);
   ratiohist5449273->GetXaxis()->SetLabelFont(42);
   ratiohist5449273->GetXaxis()->SetLabelSize(0.14);
   ratiohist5449273->GetXaxis()->SetTitleSize(0.17);
   ratiohist5449273->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5449273->GetXaxis()->SetTitleFont(42);
   ratiohist5449273->GetYaxis()->SetTitle("Data/MC");
   ratiohist5449273->GetYaxis()->CenterTitle(true);
   ratiohist5449273->GetYaxis()->SetNdivisions(105);
   ratiohist5449273->GetYaxis()->SetLabelFont(42);
   ratiohist5449273->GetYaxis()->SetLabelSize(0.14);
   ratiohist5449273->GetYaxis()->SetTitleSize(0.16);
   ratiohist5449273->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5449273->GetYaxis()->SetTitleFont(42);
   ratiohist5449273->GetZaxis()->SetLabelFont(42);
   ratiohist5449273->GetZaxis()->SetLabelSize(0.035);
   ratiohist5449273->GetZaxis()->SetTitleSize(0.035);
   ratiohist5449273->GetZaxis()->SetTitleFont(42);
   ratiohist5449273->Draw("");
   
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
   0.009795515,
   0.009795515,
   0.003915053,
   0.007325039,
   0.00377334,
   0.004233922,
   0.02275537,
   0.008310976,
   0.01308227,
   0.02588532,
   0.04328161,
   0.08811371,
   0.2622653,
   0.5050099,
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
   Graph_Graph1017->SetMinimum(0.3939881);
   Graph_Graph1017->SetMaximum(1.606012);
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
   
   TH1D *H_ratiohist7752274 = new TH1D("H_ratiohist7752274","",20,0,1);
   H_ratiohist7752274->SetBinContent(1,0.9785796);
   H_ratiohist7752274->SetBinContent(2,0.9363373);
   H_ratiohist7752274->SetBinContent(3,1.002041);
   H_ratiohist7752274->SetBinContent(4,1.008919);
   H_ratiohist7752274->SetBinContent(5,1.016854);
   H_ratiohist7752274->SetBinContent(6,0.9850833);
   H_ratiohist7752274->SetBinContent(7,0.9563087);
   H_ratiohist7752274->SetBinContent(8,1.038437);
   H_ratiohist7752274->SetBinContent(9,1.120731);
   H_ratiohist7752274->SetBinContent(10,1.116226);
   H_ratiohist7752274->SetBinContent(11,0.9859849);
   H_ratiohist7752274->SetBinContent(12,14.10309);
   H_ratiohist7752274->SetBinContent(13,13.42675);
   H_ratiohist7752274->SetBinError(1,0.08338496);
   H_ratiohist7752274->SetBinError(2,0.01417683);
   H_ratiohist7752274->SetBinError(3,0.009410963);
   H_ratiohist7752274->SetBinError(4,0.009851982);
   H_ratiohist7752274->SetBinError(5,0.01171873);
   H_ratiohist7752274->SetBinError(6,0.01465395);
   H_ratiohist7752274->SetBinError(7,0.01928612);
   H_ratiohist7752274->SetBinError(8,0.02940176);
   H_ratiohist7752274->SetBinError(9,0.05082696);
   H_ratiohist7752274->SetBinError(10,0.09251902);
   H_ratiohist7752274->SetBinError(11,0.238086);
   H_ratiohist7752274->SetBinError(12,2.380331);
   H_ratiohist7752274->SetBinError(13,9.837698);
   H_ratiohist7752274->SetMinimum(0);
   H_ratiohist7752274->SetMaximum(672894);
   H_ratiohist7752274->SetEntries(14.58972);

   ci = 990;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist7752274->SetFillColor(ci);
   H_ratiohist7752274->SetLineStyle(9);
   H_ratiohist7752274->SetLineWidth(2);
   H_ratiohist7752274->SetMarkerStyle(20);
   H_ratiohist7752274->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   H_ratiohist7752274->GetXaxis()->SetLabelFont(42);
   H_ratiohist7752274->GetXaxis()->SetLabelSize(0);
   H_ratiohist7752274->GetXaxis()->SetTitleSize(0);
   H_ratiohist7752274->GetXaxis()->SetTitleFont(42);
   H_ratiohist7752274->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist7752274->GetYaxis()->SetLabelFont(42);
   H_ratiohist7752274->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist7752274->GetYaxis()->SetTitleFont(42);
   H_ratiohist7752274->GetZaxis()->SetLabelFont(42);
   H_ratiohist7752274->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist7752274->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist7752274->GetZaxis()->SetTitleFont(42);
   H_ratiohist7752274->Draw("HISTsame");
   
   TH1D *MG_ratiohist78275 = new TH1D("MG_ratiohist78275","",20,0,1);
   MG_ratiohist78275->SetBinContent(1,1.13008);
   MG_ratiohist78275->SetBinContent(2,1.096494);
   MG_ratiohist78275->SetBinContent(3,0.8818936);
   MG_ratiohist78275->SetBinContent(4,1.049536);
   MG_ratiohist78275->SetBinContent(5,1.051508);
   MG_ratiohist78275->SetBinContent(6,0.860021);
   MG_ratiohist78275->SetBinContent(7,1.139693);
   MG_ratiohist78275->SetBinContent(8,1.216766);
   MG_ratiohist78275->SetBinContent(9,1.295796);
   MG_ratiohist78275->SetBinContent(10,1.449129);
   MG_ratiohist78275->SetBinContent(11,1.535792);
   MG_ratiohist78275->SetBinContent(12,1.749955);
   MG_ratiohist78275->SetBinContent(13,2.070195);
   MG_ratiohist78275->SetBinError(1,0.04106583);
   MG_ratiohist78275->SetBinError(2,0.005843658);
   MG_ratiohist78275->SetBinError(3,0.06711414);
   MG_ratiohist78275->SetBinError(4,0.00344763);
   MG_ratiohist78275->SetBinError(5,0.004038011);
   MG_ratiohist78275->SetBinError(6,0.08904371);
   MG_ratiohist78275->SetBinError(7,0.007217393);
   MG_ratiohist78275->SetBinError(8,0.01063764);
   MG_ratiohist78275->SetBinError(9,0.01728131);
   MG_ratiohist78275->SetBinError(10,0.03448681);
   MG_ratiohist78275->SetBinError(11,0.09933469);
   MG_ratiohist78275->SetBinError(12,0.4143089);
   MG_ratiohist78275->SetBinError(13,1.98934);
   MG_ratiohist78275->SetMinimum(0);
   MG_ratiohist78275->SetMaximum(672894);
   MG_ratiohist78275->SetEntries(65.73969);

   ci = 991;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist78275->SetFillColor(ci);
   MG_ratiohist78275->SetLineStyle(2);
   MG_ratiohist78275->SetLineWidth(2);
   MG_ratiohist78275->SetMarkerStyle(20);
   MG_ratiohist78275->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   MG_ratiohist78275->GetXaxis()->SetLabelFont(42);
   MG_ratiohist78275->GetXaxis()->SetLabelSize(0);
   MG_ratiohist78275->GetXaxis()->SetTitleSize(0);
   MG_ratiohist78275->GetXaxis()->SetTitleFont(42);
   MG_ratiohist78275->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist78275->GetYaxis()->SetLabelFont(42);
   MG_ratiohist78275->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist78275->GetYaxis()->SetTitleFont(42);
   MG_ratiohist78275->GetZaxis()->SetLabelFont(42);
   MG_ratiohist78275->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist78275->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist78275->GetZaxis()->SetTitleFont(42);
   MG_ratiohist78275->Draw("HISTsame");
   
   TH1D *ratiohist5449276 = new TH1D("ratiohist5449276","",20,0,1);
   ratiohist5449276->SetBinContent(1,0.9232509);
   ratiohist5449276->SetBinContent(2,0.9069405);
   ratiohist5449276->SetBinContent(3,0.9492207);
   ratiohist5449276->SetBinContent(4,1.009047);
   ratiohist5449276->SetBinContent(5,1.04318);
   ratiohist5449276->SetBinContent(6,1.015499);
   ratiohist5449276->SetBinContent(7,1.062);
   ratiohist5449276->SetBinContent(8,1.058175);
   ratiohist5449276->SetBinContent(9,1.092897);
   ratiohist5449276->SetBinContent(10,1.033274);
   ratiohist5449276->SetBinContent(11,1.525259);
   ratiohist5449276->SetBinContent(12,0.7138045);
   ratiohist5449276->SetBinContent(13,9.400473);
   ratiohist5449276->SetBinError(1,0.02857638);
   ratiohist5449276->SetBinError(2,0.004565123);
   ratiohist5449276->SetBinError(3,0.007152668);
   ratiohist5449276->SetBinError(4,0.004186066);
   ratiohist5449276->SetBinError(5,0.004900577);
   ratiohist5449276->SetBinError(6,0.02324816);
   ratiohist5449276->SetBinError(7,0.009448639);
   ratiohist5449276->SetBinError(8,0.01453954);
   ratiohist5449276->SetBinError(9,0.02905754);
   ratiohist5449276->SetBinError(10,0.04593106);
   ratiohist5449276->SetBinError(11,0.1396654);
   ratiohist5449276->SetBinError(12,0.1984038);
   ratiohist5449276->SetBinError(13,6.341209);
   ratiohist5449276->SetMinimum(0.2);
   ratiohist5449276->SetMaximum(1.8);
   ratiohist5449276->SetEntries(11.72762);

   ci = TColor::GetColor("#ff9900");
   ratiohist5449276->SetFillColor(ci);
   ratiohist5449276->SetLineWidth(2);
   ratiohist5449276->SetMarkerStyle(20);
   ratiohist5449276->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   ratiohist5449276->GetXaxis()->SetNdivisions(505);
   ratiohist5449276->GetXaxis()->SetLabelFont(42);
   ratiohist5449276->GetXaxis()->SetLabelSize(0.14);
   ratiohist5449276->GetXaxis()->SetTitleSize(0.17);
   ratiohist5449276->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5449276->GetXaxis()->SetTitleFont(42);
   ratiohist5449276->GetYaxis()->SetTitle("Data/MC");
   ratiohist5449276->GetYaxis()->CenterTitle(true);
   ratiohist5449276->GetYaxis()->SetNdivisions(105);
   ratiohist5449276->GetYaxis()->SetLabelFont(42);
   ratiohist5449276->GetYaxis()->SetLabelSize(0.14);
   ratiohist5449276->GetYaxis()->SetTitleSize(0.16);
   ratiohist5449276->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5449276->GetYaxis()->SetTitleFont(42);
   ratiohist5449276->GetZaxis()->SetLabelFont(42);
   ratiohist5449276->GetZaxis()->SetLabelSize(0.035);
   ratiohist5449276->GetZaxis()->SetTitleSize(0.035);
   ratiohist5449276->GetZaxis()->SetTitleFont(42);
   ratiohist5449276->Draw("same");
   c1_1->Modified();
   looseSel_Jet_1_tau_1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-10089.53,1.047619,766028.1);
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
   looseSel_Jet_1_tau_1hdata277->SetBinContent(1,1160);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(2,99911);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(3,320038);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(4,336447);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(5,241396);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(6,158801);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(7,99160);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(8,56666);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(9,27136);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(10,9739);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(11,1611);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(12,118);
   looseSel_Jet_1_tau_1hdata277->SetBinContent(13,5);
   looseSel_Jet_1_tau_1hdata277->SetBinError(1,34.05877);
   looseSel_Jet_1_tau_1hdata277->SetBinError(2,316.087);
   looseSel_Jet_1_tau_1hdata277->SetBinError(3,565.719);
   looseSel_Jet_1_tau_1hdata277->SetBinError(4,580.0405);
   looseSel_Jet_1_tau_1hdata277->SetBinError(5,491.3207);
   looseSel_Jet_1_tau_1hdata277->SetBinError(6,398.4984);
   looseSel_Jet_1_tau_1hdata277->SetBinError(7,314.8968);
   looseSel_Jet_1_tau_1hdata277->SetBinError(8,238.0462);
   looseSel_Jet_1_tau_1hdata277->SetBinError(9,164.7301);
   looseSel_Jet_1_tau_1hdata277->SetBinError(10,98.68637);
   looseSel_Jet_1_tau_1hdata277->SetBinError(11,40.13726);
   looseSel_Jet_1_tau_1hdata277->SetBinError(12,10.86278);
   looseSel_Jet_1_tau_1hdata277->SetBinError(13,2.236068);
   looseSel_Jet_1_tau_1hdata277->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata277->SetMaximum(672894);
   looseSel_Jet_1_tau_1hdata277->SetEntries(1352188);
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
   test1_stack_17->SetMinimum(-1.387779e-17);
   test1_stack_17->SetMaximum(354016.6);
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
   
   
   TH1D *resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278 = new TH1D("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278","",20,0,1);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(1,22.11831);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(2,1376.075);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(3,3617.559);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(4,3203.387);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(5,1942.401);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(6,1126.211);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(7,677.039);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(8,370.4209);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(9,164.5505);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(10,56.63259);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(11,8.507041);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(12,0.4861167);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinContent(13,0.1215292);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(1,1.701408);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(2,12.99567);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(3,21.05122);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(4,19.79881);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(5,15.40355);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(6,11.72426);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(7,9.095222);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(8,6.720464);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(9,4.485068);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(10,2.629078);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(11,1.016786);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(12,0.2430583);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetBinError(13,0.1215292);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetEntries(104113);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetDirectory(0);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetFillColor(47);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetLineWidth(2);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc278->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279 = new TH1D("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279","",20,0,1);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(1,50.21359);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(2,2994.825);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(3,7140.016);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(4,6049.156);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(5,3701.374);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(6,2280.171);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(7,1378.106);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(8,765.4606);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(9,342.7967);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(10,108.5325);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(11,17.98991);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinContent(12,1.976913);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(1,3.199913);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(2,24.43148);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(3,37.68651);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(4,34.65467);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(5,27.1039);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(6,21.27548);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(7,16.53886);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(8,12.32364);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(9,8.25583);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(10,4.648899);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(11,1.885855);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetBinError(12,0.6251547);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetEntries(126267);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetDirectory(0);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetFillColor(21);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc279->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280 = new TH1D("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280","",20,0,1);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(1,2.857333);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(2,458.6749);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(3,2090.894);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(4,3648.33);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(5,4482.247);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(6,4414.062);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(7,3418.733);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(8,1932.783);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(9,756.3877);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(10,222.7109);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(11,45.69577);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(12,5.903932);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinContent(13,0.2508617);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(1,0.7167107);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(2,8.569791);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(3,18.3711);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(4,24.37951);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(5,26.84468);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(6,26.46265);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(7,23.2176);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(8,17.37358);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(9,10.82062);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(10,5.845395);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(11,2.623227);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(12,0.97524);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetBinError(13,0.1787231);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetEntries(188628);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetFillColor(ci);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetLineWidth(2);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc280->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *looseSel_Jet_1_tau_1hqcd281 = new TH1D("looseSel_Jet_1_tau_1hqcd281","",20,0,1);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(1,1181.241);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(2,105333.1);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(3,324310.2);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(4,320529.5);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(5,221278);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(6,148556.8);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(7,87897.12);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(8,50482.02);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(9,23565.68);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(10,9037.506);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(11,984.0211);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(12,156.9444);
   looseSel_Jet_1_tau_1hqcd281->SetBinContent(13,0.1594973);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(1,11.73983);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(2,430.3187);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(3,2469.255);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(4,1257.277);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(5,978.8825);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(6,3558.241);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(7,775.427);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(8,700.2084);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(9,642.5576);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(10,407.8689);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(11,93.00526);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(12,43.33928);
   looseSel_Jet_1_tau_1hqcd281->SetBinError(13,0.1594973);
   looseSel_Jet_1_tau_1hqcd281->SetEntries(5601853);
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
   
   TH1D *resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282 = new TH1D("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282","",20,0,1);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(1,3938.463);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(2,216903.4);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(3,176346.9);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(4,7580.55);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(5,701.9455);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(6,110.5884);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(7,16.83876);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(8,48.4478);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinContent(10,9.324891);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(1,345.0264);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(2,2561.433);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(3,2316.343);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(4,478.9354);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(5,140.1347);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(6,54.8952);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(7,10.53335);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(8,34.33121);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetBinError(10,9.324891);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetEntries(17066);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetLineColor(ci);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig282->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(1,6580.902);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(2,246382.2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(3,133577.2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(4,12597.71);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(5,3325.186);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(6,1452.768);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(7,827.6888);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(8,511.6126);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(9,292.9486);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(10,76.92713);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinContent(11,31.21512);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(1,194.837);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(2,1192.55);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(3,878.2581);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(4,268.6943);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(5,138.4483);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(6,91.22279);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(7,69.26036);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(8,53.41649);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(9,41.32126);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(10,21.03493);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetBinError(11,13.95286);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetEntries(82884);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetLineStyle(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig283->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(1,2965.895);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(2,187719.1);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(3,193194.1);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(4,18166.13);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(5,2259.214);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(6,661.8789);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(7,295.335);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(8,174.7361);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(9,75.29645);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(10,121.8336);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinContent(11,22.85222);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(1,303.6251);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(2,2409.539);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(3,2436.583);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(4,749.5018);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(5,258.368);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(6,147.6144);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(7,100.6361);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(8,69.2454);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(9,48.81343);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(10,61.56277);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetBinError(11,22.85222);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetEntries(15908);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetLineStyle(4);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig284->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_1_tau_1hqcd285 = new TH1D("looseSel_Jet_1_tau_1hqcd285","",20,0,1);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(1,1256.43);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(2,110162.7);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(3,337158.7);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(4,333430.4);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(5,231404);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(6,156377.2);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(7,93371);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(8,53550.68);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(9,24829.41);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(10,9425.382);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(11,1056.214);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(12,165.3114);
   looseSel_Jet_1_tau_1hqcd285->SetBinContent(13,0.5318881);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(1,12.30738);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(2,431.2927);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(3,2469.7);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(4,1258.146);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(5,979.7467);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(6,3558.422);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(7,776.0041);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(8,700.5646);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(9,642.7173);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(10,407.9457);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(11,93.06692);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(12,43.35544);
   looseSel_Jet_1_tau_1hqcd285->SetBinError(13,0.2686088);
   looseSel_Jet_1_tau_1hqcd285->SetEntries(6020861);
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
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(1,1185.392);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(2,106704.1);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(3,319386.1);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(4,333472.6);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(5,237394.9);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(6,161205.6);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(7,103690.4);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(8,54568.56);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(9,24212.76);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(10,8724.932);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(11,1633.899);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(12,8.366962);
   looseSel_Jet_1_tau_1hherwig286->SetBinContent(13,0.3723909);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(1,94.82176);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(2,1579.915);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(3,2946);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(4,3205.169);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(5,2692.853);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(6,2363.704);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(7,2065.062);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(8,1527.926);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(9,1088.206);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(10,717.746);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(11,392.4323);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(12,1.183634);
   looseSel_Jet_1_tau_1hherwig286->SetBinError(13,0.2161279);
   looseSel_Jet_1_tau_1hherwig286->SetEntries(546959);
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
   looseSel_Jet_1_tau_1hmg287->SetBinContent(1,1026.476);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(2,91118.64);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(3,362898.6);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(4,320567.3);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(5,229571.3);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(6,184647.8);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(7,87005.89);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(8,46570.98);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(9,20941.56);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(10,6720.586);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(11,1048.97);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(12,67.43032);
   looseSel_Jet_1_tau_1hmg287->SetBinContent(13,2.415231);
   looseSel_Jet_1_tau_1hmg287->SetBinError(1,21.97821);
   looseSel_Jet_1_tau_1hmg287->SetBinError(2,390.7879);
   looseSel_Jet_1_tau_1hmg287->SetBinError(3,27609.97);
   looseSel_Jet_1_tau_1hmg287->SetBinError(4,896.3501);
   looseSel_Jet_1_tau_1hmg287->SetBinError(5,747.5938);
   looseSel_Jet_1_tau_1hmg287->SetBinError(6,19112.21);
   looseSel_Jet_1_tau_1hmg287->SetBinError(7,476.702);
   looseSel_Jet_1_tau_1hmg287->SetBinError(8,357.0659);
   looseSel_Jet_1_tau_1hmg287->SetBinError(9,248.6753);
   looseSel_Jet_1_tau_1hmg287->SetBinError(10,144.7158);
   looseSel_Jet_1_tau_1hmg287->SetBinError(11,62.6117);
   looseSel_Jet_1_tau_1hmg287->SetBinError(12,14.70815);
   looseSel_Jet_1_tau_1hmg287->SetBinError(13,2.054241);
   looseSel_Jet_1_tau_1hmg287->SetEntries(1729089);
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
   looseSel_Jet_1_tau_1hdata288->SetBinContent(1,1160);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(2,99911);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(3,320038);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(4,336447);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(5,241396);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(6,158801);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(7,99160);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(8,56666);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(9,27136);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(10,9739);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(11,1611);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(12,118);
   looseSel_Jet_1_tau_1hdata288->SetBinContent(13,5);
   looseSel_Jet_1_tau_1hdata288->SetBinError(1,34.05877);
   looseSel_Jet_1_tau_1hdata288->SetBinError(2,316.087);
   looseSel_Jet_1_tau_1hdata288->SetBinError(3,565.719);
   looseSel_Jet_1_tau_1hdata288->SetBinError(4,580.0405);
   looseSel_Jet_1_tau_1hdata288->SetBinError(5,491.3207);
   looseSel_Jet_1_tau_1hdata288->SetBinError(6,398.4984);
   looseSel_Jet_1_tau_1hdata288->SetBinError(7,314.8968);
   looseSel_Jet_1_tau_1hdata288->SetBinError(8,238.0462);
   looseSel_Jet_1_tau_1hdata288->SetBinError(9,164.7301);
   looseSel_Jet_1_tau_1hdata288->SetBinError(10,98.68637);
   looseSel_Jet_1_tau_1hdata288->SetBinError(11,40.13726);
   looseSel_Jet_1_tau_1hdata288->SetBinError(12,10.86278);
   looseSel_Jet_1_tau_1hdata288->SetBinError(13,2.236068);
   looseSel_Jet_1_tau_1hdata288->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata288->SetMaximum(672894);
   looseSel_Jet_1_tau_1hdata288->SetEntries(1352188);
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
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_1_tau_1hdata","Data (2017)","LEP");
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
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc","Z+jets","F");

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
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

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
   
   TH1D *looseSel_Jet_1_tau_1hdata_copy289 = new TH1D("looseSel_Jet_1_tau_1hdata_copy289","",20,0,1);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(1,1160);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(2,99911);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(3,320038);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(4,336447);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(5,241396);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(6,158801);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(7,99160);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(8,56666);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(9,27136);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(10,9739);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(11,1611);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(12,118);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinContent(13,5);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(1,34.05877);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(2,316.087);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(3,565.719);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(4,580.0405);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(5,491.3207);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(6,398.4984);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(7,314.8968);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(8,238.0462);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(9,164.7301);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(10,98.68637);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(11,40.13726);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(12,10.86278);
   looseSel_Jet_1_tau_1hdata_copy289->SetBinError(13,2.236068);
   looseSel_Jet_1_tau_1hdata_copy289->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata_copy289->SetMaximum(672894);
   looseSel_Jet_1_tau_1hdata_copy289->SetEntries(1352188);
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
