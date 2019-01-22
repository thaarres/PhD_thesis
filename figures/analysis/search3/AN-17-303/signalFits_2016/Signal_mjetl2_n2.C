void Signal_mjetl2_n2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:28 2018) by ROOT version6.02/05
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
   
   Double_t _fx1199[12] = {
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
   Double_t _fy1199[12] = {
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
   Double_t _fex1199[12] = {
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
   Double_t _fey1199[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1199,_fy1199,_fex1199,_fey1199);
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
   
   TH1F *Graph_Graph1199 = new TH1F("Graph_Graph1199","",100,770,5930);
   Graph_Graph1199->SetMinimum(0);
   Graph_Graph1199->SetMaximum(4);
   Graph_Graph1199->SetDirectory(0);
   Graph_Graph1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1199->SetLineColor(ci);
   Graph_Graph1199->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1199->GetXaxis()->SetRange(7,92);
   Graph_Graph1199->GetXaxis()->SetNdivisions(209);
   Graph_Graph1199->GetXaxis()->SetLabelFont(42);
   Graph_Graph1199->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1199->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1199->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1199->GetXaxis()->SetTitleFont(42);
   Graph_Graph1199->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph1199->GetYaxis()->SetNdivisions(504);
   Graph_Graph1199->GetYaxis()->SetLabelFont(42);
   Graph_Graph1199->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1199->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1199->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1199->GetYaxis()->SetTitleFont(42);
   Graph_Graph1199->GetZaxis()->SetLabelFont(42);
   Graph_Graph1199->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1199->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1199);
   
   
   TF1 *pol01200 = new TF1("pol0","pol0",1200,5500);
   pol01200->SetFillColor(19);
   pol01200->SetFillStyle(0);
   pol01200->SetLineColor(2);
   pol01200->SetLineWidth(2);
   pol01200->SetChisquare(2.366583e-30);
   pol01200->SetNDF(11);
   pol01200->GetXaxis()->SetLabelFont(42);
   pol01200->GetXaxis()->SetLabelOffset(0.007);
   pol01200->GetXaxis()->SetLabelSize(0.05);
   pol01200->GetXaxis()->SetTitleSize(0.06);
   pol01200->GetXaxis()->SetTitleOffset(0.9);
   pol01200->GetXaxis()->SetTitleFont(42);
   pol01200->GetYaxis()->SetLabelFont(42);
   pol01200->GetYaxis()->SetLabelOffset(0.007);
   pol01200->GetYaxis()->SetLabelSize(0.05);
   pol01200->GetYaxis()->SetTitleSize(0.06);
   pol01200->GetYaxis()->SetTitleOffset(1.25);
   pol01200->GetYaxis()->SetTitleFont(42);
   pol01200->SetParameter(0,2);
   pol01200->SetParError(0,1.338979e-16);
   pol01200->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01200);
   gre->Draw("ap");
   
   Double_t _fx1201[12] = {
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
   Double_t _fy1201[12] = {
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
   Double_t _fex1201[12] = {
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
   Double_t _fey1201[12] = {
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
   gre = new TGraphErrors(12,_fx1201,_fy1201,_fex1201,_fey1201);
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
   
   TH1F *Graph_Graph1201 = new TH1F("Graph_Graph1201","",100,770,5930);
   Graph_Graph1201->SetMinimum(1.9);
   Graph_Graph1201->SetMaximum(3.1);
   Graph_Graph1201->SetDirectory(0);
   Graph_Graph1201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1201->SetLineColor(ci);
   Graph_Graph1201->GetXaxis()->SetLabelFont(42);
   Graph_Graph1201->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1201->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1201->GetXaxis()->SetTitleFont(42);
   Graph_Graph1201->GetYaxis()->SetLabelFont(42);
   Graph_Graph1201->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1201->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1201->GetYaxis()->SetTitleFont(42);
   Graph_Graph1201->GetZaxis()->SetLabelFont(42);
   Graph_Graph1201->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1201->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1201);
   
   
   TF1 *pol01202 = new TF1("pol0","pol0",1200,5500);
   pol01202->SetFillColor(19);
   pol01202->SetFillStyle(0);
   pol01202->SetLineColor(2);
   pol01202->SetLineWidth(2);
   pol01202->SetChisquare(2.366583e-30);
   pol01202->SetNDF(11);
   pol01202->GetXaxis()->SetLabelFont(42);
   pol01202->GetXaxis()->SetLabelOffset(0.007);
   pol01202->GetXaxis()->SetLabelSize(0.05);
   pol01202->GetXaxis()->SetTitleSize(0.06);
   pol01202->GetXaxis()->SetTitleOffset(0.9);
   pol01202->GetXaxis()->SetTitleFont(42);
   pol01202->GetYaxis()->SetLabelFont(42);
   pol01202->GetYaxis()->SetLabelOffset(0.007);
   pol01202->GetYaxis()->SetLabelSize(0.05);
   pol01202->GetYaxis()->SetTitleSize(0.06);
   pol01202->GetYaxis()->SetTitleOffset(1.25);
   pol01202->GetYaxis()->SetTitleFont(42);
   pol01202->SetParameter(0,2);
   pol01202->SetParError(0,1.338979e-16);
   pol01202->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01202);
   gre->Draw("p");
   
   Double_t _fx1203[12] = {
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
   Double_t _fy1203[12] = {
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
   Double_t _fex1203[12] = {
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
   Double_t _fey1203[12] = {
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
   gre = new TGraphErrors(12,_fx1203,_fy1203,_fex1203,_fey1203);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11991203 = new TH1F("Graph_Graph_Graph11991203","",100,770,5930);
   Graph_Graph_Graph11991203->SetMinimum(0);
   Graph_Graph_Graph11991203->SetMaximum(4);
   Graph_Graph_Graph11991203->SetDirectory(0);
   Graph_Graph_Graph11991203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11991203->SetLineColor(ci);
   Graph_Graph_Graph11991203->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph11991203->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph11991203->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11991203->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11991203->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11991203->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11991203->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11991203->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11991203->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph_Graph11991203->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11991203->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11991203->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11991203->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11991203->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11991203->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11991203->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11991203->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11991203->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11991203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11991203);
   
   
   TF1 *pol01204 = new TF1("pol0","pol0",1200,5500);
   pol01204->SetFillColor(19);
   pol01204->SetFillStyle(0);
   pol01204->SetLineColor(2);
   pol01204->SetLineWidth(2);
   pol01204->SetChisquare(2.366583e-30);
   pol01204->SetNDF(11);
   pol01204->GetXaxis()->SetLabelFont(42);
   pol01204->GetXaxis()->SetLabelOffset(0.007);
   pol01204->GetXaxis()->SetLabelSize(0.05);
   pol01204->GetXaxis()->SetTitleSize(0.06);
   pol01204->GetXaxis()->SetTitleOffset(0.9);
   pol01204->GetXaxis()->SetTitleFont(42);
   pol01204->GetYaxis()->SetLabelFont(42);
   pol01204->GetYaxis()->SetLabelOffset(0.007);
   pol01204->GetYaxis()->SetLabelSize(0.05);
   pol01204->GetYaxis()->SetTitleSize(0.06);
   pol01204->GetYaxis()->SetTitleOffset(1.25);
   pol01204->GetYaxis()->SetTitleFont(42);
   pol01204->SetParameter(0,2);
   pol01204->SetParError(0,1.338979e-16);
   pol01204->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01204);
   gre->Draw("p");
   
   TF1 *pol01205 = new TF1("pol0","pol0",0,13000);
   pol01205->SetBit(TF1::kNotDraw);
   pol01205->SetFillColor(19);
   pol01205->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01205->SetMarkerColor(ci);
   pol01205->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01205->SetLineColor(ci);
   pol01205->SetLineWidth(3);
   pol01205->SetChisquare(2.366583e-30);
   pol01205->SetNDF(11);
   pol01205->GetXaxis()->SetLabelFont(42);
   pol01205->GetXaxis()->SetLabelOffset(0.007);
   pol01205->GetXaxis()->SetLabelSize(0.05);
   pol01205->GetXaxis()->SetTitleSize(0.06);
   pol01205->GetXaxis()->SetTitleOffset(0.9);
   pol01205->GetXaxis()->SetTitleFont(42);
   pol01205->GetYaxis()->SetLabelFont(42);
   pol01205->GetYaxis()->SetLabelOffset(0.007);
   pol01205->GetYaxis()->SetLabelSize(0.05);
   pol01205->GetYaxis()->SetTitleSize(0.06);
   pol01205->GetYaxis()->SetTitleOffset(1.25);
   pol01205->GetYaxis()->SetTitleFont(42);
   pol01205->SetParameter(0,2);
   pol01205->SetParError(0,1.338979e-16);
   pol01205->SetParLimits(0,0,0);
   pol01205->Draw("Csame");
   
   TF1 *pol01206 = new TF1("pol0","pol0",0,13000);
   pol01206->SetBit(TF1::kNotDraw);
   pol01206->SetFillColor(19);
   pol01206->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01206->SetMarkerColor(ci);
   pol01206->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol01206->SetLineColor(ci);
   pol01206->SetLineWidth(3);
   pol01206->SetLineStyle(9);
   pol01206->SetChisquare(2.366583e-30);
   pol01206->SetNDF(11);
   pol01206->GetXaxis()->SetLabelFont(42);
   pol01206->GetXaxis()->SetLabelOffset(0.007);
   pol01206->GetXaxis()->SetLabelSize(0.05);
   pol01206->GetXaxis()->SetTitleSize(0.06);
   pol01206->GetXaxis()->SetTitleOffset(0.9);
   pol01206->GetXaxis()->SetTitleFont(42);
   pol01206->GetYaxis()->SetLabelFont(42);
   pol01206->GetYaxis()->SetLabelOffset(0.007);
   pol01206->GetYaxis()->SetLabelSize(0.05);
   pol01206->GetYaxis()->SetTitleSize(0.06);
   pol01206->GetYaxis()->SetTitleOffset(1.25);
   pol01206->GetYaxis()->SetTitleFont(42);
   pol01206->SetParameter(0,2);
   pol01206->SetParError(0,1.338979e-16);
   pol01206->SetParLimits(0,0,0);
   pol01206->Draw("Csame");
   
   Double_t _fx1205[12] = {
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
   Double_t _fy1205[12] = {
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
   Double_t _fex1205[12] = {
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
   Double_t _fey1205[12] = {
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
   gre = new TGraphErrors(12,_fx1205,_fy1205,_fex1205,_fey1205);
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
   
   TH1F *Graph_Graph1205 = new TH1F("Graph_Graph1205","",100,770,5930);
   Graph_Graph1205->SetMinimum(1.9);
   Graph_Graph1205->SetMaximum(3.1);
   Graph_Graph1205->SetDirectory(0);
   Graph_Graph1205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1205->SetLineColor(ci);
   Graph_Graph1205->GetXaxis()->SetLabelFont(42);
   Graph_Graph1205->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1205->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1205->GetXaxis()->SetTitleFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1205->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1205->GetYaxis()->SetTitleFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1205->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1205);
   
   
   TF1 *pol01206 = new TF1("pol0","pol0",1200,5500);
   pol01206->SetFillColor(19);
   pol01206->SetFillStyle(0);
   pol01206->SetLineColor(2);
   pol01206->SetLineWidth(2);
   pol01206->SetChisquare(2.366583e-30);
   pol01206->SetNDF(11);
   pol01206->GetXaxis()->SetLabelFont(42);
   pol01206->GetXaxis()->SetLabelOffset(0.007);
   pol01206->GetXaxis()->SetLabelSize(0.05);
   pol01206->GetXaxis()->SetTitleSize(0.06);
   pol01206->GetXaxis()->SetTitleOffset(0.9);
   pol01206->GetXaxis()->SetTitleFont(42);
   pol01206->GetYaxis()->SetLabelFont(42);
   pol01206->GetYaxis()->SetLabelOffset(0.007);
   pol01206->GetYaxis()->SetLabelSize(0.05);
   pol01206->GetYaxis()->SetTitleSize(0.06);
   pol01206->GetYaxis()->SetTitleOffset(1.25);
   pol01206->GetYaxis()->SetTitleFont(42);
   pol01206->SetParameter(0,2);
   pol01206->SetParError(0,1.338979e-16);
   pol01206->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01206);
   gre->Draw("p");
   
   Double_t _fx1207[12] = {
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
   Double_t _fy1207[12] = {
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
   Double_t _fex1207[12] = {
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
   Double_t _fey1207[12] = {
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
   gre = new TGraphErrors(12,_fx1207,_fy1207,_fex1207,_fey1207);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1207 = new TH1F("Graph_Graph1207","",100,770,5930);
   Graph_Graph1207->SetMinimum(1.9);
   Graph_Graph1207->SetMaximum(3.1);
   Graph_Graph1207->SetDirectory(0);
   Graph_Graph1207->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1207->SetLineColor(ci);
   Graph_Graph1207->GetXaxis()->SetLabelFont(42);
   Graph_Graph1207->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1207->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1207->GetXaxis()->SetTitleFont(42);
   Graph_Graph1207->GetYaxis()->SetLabelFont(42);
   Graph_Graph1207->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1207->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1207->GetYaxis()->SetTitleFont(42);
   Graph_Graph1207->GetZaxis()->SetLabelFont(42);
   Graph_Graph1207->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1207->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1207);
   
   
   TF1 *pol01208 = new TF1("pol0","pol0",1200,5500);
   pol01208->SetFillColor(19);
   pol01208->SetFillStyle(0);
   pol01208->SetLineColor(2);
   pol01208->SetLineWidth(2);
   pol01208->SetChisquare(2.366583e-30);
   pol01208->SetNDF(11);
   pol01208->GetXaxis()->SetLabelFont(42);
   pol01208->GetXaxis()->SetLabelOffset(0.007);
   pol01208->GetXaxis()->SetLabelSize(0.05);
   pol01208->GetXaxis()->SetTitleSize(0.06);
   pol01208->GetXaxis()->SetTitleOffset(0.9);
   pol01208->GetXaxis()->SetTitleFont(42);
   pol01208->GetYaxis()->SetLabelFont(42);
   pol01208->GetYaxis()->SetLabelOffset(0.007);
   pol01208->GetYaxis()->SetLabelSize(0.05);
   pol01208->GetYaxis()->SetTitleSize(0.06);
   pol01208->GetYaxis()->SetTitleOffset(1.25);
   pol01208->GetYaxis()->SetTitleFont(42);
   pol01208->SetParameter(0,2);
   pol01208->SetParError(0,1.338979e-16);
   pol01208->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01208);
   gre->Draw("p");
   
   TF1 *pol01209 = new TF1("pol0","pol0",0,13000);
   pol01209->SetBit(TF1::kNotDraw);
   pol01209->SetFillColor(19);
   pol01209->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01209->SetMarkerColor(ci);
   pol01209->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01209->SetLineColor(ci);
   pol01209->SetLineWidth(3);
   pol01209->SetChisquare(2.366583e-30);
   pol01209->SetNDF(11);
   pol01209->GetXaxis()->SetLabelFont(42);
   pol01209->GetXaxis()->SetLabelOffset(0.007);
   pol01209->GetXaxis()->SetLabelSize(0.05);
   pol01209->GetXaxis()->SetTitleSize(0.06);
   pol01209->GetXaxis()->SetTitleOffset(0.9);
   pol01209->GetXaxis()->SetTitleFont(42);
   pol01209->GetYaxis()->SetLabelFont(42);
   pol01209->GetYaxis()->SetLabelOffset(0.007);
   pol01209->GetYaxis()->SetLabelSize(0.05);
   pol01209->GetYaxis()->SetTitleSize(0.06);
   pol01209->GetYaxis()->SetTitleOffset(1.25);
   pol01209->GetYaxis()->SetTitleFont(42);
   pol01209->SetParameter(0,2);
   pol01209->SetParError(0,1.338979e-16);
   pol01209->SetParLimits(0,0,0);
   pol01209->Draw("Csame");
   
   TF1 *pol01210 = new TF1("pol0","pol0",0,13000);
   pol01210->SetBit(TF1::kNotDraw);
   pol01210->SetFillColor(19);
   pol01210->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01210->SetMarkerColor(ci);
   pol01210->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol01210->SetLineColor(ci);
   pol01210->SetLineWidth(3);
   pol01210->SetLineStyle(9);
   pol01210->SetChisquare(2.366583e-30);
   pol01210->SetNDF(11);
   pol01210->GetXaxis()->SetLabelFont(42);
   pol01210->GetXaxis()->SetLabelOffset(0.007);
   pol01210->GetXaxis()->SetLabelSize(0.05);
   pol01210->GetXaxis()->SetTitleSize(0.06);
   pol01210->GetXaxis()->SetTitleOffset(0.9);
   pol01210->GetXaxis()->SetTitleFont(42);
   pol01210->GetYaxis()->SetLabelFont(42);
   pol01210->GetYaxis()->SetLabelOffset(0.007);
   pol01210->GetYaxis()->SetLabelSize(0.05);
   pol01210->GetYaxis()->SetTitleSize(0.06);
   pol01210->GetYaxis()->SetTitleOffset(1.25);
   pol01210->GetYaxis()->SetTitleFont(42);
   pol01210->SetParameter(0,2);
   pol01210->SetParError(0,1.338979e-16);
   pol01210->SetParLimits(0,0,0);
   pol01210->Draw("Csame");
   
   Double_t _fx1209[12] = {
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
   Double_t _fy1209[12] = {
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
   Double_t _fex1209[12] = {
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
   Double_t _fey1209[12] = {
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
   gre = new TGraphErrors(12,_fx1209,_fy1209,_fex1209,_fey1209);
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
   
   TH1F *Graph_Graph1209 = new TH1F("Graph_Graph1209","",100,770,5930);
   Graph_Graph1209->SetMinimum(1.9);
   Graph_Graph1209->SetMaximum(3.1);
   Graph_Graph1209->SetDirectory(0);
   Graph_Graph1209->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1209->SetLineColor(ci);
   Graph_Graph1209->GetXaxis()->SetLabelFont(42);
   Graph_Graph1209->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1209->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1209->GetXaxis()->SetTitleFont(42);
   Graph_Graph1209->GetYaxis()->SetLabelFont(42);
   Graph_Graph1209->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1209->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1209->GetYaxis()->SetTitleFont(42);
   Graph_Graph1209->GetZaxis()->SetLabelFont(42);
   Graph_Graph1209->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1209->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1209);
   
   
   TF1 *pol01210 = new TF1("pol0","pol0",1200,5500);
   pol01210->SetFillColor(19);
   pol01210->SetFillStyle(0);
   pol01210->SetLineColor(2);
   pol01210->SetLineWidth(2);
   pol01210->SetChisquare(2.366583e-30);
   pol01210->SetNDF(11);
   pol01210->GetXaxis()->SetLabelFont(42);
   pol01210->GetXaxis()->SetLabelOffset(0.007);
   pol01210->GetXaxis()->SetLabelSize(0.05);
   pol01210->GetXaxis()->SetTitleSize(0.06);
   pol01210->GetXaxis()->SetTitleOffset(0.9);
   pol01210->GetXaxis()->SetTitleFont(42);
   pol01210->GetYaxis()->SetLabelFont(42);
   pol01210->GetYaxis()->SetLabelOffset(0.007);
   pol01210->GetYaxis()->SetLabelSize(0.05);
   pol01210->GetYaxis()->SetTitleSize(0.06);
   pol01210->GetYaxis()->SetTitleOffset(1.25);
   pol01210->GetYaxis()->SetTitleFont(42);
   pol01210->SetParameter(0,2);
   pol01210->SetParError(0,1.338979e-16);
   pol01210->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01210);
   gre->Draw("p");
   
   Double_t _fx1211[12] = {
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
   Double_t _fy1211[12] = {
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
   Double_t _fex1211[12] = {
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
   Double_t _fey1211[12] = {
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
   gre = new TGraphErrors(12,_fx1211,_fy1211,_fex1211,_fey1211);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1211 = new TH1F("Graph_Graph1211","",100,770,5930);
   Graph_Graph1211->SetMinimum(1.9);
   Graph_Graph1211->SetMaximum(3.1);
   Graph_Graph1211->SetDirectory(0);
   Graph_Graph1211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1211->SetLineColor(ci);
   Graph_Graph1211->GetXaxis()->SetLabelFont(42);
   Graph_Graph1211->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1211->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1211->GetXaxis()->SetTitleFont(42);
   Graph_Graph1211->GetYaxis()->SetLabelFont(42);
   Graph_Graph1211->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1211->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1211->GetYaxis()->SetTitleFont(42);
   Graph_Graph1211->GetZaxis()->SetLabelFont(42);
   Graph_Graph1211->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1211->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1211);
   
   
   TF1 *pol01212 = new TF1("pol0","pol0",1200,5500);
   pol01212->SetFillColor(19);
   pol01212->SetFillStyle(0);
   pol01212->SetLineColor(2);
   pol01212->SetLineWidth(2);
   pol01212->SetChisquare(2.366583e-30);
   pol01212->SetNDF(11);
   pol01212->GetXaxis()->SetLabelFont(42);
   pol01212->GetXaxis()->SetLabelOffset(0.007);
   pol01212->GetXaxis()->SetLabelSize(0.05);
   pol01212->GetXaxis()->SetTitleSize(0.06);
   pol01212->GetXaxis()->SetTitleOffset(0.9);
   pol01212->GetXaxis()->SetTitleFont(42);
   pol01212->GetYaxis()->SetLabelFont(42);
   pol01212->GetYaxis()->SetLabelOffset(0.007);
   pol01212->GetYaxis()->SetLabelSize(0.05);
   pol01212->GetYaxis()->SetTitleSize(0.06);
   pol01212->GetYaxis()->SetTitleOffset(1.25);
   pol01212->GetYaxis()->SetTitleFont(42);
   pol01212->SetParameter(0,2);
   pol01212->SetParError(0,1.338979e-16);
   pol01212->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01212);
   gre->Draw("p");
   
   TF1 *pol01213 = new TF1("pol0","pol0",0,13000);
   pol01213->SetBit(TF1::kNotDraw);
   pol01213->SetFillColor(19);
   pol01213->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01213->SetMarkerColor(ci);
   pol01213->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01213->SetLineColor(ci);
   pol01213->SetLineWidth(3);
   pol01213->SetChisquare(2.366583e-30);
   pol01213->SetNDF(11);
   pol01213->GetXaxis()->SetLabelFont(42);
   pol01213->GetXaxis()->SetLabelOffset(0.007);
   pol01213->GetXaxis()->SetLabelSize(0.05);
   pol01213->GetXaxis()->SetTitleSize(0.06);
   pol01213->GetXaxis()->SetTitleOffset(0.9);
   pol01213->GetXaxis()->SetTitleFont(42);
   pol01213->GetYaxis()->SetLabelFont(42);
   pol01213->GetYaxis()->SetLabelOffset(0.007);
   pol01213->GetYaxis()->SetLabelSize(0.05);
   pol01213->GetYaxis()->SetTitleSize(0.06);
   pol01213->GetYaxis()->SetTitleOffset(1.25);
   pol01213->GetYaxis()->SetTitleFont(42);
   pol01213->SetParameter(0,2);
   pol01213->SetParError(0,1.338979e-16);
   pol01213->SetParLimits(0,0,0);
   pol01213->Draw("Csame");
   
   TF1 *pol01214 = new TF1("pol0","pol0",0,13000);
   pol01214->SetBit(TF1::kNotDraw);
   pol01214->SetFillColor(19);
   pol01214->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01214->SetMarkerColor(ci);
   pol01214->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol01214->SetLineColor(ci);
   pol01214->SetLineWidth(3);
   pol01214->SetLineStyle(9);
   pol01214->SetChisquare(2.366583e-30);
   pol01214->SetNDF(11);
   pol01214->GetXaxis()->SetLabelFont(42);
   pol01214->GetXaxis()->SetLabelOffset(0.007);
   pol01214->GetXaxis()->SetLabelSize(0.05);
   pol01214->GetXaxis()->SetTitleSize(0.06);
   pol01214->GetXaxis()->SetTitleOffset(0.9);
   pol01214->GetXaxis()->SetTitleFont(42);
   pol01214->GetYaxis()->SetLabelFont(42);
   pol01214->GetYaxis()->SetLabelOffset(0.007);
   pol01214->GetYaxis()->SetLabelSize(0.05);
   pol01214->GetYaxis()->SetTitleSize(0.06);
   pol01214->GetYaxis()->SetTitleOffset(1.25);
   pol01214->GetYaxis()->SetTitleFont(42);
   pol01214->SetParameter(0,2);
   pol01214->SetParError(0,1.338979e-16);
   pol01214->SetParLimits(0,0,0);
   pol01214->Draw("Csame");
   
   Double_t _fx1213[12] = {
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
   Double_t _fy1213[12] = {
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
   Double_t _fex1213[12] = {
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
   Double_t _fey1213[12] = {
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
   gre = new TGraphErrors(12,_fx1213,_fy1213,_fex1213,_fey1213);
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
   
   TH1F *Graph_Graph1213 = new TH1F("Graph_Graph1213","",100,770,5930);
   Graph_Graph1213->SetMinimum(1.9);
   Graph_Graph1213->SetMaximum(3.1);
   Graph_Graph1213->SetDirectory(0);
   Graph_Graph1213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1213->SetLineColor(ci);
   Graph_Graph1213->GetXaxis()->SetLabelFont(42);
   Graph_Graph1213->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1213->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1213->GetXaxis()->SetTitleFont(42);
   Graph_Graph1213->GetYaxis()->SetLabelFont(42);
   Graph_Graph1213->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1213->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1213->GetYaxis()->SetTitleFont(42);
   Graph_Graph1213->GetZaxis()->SetLabelFont(42);
   Graph_Graph1213->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1213->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1213);
   
   
   TF1 *pol01214 = new TF1("pol0","pol0",1200,5500);
   pol01214->SetFillColor(19);
   pol01214->SetFillStyle(0);
   pol01214->SetLineColor(2);
   pol01214->SetLineWidth(2);
   pol01214->SetChisquare(2.366583e-30);
   pol01214->SetNDF(11);
   pol01214->GetXaxis()->SetLabelFont(42);
   pol01214->GetXaxis()->SetLabelOffset(0.007);
   pol01214->GetXaxis()->SetLabelSize(0.05);
   pol01214->GetXaxis()->SetTitleSize(0.06);
   pol01214->GetXaxis()->SetTitleOffset(0.9);
   pol01214->GetXaxis()->SetTitleFont(42);
   pol01214->GetYaxis()->SetLabelFont(42);
   pol01214->GetYaxis()->SetLabelOffset(0.007);
   pol01214->GetYaxis()->SetLabelSize(0.05);
   pol01214->GetYaxis()->SetTitleSize(0.06);
   pol01214->GetYaxis()->SetTitleOffset(1.25);
   pol01214->GetYaxis()->SetTitleFont(42);
   pol01214->SetParameter(0,2);
   pol01214->SetParError(0,1.338979e-16);
   pol01214->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01214);
   gre->Draw("p");
   
   Double_t _fx1215[12] = {
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
   Double_t _fy1215[12] = {
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
   Double_t _fex1215[12] = {
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
   Double_t _fey1215[12] = {
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
   gre = new TGraphErrors(12,_fx1215,_fy1215,_fex1215,_fey1215);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1215 = new TH1F("Graph_Graph1215","",100,770,5930);
   Graph_Graph1215->SetMinimum(1.9);
   Graph_Graph1215->SetMaximum(3.1);
   Graph_Graph1215->SetDirectory(0);
   Graph_Graph1215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1215->SetLineColor(ci);
   Graph_Graph1215->GetXaxis()->SetLabelFont(42);
   Graph_Graph1215->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1215->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1215->GetXaxis()->SetTitleFont(42);
   Graph_Graph1215->GetYaxis()->SetLabelFont(42);
   Graph_Graph1215->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1215->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1215->GetYaxis()->SetTitleFont(42);
   Graph_Graph1215->GetZaxis()->SetLabelFont(42);
   Graph_Graph1215->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1215->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1215);
   
   
   TF1 *pol01216 = new TF1("pol0","pol0",1200,5500);
   pol01216->SetFillColor(19);
   pol01216->SetFillStyle(0);
   pol01216->SetLineColor(2);
   pol01216->SetLineWidth(2);
   pol01216->SetChisquare(2.366583e-30);
   pol01216->SetNDF(11);
   pol01216->GetXaxis()->SetLabelFont(42);
   pol01216->GetXaxis()->SetLabelOffset(0.007);
   pol01216->GetXaxis()->SetLabelSize(0.05);
   pol01216->GetXaxis()->SetTitleSize(0.06);
   pol01216->GetXaxis()->SetTitleOffset(0.9);
   pol01216->GetXaxis()->SetTitleFont(42);
   pol01216->GetYaxis()->SetLabelFont(42);
   pol01216->GetYaxis()->SetLabelOffset(0.007);
   pol01216->GetYaxis()->SetLabelSize(0.05);
   pol01216->GetYaxis()->SetTitleSize(0.06);
   pol01216->GetYaxis()->SetTitleOffset(1.25);
   pol01216->GetYaxis()->SetTitleFont(42);
   pol01216->SetParameter(0,2);
   pol01216->SetParError(0,1.338979e-16);
   pol01216->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01216);
   gre->Draw("p");
   
   TF1 *pol01217 = new TF1("pol0","pol0",0,13000);
   pol01217->SetBit(TF1::kNotDraw);
   pol01217->SetFillColor(19);
   pol01217->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01217->SetMarkerColor(ci);
   pol01217->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01217->SetLineColor(ci);
   pol01217->SetLineWidth(3);
   pol01217->SetChisquare(2.366583e-30);
   pol01217->SetNDF(11);
   pol01217->GetXaxis()->SetLabelFont(42);
   pol01217->GetXaxis()->SetLabelOffset(0.007);
   pol01217->GetXaxis()->SetLabelSize(0.05);
   pol01217->GetXaxis()->SetTitleSize(0.06);
   pol01217->GetXaxis()->SetTitleOffset(0.9);
   pol01217->GetXaxis()->SetTitleFont(42);
   pol01217->GetYaxis()->SetLabelFont(42);
   pol01217->GetYaxis()->SetLabelOffset(0.007);
   pol01217->GetYaxis()->SetLabelSize(0.05);
   pol01217->GetYaxis()->SetTitleSize(0.06);
   pol01217->GetYaxis()->SetTitleOffset(1.25);
   pol01217->GetYaxis()->SetTitleFont(42);
   pol01217->SetParameter(0,2);
   pol01217->SetParError(0,1.338979e-16);
   pol01217->SetParLimits(0,0,0);
   pol01217->Draw("Csame");
   
   TF1 *pol01218 = new TF1("pol0","pol0",0,13000);
   pol01218->SetBit(TF1::kNotDraw);
   pol01218->SetFillColor(19);
   pol01218->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01218->SetMarkerColor(ci);
   pol01218->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol01218->SetLineColor(ci);
   pol01218->SetLineWidth(3);
   pol01218->SetLineStyle(9);
   pol01218->SetChisquare(2.366583e-30);
   pol01218->SetNDF(11);
   pol01218->GetXaxis()->SetLabelFont(42);
   pol01218->GetXaxis()->SetLabelOffset(0.007);
   pol01218->GetXaxis()->SetLabelSize(0.05);
   pol01218->GetXaxis()->SetTitleSize(0.06);
   pol01218->GetXaxis()->SetTitleOffset(0.9);
   pol01218->GetXaxis()->SetTitleFont(42);
   pol01218->GetYaxis()->SetLabelFont(42);
   pol01218->GetYaxis()->SetLabelOffset(0.007);
   pol01218->GetYaxis()->SetLabelSize(0.05);
   pol01218->GetYaxis()->SetTitleSize(0.06);
   pol01218->GetYaxis()->SetTitleOffset(1.25);
   pol01218->GetYaxis()->SetTitleFont(42);
   pol01218->SetParameter(0,2);
   pol01218->SetParError(0,1.338979e-16);
   pol01218->SetParLimits(0,0,0);
   pol01218->Draw("Csame");
   
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
