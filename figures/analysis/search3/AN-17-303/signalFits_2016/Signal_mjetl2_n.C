void Signal_mjetl2_n()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:22 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,-0.742268,5728.514,4.412371);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.144);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1163[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1163[12] = {
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85};
   Double_t _fex1163[12] = {
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
   0,
   0};
   Double_t _fey1163[12] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,_fx1163,_fy1163,_fex1163,_fey1163);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1163 = new TH1F("Graph_Graph1163","",100,770,5930);
   Graph_Graph1163->SetMinimum(0);
   Graph_Graph1163->SetMaximum(4);
   Graph_Graph1163->SetDirectory(0);
   Graph_Graph1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1163->SetLineColor(ci);
   Graph_Graph1163->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1163->GetXaxis()->SetRange(7,92);
   Graph_Graph1163->GetXaxis()->SetNdivisions(209);
   Graph_Graph1163->GetXaxis()->SetLabelFont(42);
   Graph_Graph1163->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1163->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1163->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1163->GetXaxis()->SetTitleFont(42);
   Graph_Graph1163->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph1163->GetYaxis()->SetNdivisions(504);
   Graph_Graph1163->GetYaxis()->SetLabelFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1163->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1163->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1163->GetYaxis()->SetTitleFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1163->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1163);
   
   
   TF1 *pol01164 = new TF1("pol0","pol0",1200,5500);
   pol01164->SetFillColor(19);
   pol01164->SetFillStyle(0);
   pol01164->SetLineColor(2);
   pol01164->SetLineWidth(2);
   pol01164->SetChisquare(9.466331e-30);
   pol01164->SetNDF(11);
   pol01164->GetXaxis()->SetLabelFont(42);
   pol01164->GetXaxis()->SetLabelOffset(0.007);
   pol01164->GetXaxis()->SetLabelSize(0.05);
   pol01164->GetXaxis()->SetTitleSize(0.06);
   pol01164->GetXaxis()->SetTitleOffset(0.9);
   pol01164->GetXaxis()->SetTitleFont(42);
   pol01164->GetYaxis()->SetLabelFont(42);
   pol01164->GetYaxis()->SetLabelOffset(0.007);
   pol01164->GetYaxis()->SetLabelSize(0.05);
   pol01164->GetYaxis()->SetTitleSize(0.06);
   pol01164->GetYaxis()->SetTitleOffset(1.25);
   pol01164->GetYaxis()->SetTitleFont(42);
   pol01164->SetParameter(0,2.85);
   pol01164->SetParError(0,2.677959e-16);
   pol01164->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01164);
   gre->Draw("ap");
   
   Double_t _fx1165[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1165[12] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1165[12] = {
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
   0,
   0};
   Double_t _fey1165[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1165,_fy1165,_fex1165,_fey1165);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1165 = new TH1F("Graph_Graph1165","",100,770,5930);
   Graph_Graph1165->SetMinimum(1.9);
   Graph_Graph1165->SetMaximum(3.1);
   Graph_Graph1165->SetDirectory(0);
   Graph_Graph1165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1165->SetLineColor(ci);
   Graph_Graph1165->GetXaxis()->SetLabelFont(42);
   Graph_Graph1165->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1165->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1165->GetXaxis()->SetTitleFont(42);
   Graph_Graph1165->GetYaxis()->SetLabelFont(42);
   Graph_Graph1165->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1165->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1165->GetYaxis()->SetTitleFont(42);
   Graph_Graph1165->GetZaxis()->SetLabelFont(42);
   Graph_Graph1165->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1165->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1165);
   
   
   TF1 *pol01166 = new TF1("pol0","pol0",1200,5500);
   pol01166->SetFillColor(19);
   pol01166->SetFillStyle(0);
   pol01166->SetLineColor(2);
   pol01166->SetLineWidth(2);
   pol01166->SetChisquare(2.366583e-30);
   pol01166->SetNDF(11);
   pol01166->GetXaxis()->SetLabelFont(42);
   pol01166->GetXaxis()->SetLabelOffset(0.007);
   pol01166->GetXaxis()->SetLabelSize(0.05);
   pol01166->GetXaxis()->SetTitleSize(0.06);
   pol01166->GetXaxis()->SetTitleOffset(0.9);
   pol01166->GetXaxis()->SetTitleFont(42);
   pol01166->GetYaxis()->SetLabelFont(42);
   pol01166->GetYaxis()->SetLabelOffset(0.007);
   pol01166->GetYaxis()->SetLabelSize(0.05);
   pol01166->GetYaxis()->SetTitleSize(0.06);
   pol01166->GetYaxis()->SetTitleOffset(1.25);
   pol01166->GetYaxis()->SetTitleFont(42);
   pol01166->SetParameter(0,2);
   pol01166->SetParError(0,1.338979e-16);
   pol01166->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01166);
   gre->Draw("p");
   
   Double_t _fx1167[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1167[12] = {
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85};
   Double_t _fex1167[12] = {
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
   0,
   0};
   Double_t _fey1167[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1167,_fy1167,_fex1167,_fey1167);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11631167 = new TH1F("Graph_Graph_Graph11631167","",100,770,5930);
   Graph_Graph_Graph11631167->SetMinimum(0);
   Graph_Graph_Graph11631167->SetMaximum(4);
   Graph_Graph_Graph11631167->SetDirectory(0);
   Graph_Graph_Graph11631167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11631167->SetLineColor(ci);
   Graph_Graph_Graph11631167->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph11631167->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph11631167->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11631167->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11631167->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11631167->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11631167->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11631167->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11631167->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph_Graph11631167->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11631167->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11631167->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11631167->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11631167->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11631167->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11631167->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11631167->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11631167->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11631167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11631167);
   
   
   TF1 *pol01168 = new TF1("pol0","pol0",1200,5500);
   pol01168->SetFillColor(19);
   pol01168->SetFillStyle(0);
   pol01168->SetLineColor(2);
   pol01168->SetLineWidth(2);
   pol01168->SetChisquare(9.466331e-30);
   pol01168->SetNDF(11);
   pol01168->GetXaxis()->SetLabelFont(42);
   pol01168->GetXaxis()->SetLabelOffset(0.007);
   pol01168->GetXaxis()->SetLabelSize(0.05);
   pol01168->GetXaxis()->SetTitleSize(0.06);
   pol01168->GetXaxis()->SetTitleOffset(0.9);
   pol01168->GetXaxis()->SetTitleFont(42);
   pol01168->GetYaxis()->SetLabelFont(42);
   pol01168->GetYaxis()->SetLabelOffset(0.007);
   pol01168->GetYaxis()->SetLabelSize(0.05);
   pol01168->GetYaxis()->SetTitleSize(0.06);
   pol01168->GetYaxis()->SetTitleOffset(1.25);
   pol01168->GetYaxis()->SetTitleFont(42);
   pol01168->SetParameter(0,2.85);
   pol01168->SetParError(0,2.677959e-16);
   pol01168->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01168);
   gre->Draw("p");
   
   TF1 *pol01169 = new TF1("pol0","pol0",0,13000);
   pol01169->SetBit(TF1::kNotDraw);
   pol01169->SetFillColor(19);
   pol01169->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01169->SetMarkerColor(ci);
   pol01169->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01169->SetLineColor(ci);
   pol01169->SetLineWidth(3);
   pol01169->SetChisquare(9.466331e-30);
   pol01169->SetNDF(11);
   pol01169->GetXaxis()->SetLabelFont(42);
   pol01169->GetXaxis()->SetLabelOffset(0.007);
   pol01169->GetXaxis()->SetLabelSize(0.05);
   pol01169->GetXaxis()->SetTitleSize(0.06);
   pol01169->GetXaxis()->SetTitleOffset(0.9);
   pol01169->GetXaxis()->SetTitleFont(42);
   pol01169->GetYaxis()->SetLabelFont(42);
   pol01169->GetYaxis()->SetLabelOffset(0.007);
   pol01169->GetYaxis()->SetLabelSize(0.05);
   pol01169->GetYaxis()->SetTitleSize(0.06);
   pol01169->GetYaxis()->SetTitleOffset(1.25);
   pol01169->GetYaxis()->SetTitleFont(42);
   pol01169->SetParameter(0,2.85);
   pol01169->SetParError(0,2.677959e-16);
   pol01169->SetParLimits(0,0,0);
   pol01169->Draw("Csame");
   
   TF1 *pol01170 = new TF1("pol0","pol0",0,13000);
   pol01170->SetBit(TF1::kNotDraw);
   pol01170->SetFillColor(19);
   pol01170->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01170->SetMarkerColor(ci);
   pol01170->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol01170->SetLineColor(ci);
   pol01170->SetLineWidth(3);
   pol01170->SetLineStyle(9);
   pol01170->SetChisquare(2.366583e-30);
   pol01170->SetNDF(11);
   pol01170->GetXaxis()->SetLabelFont(42);
   pol01170->GetXaxis()->SetLabelOffset(0.007);
   pol01170->GetXaxis()->SetLabelSize(0.05);
   pol01170->GetXaxis()->SetTitleSize(0.06);
   pol01170->GetXaxis()->SetTitleOffset(0.9);
   pol01170->GetXaxis()->SetTitleFont(42);
   pol01170->GetYaxis()->SetLabelFont(42);
   pol01170->GetYaxis()->SetLabelOffset(0.007);
   pol01170->GetYaxis()->SetLabelSize(0.05);
   pol01170->GetYaxis()->SetTitleSize(0.06);
   pol01170->GetYaxis()->SetTitleOffset(1.25);
   pol01170->GetYaxis()->SetTitleFont(42);
   pol01170->SetParameter(0,2);
   pol01170->SetParError(0,1.338979e-16);
   pol01170->SetParLimits(0,0,0);
   pol01170->Draw("Csame");
   
   Double_t _fx1169[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1169[12] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1169[12] = {
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
   0,
   0};
   Double_t _fey1169[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1169,_fy1169,_fex1169,_fey1169);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1169 = new TH1F("Graph_Graph1169","",100,770,5930);
   Graph_Graph1169->SetMinimum(1.9);
   Graph_Graph1169->SetMaximum(3.1);
   Graph_Graph1169->SetDirectory(0);
   Graph_Graph1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1169->SetLineColor(ci);
   Graph_Graph1169->GetXaxis()->SetLabelFont(42);
   Graph_Graph1169->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1169->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1169->GetXaxis()->SetTitleFont(42);
   Graph_Graph1169->GetYaxis()->SetLabelFont(42);
   Graph_Graph1169->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1169->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1169->GetYaxis()->SetTitleFont(42);
   Graph_Graph1169->GetZaxis()->SetLabelFont(42);
   Graph_Graph1169->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1169->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1169);
   
   
   TF1 *pol01170 = new TF1("pol0","pol0",1200,5500);
   pol01170->SetFillColor(19);
   pol01170->SetFillStyle(0);
   pol01170->SetLineColor(2);
   pol01170->SetLineWidth(2);
   pol01170->SetChisquare(2.366583e-30);
   pol01170->SetNDF(11);
   pol01170->GetXaxis()->SetLabelFont(42);
   pol01170->GetXaxis()->SetLabelOffset(0.007);
   pol01170->GetXaxis()->SetLabelSize(0.05);
   pol01170->GetXaxis()->SetTitleSize(0.06);
   pol01170->GetXaxis()->SetTitleOffset(0.9);
   pol01170->GetXaxis()->SetTitleFont(42);
   pol01170->GetYaxis()->SetLabelFont(42);
   pol01170->GetYaxis()->SetLabelOffset(0.007);
   pol01170->GetYaxis()->SetLabelSize(0.05);
   pol01170->GetYaxis()->SetTitleSize(0.06);
   pol01170->GetYaxis()->SetTitleOffset(1.25);
   pol01170->GetYaxis()->SetTitleFont(42);
   pol01170->SetParameter(0,2);
   pol01170->SetParError(0,1.338979e-16);
   pol01170->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01170);
   gre->Draw("p");
   
   Double_t _fx1171[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1171[12] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1171[12] = {
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
   0,
   0};
   Double_t _fey1171[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1171,_fy1171,_fex1171,_fey1171);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1171 = new TH1F("Graph_Graph1171","",100,770,5930);
   Graph_Graph1171->SetMinimum(1.9);
   Graph_Graph1171->SetMaximum(3.1);
   Graph_Graph1171->SetDirectory(0);
   Graph_Graph1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1171->SetLineColor(ci);
   Graph_Graph1171->GetXaxis()->SetLabelFont(42);
   Graph_Graph1171->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1171->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1171->GetXaxis()->SetTitleFont(42);
   Graph_Graph1171->GetYaxis()->SetLabelFont(42);
   Graph_Graph1171->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1171->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1171->GetYaxis()->SetTitleFont(42);
   Graph_Graph1171->GetZaxis()->SetLabelFont(42);
   Graph_Graph1171->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1171->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1171);
   
   
   TF1 *pol01172 = new TF1("pol0","pol0",1200,5500);
   pol01172->SetFillColor(19);
   pol01172->SetFillStyle(0);
   pol01172->SetLineColor(2);
   pol01172->SetLineWidth(2);
   pol01172->SetChisquare(2.366583e-30);
   pol01172->SetNDF(11);
   pol01172->GetXaxis()->SetLabelFont(42);
   pol01172->GetXaxis()->SetLabelOffset(0.007);
   pol01172->GetXaxis()->SetLabelSize(0.05);
   pol01172->GetXaxis()->SetTitleSize(0.06);
   pol01172->GetXaxis()->SetTitleOffset(0.9);
   pol01172->GetXaxis()->SetTitleFont(42);
   pol01172->GetYaxis()->SetLabelFont(42);
   pol01172->GetYaxis()->SetLabelOffset(0.007);
   pol01172->GetYaxis()->SetLabelSize(0.05);
   pol01172->GetYaxis()->SetTitleSize(0.06);
   pol01172->GetYaxis()->SetTitleOffset(1.25);
   pol01172->GetYaxis()->SetTitleFont(42);
   pol01172->SetParameter(0,2);
   pol01172->SetParError(0,1.338979e-16);
   pol01172->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01172);
   gre->Draw("p");
   
   TF1 *pol01173 = new TF1("pol0","pol0",0,13000);
   pol01173->SetBit(TF1::kNotDraw);
   pol01173->SetFillColor(19);
   pol01173->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01173->SetMarkerColor(ci);
   pol01173->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01173->SetLineColor(ci);
   pol01173->SetLineWidth(3);
   pol01173->SetChisquare(2.366583e-30);
   pol01173->SetNDF(11);
   pol01173->GetXaxis()->SetLabelFont(42);
   pol01173->GetXaxis()->SetLabelOffset(0.007);
   pol01173->GetXaxis()->SetLabelSize(0.05);
   pol01173->GetXaxis()->SetTitleSize(0.06);
   pol01173->GetXaxis()->SetTitleOffset(0.9);
   pol01173->GetXaxis()->SetTitleFont(42);
   pol01173->GetYaxis()->SetLabelFont(42);
   pol01173->GetYaxis()->SetLabelOffset(0.007);
   pol01173->GetYaxis()->SetLabelSize(0.05);
   pol01173->GetYaxis()->SetTitleSize(0.06);
   pol01173->GetYaxis()->SetTitleOffset(1.25);
   pol01173->GetYaxis()->SetTitleFont(42);
   pol01173->SetParameter(0,2);
   pol01173->SetParError(0,1.338979e-16);
   pol01173->SetParLimits(0,0,0);
   pol01173->Draw("Csame");
   
   TF1 *pol01174 = new TF1("pol0","pol0",0,13000);
   pol01174->SetBit(TF1::kNotDraw);
   pol01174->SetFillColor(19);
   pol01174->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01174->SetMarkerColor(ci);
   pol01174->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol01174->SetLineColor(ci);
   pol01174->SetLineWidth(3);
   pol01174->SetLineStyle(9);
   pol01174->SetChisquare(2.366583e-30);
   pol01174->SetNDF(11);
   pol01174->GetXaxis()->SetLabelFont(42);
   pol01174->GetXaxis()->SetLabelOffset(0.007);
   pol01174->GetXaxis()->SetLabelSize(0.05);
   pol01174->GetXaxis()->SetTitleSize(0.06);
   pol01174->GetXaxis()->SetTitleOffset(0.9);
   pol01174->GetXaxis()->SetTitleFont(42);
   pol01174->GetYaxis()->SetLabelFont(42);
   pol01174->GetYaxis()->SetLabelOffset(0.007);
   pol01174->GetYaxis()->SetLabelSize(0.05);
   pol01174->GetYaxis()->SetTitleSize(0.06);
   pol01174->GetYaxis()->SetTitleOffset(1.25);
   pol01174->GetYaxis()->SetTitleFont(42);
   pol01174->SetParameter(0,2);
   pol01174->SetParError(0,1.338979e-16);
   pol01174->SetParLimits(0,0,0);
   pol01174->Draw("Csame");
   
   Double_t _fx1173[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1173[12] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1173[12] = {
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
   0,
   0};
   Double_t _fey1173[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1173,_fy1173,_fex1173,_fey1173);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1173 = new TH1F("Graph_Graph1173","",100,770,5930);
   Graph_Graph1173->SetMinimum(1.9);
   Graph_Graph1173->SetMaximum(3.1);
   Graph_Graph1173->SetDirectory(0);
   Graph_Graph1173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1173->SetLineColor(ci);
   Graph_Graph1173->GetXaxis()->SetLabelFont(42);
   Graph_Graph1173->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1173->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1173->GetXaxis()->SetTitleFont(42);
   Graph_Graph1173->GetYaxis()->SetLabelFont(42);
   Graph_Graph1173->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1173->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1173->GetYaxis()->SetTitleFont(42);
   Graph_Graph1173->GetZaxis()->SetLabelFont(42);
   Graph_Graph1173->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1173->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1173);
   
   
   TF1 *pol01174 = new TF1("pol0","pol0",1200,5500);
   pol01174->SetFillColor(19);
   pol01174->SetFillStyle(0);
   pol01174->SetLineColor(2);
   pol01174->SetLineWidth(2);
   pol01174->SetChisquare(2.366583e-30);
   pol01174->SetNDF(11);
   pol01174->GetXaxis()->SetLabelFont(42);
   pol01174->GetXaxis()->SetLabelOffset(0.007);
   pol01174->GetXaxis()->SetLabelSize(0.05);
   pol01174->GetXaxis()->SetTitleSize(0.06);
   pol01174->GetXaxis()->SetTitleOffset(0.9);
   pol01174->GetXaxis()->SetTitleFont(42);
   pol01174->GetYaxis()->SetLabelFont(42);
   pol01174->GetYaxis()->SetLabelOffset(0.007);
   pol01174->GetYaxis()->SetLabelSize(0.05);
   pol01174->GetYaxis()->SetTitleSize(0.06);
   pol01174->GetYaxis()->SetTitleOffset(1.25);
   pol01174->GetYaxis()->SetTitleFont(42);
   pol01174->SetParameter(0,2);
   pol01174->SetParError(0,1.338979e-16);
   pol01174->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01174);
   gre->Draw("p");
   
   Double_t _fx1175[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1175[12] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1175[12] = {
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
   0,
   0};
   Double_t _fey1175[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1175,_fy1175,_fex1175,_fey1175);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1175 = new TH1F("Graph_Graph1175","",100,770,5930);
   Graph_Graph1175->SetMinimum(1.9);
   Graph_Graph1175->SetMaximum(3.1);
   Graph_Graph1175->SetDirectory(0);
   Graph_Graph1175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1175->SetLineColor(ci);
   Graph_Graph1175->GetXaxis()->SetLabelFont(42);
   Graph_Graph1175->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1175->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1175->GetXaxis()->SetTitleFont(42);
   Graph_Graph1175->GetYaxis()->SetLabelFont(42);
   Graph_Graph1175->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1175->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1175->GetYaxis()->SetTitleFont(42);
   Graph_Graph1175->GetZaxis()->SetLabelFont(42);
   Graph_Graph1175->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1175->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1175);
   
   
   TF1 *pol01176 = new TF1("pol0","pol0",1200,5500);
   pol01176->SetFillColor(19);
   pol01176->SetFillStyle(0);
   pol01176->SetLineColor(2);
   pol01176->SetLineWidth(2);
   pol01176->SetChisquare(2.366583e-30);
   pol01176->SetNDF(11);
   pol01176->GetXaxis()->SetLabelFont(42);
   pol01176->GetXaxis()->SetLabelOffset(0.007);
   pol01176->GetXaxis()->SetLabelSize(0.05);
   pol01176->GetXaxis()->SetTitleSize(0.06);
   pol01176->GetXaxis()->SetTitleOffset(0.9);
   pol01176->GetXaxis()->SetTitleFont(42);
   pol01176->GetYaxis()->SetLabelFont(42);
   pol01176->GetYaxis()->SetLabelOffset(0.007);
   pol01176->GetYaxis()->SetLabelSize(0.05);
   pol01176->GetYaxis()->SetTitleSize(0.06);
   pol01176->GetYaxis()->SetTitleOffset(1.25);
   pol01176->GetYaxis()->SetTitleFont(42);
   pol01176->SetParameter(0,2);
   pol01176->SetParError(0,1.338979e-16);
   pol01176->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01176);
   gre->Draw("p");
   
   TF1 *pol01177 = new TF1("pol0","pol0",0,13000);
   pol01177->SetBit(TF1::kNotDraw);
   pol01177->SetFillColor(19);
   pol01177->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01177->SetMarkerColor(ci);
   pol01177->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01177->SetLineColor(ci);
   pol01177->SetLineWidth(3);
   pol01177->SetChisquare(2.366583e-30);
   pol01177->SetNDF(11);
   pol01177->GetXaxis()->SetLabelFont(42);
   pol01177->GetXaxis()->SetLabelOffset(0.007);
   pol01177->GetXaxis()->SetLabelSize(0.05);
   pol01177->GetXaxis()->SetTitleSize(0.06);
   pol01177->GetXaxis()->SetTitleOffset(0.9);
   pol01177->GetXaxis()->SetTitleFont(42);
   pol01177->GetYaxis()->SetLabelFont(42);
   pol01177->GetYaxis()->SetLabelOffset(0.007);
   pol01177->GetYaxis()->SetLabelSize(0.05);
   pol01177->GetYaxis()->SetTitleSize(0.06);
   pol01177->GetYaxis()->SetTitleOffset(1.25);
   pol01177->GetYaxis()->SetTitleFont(42);
   pol01177->SetParameter(0,2);
   pol01177->SetParError(0,1.338979e-16);
   pol01177->SetParLimits(0,0,0);
   pol01177->Draw("Csame");
   
   TF1 *pol01178 = new TF1("pol0","pol0",0,13000);
   pol01178->SetBit(TF1::kNotDraw);
   pol01178->SetFillColor(19);
   pol01178->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01178->SetMarkerColor(ci);
   pol01178->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol01178->SetLineColor(ci);
   pol01178->SetLineWidth(3);
   pol01178->SetLineStyle(9);
   pol01178->SetChisquare(2.366583e-30);
   pol01178->SetNDF(11);
   pol01178->GetXaxis()->SetLabelFont(42);
   pol01178->GetXaxis()->SetLabelOffset(0.007);
   pol01178->GetXaxis()->SetLabelSize(0.05);
   pol01178->GetXaxis()->SetTitleSize(0.06);
   pol01178->GetXaxis()->SetTitleOffset(0.9);
   pol01178->GetXaxis()->SetTitleFont(42);
   pol01178->GetYaxis()->SetLabelFont(42);
   pol01178->GetYaxis()->SetLabelOffset(0.007);
   pol01178->GetYaxis()->SetLabelSize(0.05);
   pol01178->GetYaxis()->SetTitleSize(0.06);
   pol01178->GetYaxis()->SetTitleOffset(1.25);
   pol01178->GetYaxis()->SetTitleFont(42);
   pol01178->SetParameter(0,2);
   pol01178->SetParError(0,1.338979e-16);
   pol01178->SetParLimits(0,0,0);
   pol01178->Draw("Csame");
   
   Double_t _fx1177[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1177[12] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1177[12] = {
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
   0,
   0};
   Double_t _fey1177[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1177,_fy1177,_fex1177,_fey1177);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","",100,770,5930);
   Graph_Graph1177->SetMinimum(1.9);
   Graph_Graph1177->SetMaximum(3.1);
   Graph_Graph1177->SetDirectory(0);
   Graph_Graph1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1177->SetLineColor(ci);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1177->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1177);
   
   
   TF1 *pol01178 = new TF1("pol0","pol0",1200,5500);
   pol01178->SetFillColor(19);
   pol01178->SetFillStyle(0);
   pol01178->SetLineColor(2);
   pol01178->SetLineWidth(2);
   pol01178->SetChisquare(2.366583e-30);
   pol01178->SetNDF(11);
   pol01178->GetXaxis()->SetLabelFont(42);
   pol01178->GetXaxis()->SetLabelOffset(0.007);
   pol01178->GetXaxis()->SetLabelSize(0.05);
   pol01178->GetXaxis()->SetTitleSize(0.06);
   pol01178->GetXaxis()->SetTitleOffset(0.9);
   pol01178->GetXaxis()->SetTitleFont(42);
   pol01178->GetYaxis()->SetLabelFont(42);
   pol01178->GetYaxis()->SetLabelOffset(0.007);
   pol01178->GetYaxis()->SetLabelSize(0.05);
   pol01178->GetYaxis()->SetTitleSize(0.06);
   pol01178->GetYaxis()->SetTitleOffset(1.25);
   pol01178->GetYaxis()->SetTitleFont(42);
   pol01178->SetParameter(0,2);
   pol01178->SetParError(0,1.338979e-16);
   pol01178->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01178);
   gre->Draw("p");
   
   Double_t _fx1179[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1179[12] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1179[12] = {
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
   0,
   0};
   Double_t _fey1179[12] = {
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
   0,
   0};
   gre = new TGraphErrors(12,_fx1179,_fy1179,_fex1179,_fey1179);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1179 = new TH1F("Graph_Graph1179","",100,770,5930);
   Graph_Graph1179->SetMinimum(1.9);
   Graph_Graph1179->SetMaximum(3.1);
   Graph_Graph1179->SetDirectory(0);
   Graph_Graph1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1179->SetLineColor(ci);
   Graph_Graph1179->GetXaxis()->SetLabelFont(42);
   Graph_Graph1179->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1179->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1179->GetXaxis()->SetTitleFont(42);
   Graph_Graph1179->GetYaxis()->SetLabelFont(42);
   Graph_Graph1179->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1179->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1179->GetYaxis()->SetTitleFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1179->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1179);
   
   
   TF1 *pol01180 = new TF1("pol0","pol0",1200,5500);
   pol01180->SetFillColor(19);
   pol01180->SetFillStyle(0);
   pol01180->SetLineColor(2);
   pol01180->SetLineWidth(2);
   pol01180->SetChisquare(2.366583e-30);
   pol01180->SetNDF(11);
   pol01180->GetXaxis()->SetLabelFont(42);
   pol01180->GetXaxis()->SetLabelOffset(0.007);
   pol01180->GetXaxis()->SetLabelSize(0.05);
   pol01180->GetXaxis()->SetTitleSize(0.06);
   pol01180->GetXaxis()->SetTitleOffset(0.9);
   pol01180->GetXaxis()->SetTitleFont(42);
   pol01180->GetYaxis()->SetLabelFont(42);
   pol01180->GetYaxis()->SetLabelOffset(0.007);
   pol01180->GetYaxis()->SetLabelSize(0.05);
   pol01180->GetYaxis()->SetTitleSize(0.06);
   pol01180->GetYaxis()->SetTitleOffset(1.25);
   pol01180->GetYaxis()->SetTitleFont(42);
   pol01180->SetParameter(0,2);
   pol01180->SetParError(0,1.338979e-16);
   pol01180->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01180);
   gre->Draw("p");
   
   TF1 *pol01181 = new TF1("pol0","pol0",0,13000);
   pol01181->SetBit(TF1::kNotDraw);
   pol01181->SetFillColor(19);
   pol01181->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01181->SetMarkerColor(ci);
   pol01181->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01181->SetLineColor(ci);
   pol01181->SetLineWidth(3);
   pol01181->SetChisquare(2.366583e-30);
   pol01181->SetNDF(11);
   pol01181->GetXaxis()->SetLabelFont(42);
   pol01181->GetXaxis()->SetLabelOffset(0.007);
   pol01181->GetXaxis()->SetLabelSize(0.05);
   pol01181->GetXaxis()->SetTitleSize(0.06);
   pol01181->GetXaxis()->SetTitleOffset(0.9);
   pol01181->GetXaxis()->SetTitleFont(42);
   pol01181->GetYaxis()->SetLabelFont(42);
   pol01181->GetYaxis()->SetLabelOffset(0.007);
   pol01181->GetYaxis()->SetLabelSize(0.05);
   pol01181->GetYaxis()->SetTitleSize(0.06);
   pol01181->GetYaxis()->SetTitleOffset(1.25);
   pol01181->GetYaxis()->SetTitleFont(42);
   pol01181->SetParameter(0,2);
   pol01181->SetParError(0,1.338979e-16);
   pol01181->SetParLimits(0,0,0);
   pol01181->Draw("Csame");
   
   TF1 *pol01182 = new TF1("pol0","pol0",0,13000);
   pol01182->SetBit(TF1::kNotDraw);
   pol01182->SetFillColor(19);
   pol01182->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01182->SetMarkerColor(ci);
   pol01182->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol01182->SetLineColor(ci);
   pol01182->SetLineWidth(3);
   pol01182->SetLineStyle(9);
   pol01182->SetChisquare(2.366583e-30);
   pol01182->SetNDF(11);
   pol01182->GetXaxis()->SetLabelFont(42);
   pol01182->GetXaxis()->SetLabelOffset(0.007);
   pol01182->GetXaxis()->SetLabelSize(0.05);
   pol01182->GetXaxis()->SetTitleSize(0.06);
   pol01182->GetXaxis()->SetTitleOffset(0.9);
   pol01182->GetXaxis()->SetTitleFont(42);
   pol01182->GetYaxis()->SetLabelFont(42);
   pol01182->GetYaxis()->SetLabelOffset(0.007);
   pol01182->GetYaxis()->SetLabelSize(0.05);
   pol01182->GetYaxis()->SetTitleSize(0.06);
   pol01182->GetYaxis()->SetTitleOffset(1.25);
   pol01182->GetYaxis()->SetTitleFont(42);
   pol01182->SetParameter(0,2);
   pol01182->SetParError(0,1.338979e-16);
   pol01182->SetParLimits(0,0,0);
   pol01182->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol0","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.7788945,0.1783217,0.9974874,0.2482517,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","HPLP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.89284,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.83524,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03648);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
