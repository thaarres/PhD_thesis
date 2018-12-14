void Signal_mjetl1_alpha2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:08 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,-0.927835,5728.514,5.515464);
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
   
   Double_t _fx1073[12] = {
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
   Double_t _fy1073[12] = {
   2.356964,
   2.295416,
   2.378766,
   2.264102,
   2.608898,
   2.196342,
   2.238093,
   2.046274,
   2.168779,
   1.954197,
   1.873332,
   1.892099};
   Double_t _fex1073[12] = {
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
   Double_t _fey1073[12] = {
   0.1498746,
   0.1436853,
   0.1313308,
   0.1084543,
   0.1471054,
   0.09399162,
   0.0843716,
   0.1072106,
   0.0706896,
   0.0967046,
   0.05729458,
   0.05578393};
   TGraphErrors *gre = new TGraphErrors(12,_fx1073,_fy1073,_fex1073,_fey1073);
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
   
   TH1F *Graph_Graph1073 = new TH1F("Graph_Graph1073","",100,770,5930);
   Graph_Graph1073->SetMinimum(0);
   Graph_Graph1073->SetMaximum(5);
   Graph_Graph1073->SetDirectory(0);
   Graph_Graph1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1073->SetLineColor(ci);
   Graph_Graph1073->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1073->GetXaxis()->SetRange(7,92);
   Graph_Graph1073->GetXaxis()->SetNdivisions(209);
   Graph_Graph1073->GetXaxis()->SetLabelFont(42);
   Graph_Graph1073->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1073->GetXaxis()->SetTitleFont(42);
   Graph_Graph1073->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph1073->GetYaxis()->SetNdivisions(504);
   Graph_Graph1073->GetYaxis()->SetLabelFont(42);
   Graph_Graph1073->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1073->GetYaxis()->SetTitleFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1073);
   
   
   TF1 *pol31074 = new TF1("pol3","pol3",1200,5500);
   pol31074->SetFillColor(19);
   pol31074->SetFillStyle(0);
   pol31074->SetLineColor(2);
   pol31074->SetLineWidth(2);
   pol31074->SetChisquare(9.164719);
   pol31074->SetNDF(8);
   pol31074->GetXaxis()->SetLabelFont(42);
   pol31074->GetXaxis()->SetLabelOffset(0.007);
   pol31074->GetXaxis()->SetLabelSize(0.05);
   pol31074->GetXaxis()->SetTitleSize(0.06);
   pol31074->GetXaxis()->SetTitleOffset(0.9);
   pol31074->GetXaxis()->SetTitleFont(42);
   pol31074->GetYaxis()->SetLabelFont(42);
   pol31074->GetYaxis()->SetLabelOffset(0.007);
   pol31074->GetYaxis()->SetLabelSize(0.05);
   pol31074->GetYaxis()->SetTitleSize(0.06);
   pol31074->GetYaxis()->SetTitleOffset(1.25);
   pol31074->GetYaxis()->SetTitleFont(42);
   pol31074->SetParameter(0,2.113677);
   pol31074->SetParError(0,0.4926417);
   pol31074->SetParLimits(0,0,0);
   pol31074->SetParameter(1,0.0003212409);
   pol31074->SetParError(1,0.000504673);
   pol31074->SetParLimits(1,0,0);
   pol31074->SetParameter(2,-1.286554e-07);
   pol31074->SetParError(2,1.550289e-07);
   pol31074->SetParLimits(2,0,0);
   pol31074->SetParameter(3,1.131722e-11);
   pol31074->SetParError(3,1.467637e-11);
   pol31074->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31074);
   gre->Draw("ap");
   
   Double_t _fx1075[12] = {
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
   Double_t _fy1075[12] = {
   2.059523,
   2.029747,
   2.014189,
   2.061432,
   1.961169,
   2.032617,
   1.977609,
   2.020798,
   2.086063,
   2.031383,
   1.884039,
   1.727019};
   Double_t _fex1075[12] = {
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
   Double_t _fey1075[12] = {
   0.06024702,
   0.04507037,
   0.04419878,
   0.04553444,
   0.1010145,
   0.04553826,
   0.04408525,
   0.05230475,
   0.04391414,
   0.04479291,
   0.0374164,
   0.04412564};
   gre = new TGraphErrors(12,_fx1075,_fy1075,_fex1075,_fey1075);
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
   
   TH1F *Graph_Graph1075 = new TH1F("Graph_Graph1075","",100,770,5930);
   Graph_Graph1075->SetMinimum(1.638185);
   Graph_Graph1075->SetMaximum(2.174686);
   Graph_Graph1075->SetDirectory(0);
   Graph_Graph1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1075->SetLineColor(ci);
   Graph_Graph1075->GetXaxis()->SetLabelFont(42);
   Graph_Graph1075->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1075->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1075->GetXaxis()->SetTitleFont(42);
   Graph_Graph1075->GetYaxis()->SetLabelFont(42);
   Graph_Graph1075->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1075->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1075->GetYaxis()->SetTitleFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1075->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1075);
   
   
   TF1 *pol31076 = new TF1("pol3","pol3",1200,5500);
   pol31076->SetFillColor(19);
   pol31076->SetFillStyle(0);
   pol31076->SetLineColor(2);
   pol31076->SetLineWidth(2);
   pol31076->SetChisquare(5.082306);
   pol31076->SetNDF(8);
   pol31076->GetXaxis()->SetLabelFont(42);
   pol31076->GetXaxis()->SetLabelOffset(0.007);
   pol31076->GetXaxis()->SetLabelSize(0.05);
   pol31076->GetXaxis()->SetTitleSize(0.06);
   pol31076->GetXaxis()->SetTitleOffset(0.9);
   pol31076->GetXaxis()->SetTitleFont(42);
   pol31076->GetYaxis()->SetLabelFont(42);
   pol31076->GetYaxis()->SetLabelOffset(0.007);
   pol31076->GetYaxis()->SetLabelSize(0.05);
   pol31076->GetYaxis()->SetTitleSize(0.06);
   pol31076->GetYaxis()->SetTitleOffset(1.25);
   pol31076->GetYaxis()->SetTitleFont(42);
   pol31076->SetParameter(0,2.522282);
   pol31076->SetParError(0,0.2296135);
   pol31076->SetParLimits(0,0,0);
   pol31076->SetParameter(1,-0.0006051838);
   pol31076->SetParError(1,0.0002493711);
   pol31076->SetParLimits(1,0,0);
   pol31076->SetParameter(2,2.233816e-07);
   pol31076->SetParError(2,7.99473e-08);
   pol31076->SetParLimits(2,0,0);
   pol31076->SetParameter(3,-2.541523e-11);
   pol31076->SetParError(3,7.844377e-12);
   pol31076->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31076);
   gre->Draw("p");
   
   Double_t _fx1077[12] = {
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
   Double_t _fy1077[12] = {
   2.356964,
   2.295416,
   2.378766,
   2.264102,
   2.608898,
   2.196342,
   2.238093,
   2.046274,
   2.168779,
   1.954197,
   1.873332,
   1.892099};
   Double_t _fex1077[12] = {
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
   Double_t _fey1077[12] = {
   0.1498746,
   0.1436853,
   0.1313308,
   0.1084543,
   0.1471054,
   0.09399162,
   0.0843716,
   0.1072106,
   0.0706896,
   0.0967046,
   0.05729458,
   0.05578393};
   gre = new TGraphErrors(12,_fx1077,_fy1077,_fex1077,_fey1077);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10731077 = new TH1F("Graph_Graph_Graph10731077","",100,770,5930);
   Graph_Graph_Graph10731077->SetMinimum(0);
   Graph_Graph_Graph10731077->SetMaximum(5);
   Graph_Graph_Graph10731077->SetDirectory(0);
   Graph_Graph_Graph10731077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10731077->SetLineColor(ci);
   Graph_Graph_Graph10731077->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph10731077->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph10731077->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10731077->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10731077->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10731077->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10731077->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10731077->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10731077->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph_Graph10731077->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10731077->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10731077->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10731077->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10731077->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10731077->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10731077->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10731077->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10731077->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10731077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10731077);
   
   
   TF1 *pol31078 = new TF1("pol3","pol3",1200,5500);
   pol31078->SetFillColor(19);
   pol31078->SetFillStyle(0);
   pol31078->SetLineColor(2);
   pol31078->SetLineWidth(2);
   pol31078->SetChisquare(9.164719);
   pol31078->SetNDF(8);
   pol31078->GetXaxis()->SetLabelFont(42);
   pol31078->GetXaxis()->SetLabelOffset(0.007);
   pol31078->GetXaxis()->SetLabelSize(0.05);
   pol31078->GetXaxis()->SetTitleSize(0.06);
   pol31078->GetXaxis()->SetTitleOffset(0.9);
   pol31078->GetXaxis()->SetTitleFont(42);
   pol31078->GetYaxis()->SetLabelFont(42);
   pol31078->GetYaxis()->SetLabelOffset(0.007);
   pol31078->GetYaxis()->SetLabelSize(0.05);
   pol31078->GetYaxis()->SetTitleSize(0.06);
   pol31078->GetYaxis()->SetTitleOffset(1.25);
   pol31078->GetYaxis()->SetTitleFont(42);
   pol31078->SetParameter(0,2.113677);
   pol31078->SetParError(0,0.4926417);
   pol31078->SetParLimits(0,0,0);
   pol31078->SetParameter(1,0.0003212409);
   pol31078->SetParError(1,0.000504673);
   pol31078->SetParLimits(1,0,0);
   pol31078->SetParameter(2,-1.286554e-07);
   pol31078->SetParError(2,1.550289e-07);
   pol31078->SetParLimits(2,0,0);
   pol31078->SetParameter(3,1.131722e-11);
   pol31078->SetParError(3,1.467637e-11);
   pol31078->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31078);
   gre->Draw("p");
   
   TF1 *pol31079 = new TF1("pol3","pol3",0,13000);
   pol31079->SetBit(TF1::kNotDraw);
   pol31079->SetFillColor(19);
   pol31079->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol31079->SetMarkerColor(ci);
   pol31079->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol31079->SetLineColor(ci);
   pol31079->SetLineWidth(3);
   pol31079->SetChisquare(9.164719);
   pol31079->SetNDF(8);
   pol31079->GetXaxis()->SetLabelFont(42);
   pol31079->GetXaxis()->SetLabelOffset(0.007);
   pol31079->GetXaxis()->SetLabelSize(0.05);
   pol31079->GetXaxis()->SetTitleSize(0.06);
   pol31079->GetXaxis()->SetTitleOffset(0.9);
   pol31079->GetXaxis()->SetTitleFont(42);
   pol31079->GetYaxis()->SetLabelFont(42);
   pol31079->GetYaxis()->SetLabelOffset(0.007);
   pol31079->GetYaxis()->SetLabelSize(0.05);
   pol31079->GetYaxis()->SetTitleSize(0.06);
   pol31079->GetYaxis()->SetTitleOffset(1.25);
   pol31079->GetYaxis()->SetTitleFont(42);
   pol31079->SetParameter(0,2.113677);
   pol31079->SetParError(0,0.4926417);
   pol31079->SetParLimits(0,0,0);
   pol31079->SetParameter(1,0.0003212409);
   pol31079->SetParError(1,0.000504673);
   pol31079->SetParLimits(1,0,0);
   pol31079->SetParameter(2,-1.286554e-07);
   pol31079->SetParError(2,1.550289e-07);
   pol31079->SetParLimits(2,0,0);
   pol31079->SetParameter(3,1.131722e-11);
   pol31079->SetParError(3,1.467637e-11);
   pol31079->SetParLimits(3,0,0);
   pol31079->Draw("Csame");
   
   TF1 *pol31080 = new TF1("pol3","pol3",0,13000);
   pol31080->SetBit(TF1::kNotDraw);
   pol31080->SetFillColor(19);
   pol31080->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol31080->SetMarkerColor(ci);
   pol31080->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol31080->SetLineColor(ci);
   pol31080->SetLineWidth(3);
   pol31080->SetLineStyle(9);
   pol31080->SetChisquare(5.082306);
   pol31080->SetNDF(8);
   pol31080->GetXaxis()->SetLabelFont(42);
   pol31080->GetXaxis()->SetLabelOffset(0.007);
   pol31080->GetXaxis()->SetLabelSize(0.05);
   pol31080->GetXaxis()->SetTitleSize(0.06);
   pol31080->GetXaxis()->SetTitleOffset(0.9);
   pol31080->GetXaxis()->SetTitleFont(42);
   pol31080->GetYaxis()->SetLabelFont(42);
   pol31080->GetYaxis()->SetLabelOffset(0.007);
   pol31080->GetYaxis()->SetLabelSize(0.05);
   pol31080->GetYaxis()->SetTitleSize(0.06);
   pol31080->GetYaxis()->SetTitleOffset(1.25);
   pol31080->GetYaxis()->SetTitleFont(42);
   pol31080->SetParameter(0,2.522282);
   pol31080->SetParError(0,0.2296135);
   pol31080->SetParLimits(0,0,0);
   pol31080->SetParameter(1,-0.0006051838);
   pol31080->SetParError(1,0.0002493711);
   pol31080->SetParLimits(1,0,0);
   pol31080->SetParameter(2,2.233816e-07);
   pol31080->SetParError(2,7.99473e-08);
   pol31080->SetParLimits(2,0,0);
   pol31080->SetParameter(3,-2.541523e-11);
   pol31080->SetParError(3,7.844377e-12);
   pol31080->SetParLimits(3,0,0);
   pol31080->Draw("Csame");
   
   Double_t _fx1079[12] = {
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
   Double_t _fy1079[12] = {
   1.619365,
   1.703581,
   1.740562,
   1.818394,
   1.742889,
   1.885897,
   1.893799,
   1.848067,
   1.81959,
   1.761658,
   1.662748,
   1.734747};
   Double_t _fex1079[12] = {
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
   Double_t _fey1079[12] = {
   0.0353837,
   0.04241282,
   0.04173909,
   0.05246854,
   0.03828646,
   0.03473669,
   0.0383198,
   0.03857913,
   0.03972211,
   0.03857096,
   0.03253105,
   0.03152091};
   gre = new TGraphErrors(12,_fx1079,_fy1079,_fex1079,_fey1079);
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
   
   TH1F *Graph_Graph1079 = new TH1F("Graph_Graph1079","",100,770,5930);
   Graph_Graph1079->SetMinimum(1.549168);
   Graph_Graph1079->SetMaximum(1.966933);
   Graph_Graph1079->SetDirectory(0);
   Graph_Graph1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1079->SetLineColor(ci);
   Graph_Graph1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph1079->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1079->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph1079->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1079->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1079->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1079);
   
   
   TF1 *pol31080 = new TF1("pol3","pol3",1200,5500);
   pol31080->SetFillColor(19);
   pol31080->SetFillStyle(0);
   pol31080->SetLineColor(2);
   pol31080->SetLineWidth(2);
   pol31080->SetChisquare(9.166398);
   pol31080->SetNDF(8);
   pol31080->GetXaxis()->SetLabelFont(42);
   pol31080->GetXaxis()->SetLabelOffset(0.007);
   pol31080->GetXaxis()->SetLabelSize(0.05);
   pol31080->GetXaxis()->SetTitleSize(0.06);
   pol31080->GetXaxis()->SetTitleOffset(0.9);
   pol31080->GetXaxis()->SetTitleFont(42);
   pol31080->GetYaxis()->SetLabelFont(42);
   pol31080->GetYaxis()->SetLabelOffset(0.007);
   pol31080->GetYaxis()->SetLabelSize(0.05);
   pol31080->GetYaxis()->SetTitleSize(0.06);
   pol31080->GetYaxis()->SetTitleOffset(1.25);
   pol31080->GetYaxis()->SetTitleFont(42);
   pol31080->SetParameter(0,0.8741053);
   pol31080->SetParError(0,0.1643187);
   pol31080->SetParLimits(0,0,0);
   pol31080->SetParameter(1,0.0008758713);
   pol31080->SetParError(1,0.00018101);
   pol31080->SetParLimits(1,0,0);
   pol31080->SetParameter(2,-2.402697e-07);
   pol31080->SetParError(2,5.88273e-08);
   pol31080->SetParLimits(2,0,0);
   pol31080->SetParameter(3,1.975168e-11);
   pol31080->SetParError(3,5.820343e-12);
   pol31080->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31080);
   gre->Draw("p");
   
   Double_t _fx1081[12] = {
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
   Double_t _fy1081[12] = {
   2.001726,
   2.481844,
   2.193754,
   2.173415,
   2.234413,
   2.0921,
   1.933002,
   1.894516,
   1.843939,
   1.821505,
   1.771176,
   1.79666};
   Double_t _fex1081[12] = {
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
   Double_t _fey1081[12] = {
   0.1028225,
   0.1454872,
   0.1087711,
   0.09468511,
   0.1260331,
   0.08114249,
   0.07645867,
   0.05954729,
   0.05389063,
   0.0546381,
   0.04837995,
   0.05247353};
   gre = new TGraphErrors(12,_fx1081,_fy1081,_fex1081,_fey1081);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1081 = new TH1F("Graph_Graph1081","",100,770,5930);
   Graph_Graph1081->SetMinimum(1.632343);
   Graph_Graph1081->SetMaximum(2.717785);
   Graph_Graph1081->SetDirectory(0);
   Graph_Graph1081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1081->SetLineColor(ci);
   Graph_Graph1081->GetXaxis()->SetLabelFont(42);
   Graph_Graph1081->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1081->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1081->GetXaxis()->SetTitleFont(42);
   Graph_Graph1081->GetYaxis()->SetLabelFont(42);
   Graph_Graph1081->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1081->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1081->GetYaxis()->SetTitleFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1081);
   
   
   TF1 *pol31082 = new TF1("pol3","pol3",1200,5500);
   pol31082->SetFillColor(19);
   pol31082->SetFillStyle(0);
   pol31082->SetLineColor(2);
   pol31082->SetLineWidth(2);
   pol31082->SetChisquare(9.100767);
   pol31082->SetNDF(8);
   pol31082->GetXaxis()->SetLabelFont(42);
   pol31082->GetXaxis()->SetLabelOffset(0.007);
   pol31082->GetXaxis()->SetLabelSize(0.05);
   pol31082->GetXaxis()->SetTitleSize(0.06);
   pol31082->GetXaxis()->SetTitleOffset(0.9);
   pol31082->GetXaxis()->SetTitleFont(42);
   pol31082->GetYaxis()->SetLabelFont(42);
   pol31082->GetYaxis()->SetLabelOffset(0.007);
   pol31082->GetYaxis()->SetLabelSize(0.05);
   pol31082->GetYaxis()->SetTitleSize(0.06);
   pol31082->GetYaxis()->SetTitleOffset(1.25);
   pol31082->GetYaxis()->SetTitleFont(42);
   pol31082->SetParameter(0,1.924235);
   pol31082->SetParError(0,0.38485);
   pol31082->SetParLimits(0,0,0);
   pol31082->SetParameter(1,0.0003895571);
   pol31082->SetParError(1,0.0003977861);
   pol31082->SetParLimits(1,0,0);
   pol31082->SetParameter(2,-1.770108e-07);
   pol31082->SetParError(2,1.226339e-07);
   pol31082->SetParLimits(2,0,0);
   pol31082->SetParameter(3,1.859861e-11);
   pol31082->SetParError(3,1.164711e-11);
   pol31082->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31082);
   gre->Draw("p");
   
   TF1 *pol31083 = new TF1("pol3","pol3",0,13000);
   pol31083->SetBit(TF1::kNotDraw);
   pol31083->SetFillColor(19);
   pol31083->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol31083->SetMarkerColor(ci);
   pol31083->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol31083->SetLineColor(ci);
   pol31083->SetLineWidth(3);
   pol31083->SetChisquare(9.100767);
   pol31083->SetNDF(8);
   pol31083->GetXaxis()->SetLabelFont(42);
   pol31083->GetXaxis()->SetLabelOffset(0.007);
   pol31083->GetXaxis()->SetLabelSize(0.05);
   pol31083->GetXaxis()->SetTitleSize(0.06);
   pol31083->GetXaxis()->SetTitleOffset(0.9);
   pol31083->GetXaxis()->SetTitleFont(42);
   pol31083->GetYaxis()->SetLabelFont(42);
   pol31083->GetYaxis()->SetLabelOffset(0.007);
   pol31083->GetYaxis()->SetLabelSize(0.05);
   pol31083->GetYaxis()->SetTitleSize(0.06);
   pol31083->GetYaxis()->SetTitleOffset(1.25);
   pol31083->GetYaxis()->SetTitleFont(42);
   pol31083->SetParameter(0,1.924235);
   pol31083->SetParError(0,0.38485);
   pol31083->SetParLimits(0,0,0);
   pol31083->SetParameter(1,0.0003895571);
   pol31083->SetParError(1,0.0003977861);
   pol31083->SetParLimits(1,0,0);
   pol31083->SetParameter(2,-1.770108e-07);
   pol31083->SetParError(2,1.226339e-07);
   pol31083->SetParLimits(2,0,0);
   pol31083->SetParameter(3,1.859861e-11);
   pol31083->SetParError(3,1.164711e-11);
   pol31083->SetParLimits(3,0,0);
   pol31083->Draw("Csame");
   
   TF1 *pol31084 = new TF1("pol3","pol3",0,13000);
   pol31084->SetBit(TF1::kNotDraw);
   pol31084->SetFillColor(19);
   pol31084->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol31084->SetMarkerColor(ci);
   pol31084->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol31084->SetLineColor(ci);
   pol31084->SetLineWidth(3);
   pol31084->SetLineStyle(9);
   pol31084->SetChisquare(9.166398);
   pol31084->SetNDF(8);
   pol31084->GetXaxis()->SetLabelFont(42);
   pol31084->GetXaxis()->SetLabelOffset(0.007);
   pol31084->GetXaxis()->SetLabelSize(0.05);
   pol31084->GetXaxis()->SetTitleSize(0.06);
   pol31084->GetXaxis()->SetTitleOffset(0.9);
   pol31084->GetXaxis()->SetTitleFont(42);
   pol31084->GetYaxis()->SetLabelFont(42);
   pol31084->GetYaxis()->SetLabelOffset(0.007);
   pol31084->GetYaxis()->SetLabelSize(0.05);
   pol31084->GetYaxis()->SetTitleSize(0.06);
   pol31084->GetYaxis()->SetTitleOffset(1.25);
   pol31084->GetYaxis()->SetTitleFont(42);
   pol31084->SetParameter(0,0.8741053);
   pol31084->SetParError(0,0.1643187);
   pol31084->SetParLimits(0,0,0);
   pol31084->SetParameter(1,0.0008758713);
   pol31084->SetParError(1,0.00018101);
   pol31084->SetParLimits(1,0,0);
   pol31084->SetParameter(2,-2.402697e-07);
   pol31084->SetParError(2,5.88273e-08);
   pol31084->SetParLimits(2,0,0);
   pol31084->SetParameter(3,1.975168e-11);
   pol31084->SetParError(3,5.820343e-12);
   pol31084->SetParLimits(3,0,0);
   pol31084->Draw("Csame");
   
   Double_t _fx1083[12] = {
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
   Double_t _fy1083[12] = {
   2.287168,
   2.293952,
   2.471077,
   2.399049,
   2.315422,
   2.552084,
   2.475819,
   2.627214,
   2.446494,
   2.541702,
   2.177016,
   2.094874};
   Double_t _fex1083[12] = {
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
   Double_t _fey1083[12] = {
   0.05889579,
   0.0633106,
   0.05178099,
   0.07839114,
   0.04776956,
   0.0589986,
   0.05525487,
   0.05823159,
   0.08521119,
   0.05675243,
   0.05183221,
   0.04912437};
   gre = new TGraphErrors(12,_fx1083,_fy1083,_fex1083,_fey1083);
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
   
   TH1F *Graph_Graph1083 = new TH1F("Graph_Graph1083","",100,770,5930);
   Graph_Graph1083->SetMinimum(1.98178);
   Graph_Graph1083->SetMaximum(2.749415);
   Graph_Graph1083->SetDirectory(0);
   Graph_Graph1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1083->SetLineColor(ci);
   Graph_Graph1083->GetXaxis()->SetLabelFont(42);
   Graph_Graph1083->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1083->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1083->GetXaxis()->SetTitleFont(42);
   Graph_Graph1083->GetYaxis()->SetLabelFont(42);
   Graph_Graph1083->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1083->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1083->GetYaxis()->SetTitleFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1083);
   
   
   TF1 *pol31084 = new TF1("pol3","pol3",1200,5500);
   pol31084->SetFillColor(19);
   pol31084->SetFillStyle(0);
   pol31084->SetLineColor(2);
   pol31084->SetLineWidth(2);
   pol31084->SetChisquare(23.08387);
   pol31084->SetNDF(8);
   pol31084->GetXaxis()->SetLabelFont(42);
   pol31084->GetXaxis()->SetLabelOffset(0.007);
   pol31084->GetXaxis()->SetLabelSize(0.05);
   pol31084->GetXaxis()->SetTitleSize(0.06);
   pol31084->GetXaxis()->SetTitleOffset(0.9);
   pol31084->GetXaxis()->SetTitleFont(42);
   pol31084->GetYaxis()->SetLabelFont(42);
   pol31084->GetYaxis()->SetLabelOffset(0.007);
   pol31084->GetYaxis()->SetLabelSize(0.05);
   pol31084->GetYaxis()->SetTitleSize(0.06);
   pol31084->GetYaxis()->SetTitleOffset(1.25);
   pol31084->GetYaxis()->SetTitleFont(42);
   pol31084->SetParameter(0,2.22099);
   pol31084->SetParError(0,0.2596651);
   pol31084->SetParLimits(0,0,0);
   pol31084->SetParameter(1,-1.609778e-05);
   pol31084->SetParError(1,0.0002838498);
   pol31084->SetParLimits(1,0,0);
   pol31084->SetParameter(2,9.144885e-08);
   pol31084->SetParError(2,9.219895e-08);
   pol31084->SetParLimits(2,0,0);
   pol31084->SetParameter(3,-1.708766e-11);
   pol31084->SetParError(3,9.13488e-12);
   pol31084->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31084);
   gre->Draw("p");
   
   Double_t _fx1085[12] = {
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
   Double_t _fy1085[12] = {
   9.75191,
   3.206514,
   2.97333,
   2.997433,
   3.105573,
   2.817642,
   2.746361,
   2.683168,
   2.580351,
   2.571824,
   2.604456,
   2.196542};
   Double_t _fex1085[12] = {
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
   Double_t _fey1085[12] = {
   1.274852,
   0.3260885,
   0.2048713,
   0.2262592,
   0.2076223,
   0.1331517,
   0.1333101,
   0.1049735,
   0.08843598,
   0.09231898,
   0.166362,
   0.1059434};
   gre = new TGraphErrors(12,_fx1085,_fy1085,_fex1085,_fey1085);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1085 = new TH1F("Graph_Graph1085","",100,770,5930);
   Graph_Graph1085->SetMinimum(1.196983);
   Graph_Graph1085->SetMaximum(11.92038);
   Graph_Graph1085->SetDirectory(0);
   Graph_Graph1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1085->SetLineColor(ci);
   Graph_Graph1085->GetXaxis()->SetLabelFont(42);
   Graph_Graph1085->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1085->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1085->GetXaxis()->SetTitleFont(42);
   Graph_Graph1085->GetYaxis()->SetLabelFont(42);
   Graph_Graph1085->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1085->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1085->GetYaxis()->SetTitleFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1085->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1085);
   
   
   TF1 *pol31086 = new TF1("pol3","pol3",1200,5500);
   pol31086->SetFillColor(19);
   pol31086->SetFillStyle(0);
   pol31086->SetLineColor(2);
   pol31086->SetLineWidth(2);
   pol31086->SetChisquare(27.21661);
   pol31086->SetNDF(8);
   pol31086->GetXaxis()->SetLabelFont(42);
   pol31086->GetXaxis()->SetLabelOffset(0.007);
   pol31086->GetXaxis()->SetLabelSize(0.05);
   pol31086->GetXaxis()->SetTitleSize(0.06);
   pol31086->GetXaxis()->SetTitleOffset(0.9);
   pol31086->GetXaxis()->SetTitleFont(42);
   pol31086->GetYaxis()->SetLabelFont(42);
   pol31086->GetYaxis()->SetLabelOffset(0.007);
   pol31086->GetYaxis()->SetLabelSize(0.05);
   pol31086->GetYaxis()->SetTitleSize(0.06);
   pol31086->GetYaxis()->SetTitleOffset(1.25);
   pol31086->GetYaxis()->SetTitleFont(42);
   pol31086->SetParameter(0,5.359979);
   pol31086->SetParError(0,1.044653);
   pol31086->SetParLimits(0,0,0);
   pol31086->SetParameter(1,-0.002124273);
   pol31086->SetParError(1,0.0009940352);
   pol31086->SetParLimits(1,0,0);
   pol31086->SetParameter(2,5.693634e-07);
   pol31086->SetParError(2,2.910395e-07);
   pol31086->SetParLimits(2,0,0);
   pol31086->SetParameter(3,-5.216559e-11);
   pol31086->SetParError(3,2.666103e-11);
   pol31086->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31086);
   gre->Draw("p");
   
   TF1 *pol31087 = new TF1("pol3","pol3",0,13000);
   pol31087->SetBit(TF1::kNotDraw);
   pol31087->SetFillColor(19);
   pol31087->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol31087->SetMarkerColor(ci);
   pol31087->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol31087->SetLineColor(ci);
   pol31087->SetLineWidth(3);
   pol31087->SetChisquare(27.21661);
   pol31087->SetNDF(8);
   pol31087->GetXaxis()->SetLabelFont(42);
   pol31087->GetXaxis()->SetLabelOffset(0.007);
   pol31087->GetXaxis()->SetLabelSize(0.05);
   pol31087->GetXaxis()->SetTitleSize(0.06);
   pol31087->GetXaxis()->SetTitleOffset(0.9);
   pol31087->GetXaxis()->SetTitleFont(42);
   pol31087->GetYaxis()->SetLabelFont(42);
   pol31087->GetYaxis()->SetLabelOffset(0.007);
   pol31087->GetYaxis()->SetLabelSize(0.05);
   pol31087->GetYaxis()->SetTitleSize(0.06);
   pol31087->GetYaxis()->SetTitleOffset(1.25);
   pol31087->GetYaxis()->SetTitleFont(42);
   pol31087->SetParameter(0,5.359979);
   pol31087->SetParError(0,1.044653);
   pol31087->SetParLimits(0,0,0);
   pol31087->SetParameter(1,-0.002124273);
   pol31087->SetParError(1,0.0009940352);
   pol31087->SetParLimits(1,0,0);
   pol31087->SetParameter(2,5.693634e-07);
   pol31087->SetParError(2,2.910395e-07);
   pol31087->SetParLimits(2,0,0);
   pol31087->SetParameter(3,-5.216559e-11);
   pol31087->SetParError(3,2.666103e-11);
   pol31087->SetParLimits(3,0,0);
   pol31087->Draw("Csame");
   
   TF1 *pol31088 = new TF1("pol3","pol3",0,13000);
   pol31088->SetBit(TF1::kNotDraw);
   pol31088->SetFillColor(19);
   pol31088->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol31088->SetMarkerColor(ci);
   pol31088->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol31088->SetLineColor(ci);
   pol31088->SetLineWidth(3);
   pol31088->SetLineStyle(9);
   pol31088->SetChisquare(23.08387);
   pol31088->SetNDF(8);
   pol31088->GetXaxis()->SetLabelFont(42);
   pol31088->GetXaxis()->SetLabelOffset(0.007);
   pol31088->GetXaxis()->SetLabelSize(0.05);
   pol31088->GetXaxis()->SetTitleSize(0.06);
   pol31088->GetXaxis()->SetTitleOffset(0.9);
   pol31088->GetXaxis()->SetTitleFont(42);
   pol31088->GetYaxis()->SetLabelFont(42);
   pol31088->GetYaxis()->SetLabelOffset(0.007);
   pol31088->GetYaxis()->SetLabelSize(0.05);
   pol31088->GetYaxis()->SetTitleSize(0.06);
   pol31088->GetYaxis()->SetTitleOffset(1.25);
   pol31088->GetYaxis()->SetTitleFont(42);
   pol31088->SetParameter(0,2.22099);
   pol31088->SetParError(0,0.2596651);
   pol31088->SetParLimits(0,0,0);
   pol31088->SetParameter(1,-1.609778e-05);
   pol31088->SetParError(1,0.0002838498);
   pol31088->SetParLimits(1,0,0);
   pol31088->SetParameter(2,9.144885e-08);
   pol31088->SetParError(2,9.219895e-08);
   pol31088->SetParLimits(2,0,0);
   pol31088->SetParameter(3,-1.708766e-11);
   pol31088->SetParError(3,9.13488e-12);
   pol31088->SetParLimits(3,0,0);
   pol31088->Draw("Csame");
   
   Double_t _fx1087[12] = {
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
   Double_t _fy1087[12] = {
   1.80489,
   1.934695,
   1.925478,
   1.998575,
   2.005818,
   2.28316,
   2.159569,
   2.191877,
   2.154317,
   2.310821,
   2.235428,
   2.114101};
   Double_t _fex1087[12] = {
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
   Double_t _fey1087[12] = {
   0.02902195,
   0.03125775,
   0.02979547,
   0.03143966,
   0.03064318,
   0.03961272,
   0.03414302,
   0.04225446,
   0.03815458,
   0.0409889,
   0.04318338,
   0.03925281};
   gre = new TGraphErrors(12,_fx1087,_fy1087,_fex1087,_fey1087);
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
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","",100,770,5930);
   Graph_Graph1087->SetMinimum(1.718274);
   Graph_Graph1087->SetMaximum(2.409404);
   Graph_Graph1087->SetDirectory(0);
   Graph_Graph1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1087->SetLineColor(ci);
   Graph_Graph1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph1087->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1087->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph1087->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1087->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1087->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1087);
   
   
   TF1 *pol31088 = new TF1("pol3","pol3",1200,5500);
   pol31088->SetFillColor(19);
   pol31088->SetFillStyle(0);
   pol31088->SetLineColor(2);
   pol31088->SetLineWidth(2);
   pol31088->SetChisquare(31.3282);
   pol31088->SetNDF(8);
   pol31088->GetXaxis()->SetLabelFont(42);
   pol31088->GetXaxis()->SetLabelOffset(0.007);
   pol31088->GetXaxis()->SetLabelSize(0.05);
   pol31088->GetXaxis()->SetTitleSize(0.06);
   pol31088->GetXaxis()->SetTitleOffset(0.9);
   pol31088->GetXaxis()->SetTitleFont(42);
   pol31088->GetYaxis()->SetLabelFont(42);
   pol31088->GetYaxis()->SetLabelOffset(0.007);
   pol31088->GetYaxis()->SetLabelSize(0.05);
   pol31088->GetYaxis()->SetTitleSize(0.06);
   pol31088->GetYaxis()->SetTitleOffset(1.25);
   pol31088->GetYaxis()->SetTitleFont(42);
   pol31088->SetParameter(0,1.28727);
   pol31088->SetParError(0,0.1504935);
   pol31088->SetParLimits(0,0,0);
   pol31088->SetParameter(1,0.0005607463);
   pol31088->SetParError(1,0.0001695125);
   pol31088->SetParLimits(1,0,0);
   pol31088->SetParameter(2,-1.008046e-07);
   pol31088->SetParError(2,5.627878e-08);
   pol31088->SetParLimits(2,0,0);
   pol31088->SetParameter(3,4.963562e-12);
   pol31088->SetParError(3,5.680331e-12);
   pol31088->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31088);
   gre->Draw("p");
   
   Double_t _fx1089[12] = {
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
   Double_t _fy1089[12] = {
   2.413866,
   2.303084,
   2.42421,
   2.212849,
   2.543631,
   2.194906,
   2.229539,
   2.272451,
   2.172201,
   2.207761,
   2.229347,
   1.969413};
   Double_t _fex1089[12] = {
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
   Double_t _fey1089[12] = {
   0.1381488,
   0.1317069,
   0.1160948,
   0.1001078,
   0.1095948,
   0.08270352,
   0.07107995,
   0.08307581,
   0.06271554,
   0.0715037,
   0.05734243,
   0.05361713};
   gre = new TGraphErrors(12,_fx1089,_fy1089,_fex1089,_fey1089);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1089 = new TH1F("Graph_Graph1089","",100,770,5930);
   Graph_Graph1089->SetMinimum(1.842053);
   Graph_Graph1089->SetMaximum(2.726969);
   Graph_Graph1089->SetDirectory(0);
   Graph_Graph1089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1089->SetLineColor(ci);
   Graph_Graph1089->GetXaxis()->SetLabelFont(42);
   Graph_Graph1089->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1089->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1089->GetXaxis()->SetTitleFont(42);
   Graph_Graph1089->GetYaxis()->SetLabelFont(42);
   Graph_Graph1089->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1089->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1089->GetYaxis()->SetTitleFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1089);
   
   
   TF1 *pol31090 = new TF1("pol3","pol3",1200,5500);
   pol31090->SetFillColor(19);
   pol31090->SetFillStyle(0);
   pol31090->SetLineColor(2);
   pol31090->SetLineWidth(2);
   pol31090->SetChisquare(12.16207);
   pol31090->SetNDF(8);
   pol31090->GetXaxis()->SetLabelFont(42);
   pol31090->GetXaxis()->SetLabelOffset(0.007);
   pol31090->GetXaxis()->SetLabelSize(0.05);
   pol31090->GetXaxis()->SetTitleSize(0.06);
   pol31090->GetXaxis()->SetTitleOffset(0.9);
   pol31090->GetXaxis()->SetTitleFont(42);
   pol31090->GetYaxis()->SetLabelFont(42);
   pol31090->GetYaxis()->SetLabelOffset(0.007);
   pol31090->GetYaxis()->SetLabelSize(0.05);
   pol31090->GetYaxis()->SetTitleSize(0.06);
   pol31090->GetYaxis()->SetTitleOffset(1.25);
   pol31090->GetYaxis()->SetTitleFont(42);
   pol31090->SetParameter(0,3.137515);
   pol31090->SetParError(0,0.4407867);
   pol31090->SetParLimits(0,0,0);
   pol31090->SetParameter(1,-0.0008381877);
   pol31090->SetParError(1,0.0004486379);
   pol31090->SetParLimits(1,0,0);
   pol31090->SetParameter(2,2.564637e-07);
   pol31090->SetParError(2,1.37561e-07);
   pol31090->SetParLimits(2,0,0);
   pol31090->SetParameter(3,-2.571855e-11);
   pol31090->SetParError(3,1.302415e-11);
   pol31090->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31090);
   gre->Draw("p");
   
   TF1 *pol31091 = new TF1("pol3","pol3",0,13000);
   pol31091->SetBit(TF1::kNotDraw);
   pol31091->SetFillColor(19);
   pol31091->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol31091->SetMarkerColor(ci);
   pol31091->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol31091->SetLineColor(ci);
   pol31091->SetLineWidth(3);
   pol31091->SetChisquare(12.16207);
   pol31091->SetNDF(8);
   pol31091->GetXaxis()->SetLabelFont(42);
   pol31091->GetXaxis()->SetLabelOffset(0.007);
   pol31091->GetXaxis()->SetLabelSize(0.05);
   pol31091->GetXaxis()->SetTitleSize(0.06);
   pol31091->GetXaxis()->SetTitleOffset(0.9);
   pol31091->GetXaxis()->SetTitleFont(42);
   pol31091->GetYaxis()->SetLabelFont(42);
   pol31091->GetYaxis()->SetLabelOffset(0.007);
   pol31091->GetYaxis()->SetLabelSize(0.05);
   pol31091->GetYaxis()->SetTitleSize(0.06);
   pol31091->GetYaxis()->SetTitleOffset(1.25);
   pol31091->GetYaxis()->SetTitleFont(42);
   pol31091->SetParameter(0,3.137515);
   pol31091->SetParError(0,0.4407867);
   pol31091->SetParLimits(0,0,0);
   pol31091->SetParameter(1,-0.0008381877);
   pol31091->SetParError(1,0.0004486379);
   pol31091->SetParLimits(1,0,0);
   pol31091->SetParameter(2,2.564637e-07);
   pol31091->SetParError(2,1.37561e-07);
   pol31091->SetParLimits(2,0,0);
   pol31091->SetParameter(3,-2.571855e-11);
   pol31091->SetParError(3,1.302415e-11);
   pol31091->SetParLimits(3,0,0);
   pol31091->Draw("Csame");
   
   TF1 *pol31092 = new TF1("pol3","pol3",0,13000);
   pol31092->SetBit(TF1::kNotDraw);
   pol31092->SetFillColor(19);
   pol31092->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol31092->SetMarkerColor(ci);
   pol31092->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol31092->SetLineColor(ci);
   pol31092->SetLineWidth(3);
   pol31092->SetLineStyle(9);
   pol31092->SetChisquare(31.3282);
   pol31092->SetNDF(8);
   pol31092->GetXaxis()->SetLabelFont(42);
   pol31092->GetXaxis()->SetLabelOffset(0.007);
   pol31092->GetXaxis()->SetLabelSize(0.05);
   pol31092->GetXaxis()->SetTitleSize(0.06);
   pol31092->GetXaxis()->SetTitleOffset(0.9);
   pol31092->GetXaxis()->SetTitleFont(42);
   pol31092->GetYaxis()->SetLabelFont(42);
   pol31092->GetYaxis()->SetLabelOffset(0.007);
   pol31092->GetYaxis()->SetLabelSize(0.05);
   pol31092->GetYaxis()->SetTitleSize(0.06);
   pol31092->GetYaxis()->SetTitleOffset(1.25);
   pol31092->GetYaxis()->SetTitleFont(42);
   pol31092->SetParameter(0,1.28727);
   pol31092->SetParError(0,0.1504935);
   pol31092->SetParLimits(0,0,0);
   pol31092->SetParameter(1,0.0005607463);
   pol31092->SetParError(1,0.0001695125);
   pol31092->SetParLimits(1,0,0);
   pol31092->SetParameter(2,-1.008046e-07);
   pol31092->SetParError(2,5.627878e-08);
   pol31092->SetParLimits(2,0,0);
   pol31092->SetParameter(3,4.963562e-12);
   pol31092->SetParError(3,5.680331e-12);
   pol31092->SetParLimits(3,0,0);
   pol31092->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol3","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol3","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol3","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol3","G_{B}#rightarrow ZZ","L");

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
