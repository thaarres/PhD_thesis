void Signal_mVV_ALPHA1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 14:34:06 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-0.6440408,5806.667,7.664699);
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
   
   TF1 *pol41018 = new TF1("pol4","pol4",0,13000);
   pol41018->SetBit(TF1::kNotDraw);
   pol41018->SetFillColor(19);
   pol41018->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   pol41018->SetMarkerColor(ci);
   pol41018->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41018->SetLineColor(ci);
   pol41018->SetLineWidth(3);
   pol41018->SetChisquare(152.778);
   pol41018->SetNDF(7);
   pol41018->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol41018->GetXaxis()->SetRange(9,43);
   pol41018->GetXaxis()->SetNdivisions(209);
   pol41018->GetXaxis()->SetLabelFont(42);
   pol41018->GetXaxis()->SetLabelOffset(0.007);
   pol41018->GetXaxis()->SetLabelSize(0.05);
   pol41018->GetXaxis()->SetTitleSize(0.06);
   pol41018->GetXaxis()->SetTitleOffset(0.94);
   pol41018->GetXaxis()->SetTitleFont(42);
   pol41018->GetYaxis()->SetTitle("ALPHA1 (GeV)");
   pol41018->GetYaxis()->SetNdivisions(504);
   pol41018->GetYaxis()->SetLabelFont(42);
   pol41018->GetYaxis()->SetLabelOffset(0.007);
   pol41018->GetYaxis()->SetLabelSize(0.05);
   pol41018->GetYaxis()->SetTitleSize(0.06);
   pol41018->GetYaxis()->SetTitleOffset(0.97);
   pol41018->GetYaxis()->SetTitleFont(42);
   pol41018->SetParameter(0,5.743384);
   pol41018->SetParError(0,0.4597377);
   pol41018->SetParLimits(0,0,0);
   pol41018->SetParameter(1,-0.005624184);
   pol41018->SetParError(1,0.0006296395);
   pol41018->SetParLimits(1,0,0);
   pol41018->SetParameter(2,2.477206e-06);
   pol41018->SetParError(2,3.023961e-07);
   pol41018->SetParLimits(2,0,0);
   pol41018->SetParameter(3,-4.621101e-10);
   pol41018->SetParError(3,6.080258e-11);
   pol41018->SetParLimits(3,0,0);
   pol41018->SetParameter(4,3.098093e-14);
   pol41018->SetParError(4,4.354167e-15);
   pol41018->SetParLimits(4,0,0);
   pol41018->Draw("C");
   
   Double_t _fx1017[12] = {
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
   Double_t _fy1017[12] = {
   1.92672,
   1.541639,
   1.326949,
   1.55381,
   1.14088,
   1.099284,
   1.274098,
   1.170308,
   1.243984,
   1.282647,
   1.080035,
   1.234525};
   Double_t _fex1017[12] = {
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
   Double_t _fey1017[12] = {
   0.5971021,
   0.03333114,
   0.02610767,
   0.0300411,
   0.02208071,
   0.02153063,
   0.02458189,
   0.02534791,
   0.02286354,
   0.02376249,
   0.02096207,
   0.02166613};
   TGraphErrors *gre = new TGraphErrors(12,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,770,5930);
   Graph_Graph1017->SetMinimum(0.9125975);
   Graph_Graph1017->SetMaximum(2.670297);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *pol41018 = new TF1("pol4","pol4",1200,5500);
   pol41018->SetFillColor(19);
   pol41018->SetFillStyle(0);
   pol41018->SetLineColor(2);
   pol41018->SetLineWidth(2);
   pol41018->SetChisquare(152.778);
   pol41018->SetNDF(7);
   pol41018->GetXaxis()->SetLabelFont(42);
   pol41018->GetXaxis()->SetLabelOffset(0.007);
   pol41018->GetXaxis()->SetLabelSize(0.05);
   pol41018->GetXaxis()->SetTitleSize(0.06);
   pol41018->GetXaxis()->SetTitleOffset(0.9);
   pol41018->GetXaxis()->SetTitleFont(42);
   pol41018->GetYaxis()->SetLabelFont(42);
   pol41018->GetYaxis()->SetLabelOffset(0.007);
   pol41018->GetYaxis()->SetLabelSize(0.05);
   pol41018->GetYaxis()->SetTitleSize(0.06);
   pol41018->GetYaxis()->SetTitleOffset(1.25);
   pol41018->GetYaxis()->SetTitleFont(42);
   pol41018->SetParameter(0,5.743384);
   pol41018->SetParError(0,0.4597377);
   pol41018->SetParLimits(0,0,0);
   pol41018->SetParameter(1,-0.005624184);
   pol41018->SetParError(1,0.0006296395);
   pol41018->SetParLimits(1,0,0);
   pol41018->SetParameter(2,2.477206e-06);
   pol41018->SetParError(2,3.023961e-07);
   pol41018->SetParLimits(2,0,0);
   pol41018->SetParameter(3,-4.621101e-10);
   pol41018->SetParError(3,6.080258e-11);
   pol41018->SetParLimits(3,0,0);
   pol41018->SetParameter(4,3.098093e-14);
   pol41018->SetParError(4,4.354167e-15);
   pol41018->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41018);
   gre->Draw("p");
   
   TF1 *pol41019 = new TF1("pol4","pol4",0,13000);
   pol41019->SetBit(TF1::kNotDraw);
   pol41019->SetFillColor(19);
   pol41019->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41019->SetMarkerColor(ci);
   pol41019->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41019->SetLineColor(ci);
   pol41019->SetLineWidth(3);
   pol41019->SetChisquare(152.778);
   pol41019->SetNDF(7);
   pol41019->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol41019->GetXaxis()->SetRange(9,43);
   pol41019->GetXaxis()->SetNdivisions(209);
   pol41019->GetXaxis()->SetLabelFont(42);
   pol41019->GetXaxis()->SetLabelOffset(0.007);
   pol41019->GetXaxis()->SetLabelSize(0.05);
   pol41019->GetXaxis()->SetTitleSize(0.06);
   pol41019->GetXaxis()->SetTitleOffset(0.94);
   pol41019->GetXaxis()->SetTitleFont(42);
   pol41019->GetYaxis()->SetTitle("ALPHA1 (GeV)");
   pol41019->GetYaxis()->SetNdivisions(504);
   pol41019->GetYaxis()->SetLabelFont(42);
   pol41019->GetYaxis()->SetLabelOffset(0.007);
   pol41019->GetYaxis()->SetLabelSize(0.05);
   pol41019->GetYaxis()->SetTitleSize(0.06);
   pol41019->GetYaxis()->SetTitleOffset(0.97);
   pol41019->GetYaxis()->SetTitleFont(42);
   pol41019->SetParameter(0,5.743384);
   pol41019->SetParError(0,0.4597377);
   pol41019->SetParLimits(0,0,0);
   pol41019->SetParameter(1,-0.005624184);
   pol41019->SetParError(1,0.0006296395);
   pol41019->SetParLimits(1,0,0);
   pol41019->SetParameter(2,2.477206e-06);
   pol41019->SetParError(2,3.023961e-07);
   pol41019->SetParLimits(2,0,0);
   pol41019->SetParameter(3,-4.621101e-10);
   pol41019->SetParError(3,6.080258e-11);
   pol41019->SetParLimits(3,0,0);
   pol41019->SetParameter(4,3.098093e-14);
   pol41019->SetParError(4,4.354167e-15);
   pol41019->SetParLimits(4,0,0);
   pol41019->Draw("Csame");
   
   Double_t _fx1019[12] = {
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
   Double_t _fy1019[12] = {
   2.988354,
   1.540642,
   1.297461,
   1.486475,
   1.15081,
   1.083372,
   1.301295,
   1.095464,
   1.273594,
   1.273724,
   1.008403,
   1.254221};
   Double_t _fex1019[12] = {
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
   Double_t _fey1019[12] = {
   2.367709,
   0.03235631,
   0.02511069,
   0.02692302,
   0.02087818,
   0.01964516,
   0.02467925,
   0.01992974,
   0.02244761,
   0.02235698,
   0.01782658,
   0.02115466};
   gre = new TGraphErrors(12,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,770,5930);
   Graph_Graph1019->SetMinimum(0.1471037);
   Graph_Graph1019->SetMaximum(5.829605);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   
   TF1 *pol41020 = new TF1("pol4","pol4",1200,5500);
   pol41020->SetFillColor(19);
   pol41020->SetFillStyle(0);
   pol41020->SetLineColor(2);
   pol41020->SetLineWidth(2);
   pol41020->SetChisquare(235.0863);
   pol41020->SetNDF(7);
   pol41020->GetXaxis()->SetLabelFont(42);
   pol41020->GetXaxis()->SetLabelOffset(0.007);
   pol41020->GetXaxis()->SetLabelSize(0.05);
   pol41020->GetXaxis()->SetTitleSize(0.06);
   pol41020->GetXaxis()->SetTitleOffset(0.9);
   pol41020->GetXaxis()->SetTitleFont(42);
   pol41020->GetYaxis()->SetLabelFont(42);
   pol41020->GetYaxis()->SetLabelOffset(0.007);
   pol41020->GetYaxis()->SetLabelSize(0.05);
   pol41020->GetYaxis()->SetTitleSize(0.06);
   pol41020->GetYaxis()->SetTitleOffset(1.25);
   pol41020->GetYaxis()->SetTitleFont(42);
   pol41020->SetParameter(0,6.057871);
   pol41020->SetParError(0,0.4250308);
   pol41020->SetParLimits(0,0,0);
   pol41020->SetParameter(1,-0.006123125);
   pol41020->SetParError(1,0.0005777943);
   pol41020->SetParLimits(1,0,0);
   pol41020->SetParameter(2,2.745326e-06);
   pol41020->SetParError(2,2.758364e-07);
   pol41020->SetParLimits(2,0,0);
   pol41020->SetParameter(3,-5.226199e-10);
   pol41020->SetParError(3,5.525049e-11);
   pol41020->SetParLimits(3,0,0);
   pol41020->SetParameter(4,3.5775e-14);
   pol41020->SetParError(4,3.949788e-15);
   pol41020->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41020);
   gre->Draw("p");
   
   TF1 *pol41021 = new TF1("pol4","pol4",0,13000);
   pol41021->SetBit(TF1::kNotDraw);
   pol41021->SetFillColor(19);
   pol41021->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41021->SetMarkerColor(ci);
   pol41021->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol41021->SetLineColor(ci);
   pol41021->SetLineWidth(3);
   pol41021->SetChisquare(235.0863);
   pol41021->SetNDF(7);
   pol41021->GetXaxis()->SetLabelFont(42);
   pol41021->GetXaxis()->SetLabelOffset(0.007);
   pol41021->GetXaxis()->SetLabelSize(0.05);
   pol41021->GetXaxis()->SetTitleSize(0.06);
   pol41021->GetXaxis()->SetTitleOffset(0.9);
   pol41021->GetXaxis()->SetTitleFont(42);
   pol41021->GetYaxis()->SetLabelFont(42);
   pol41021->GetYaxis()->SetLabelOffset(0.007);
   pol41021->GetYaxis()->SetLabelSize(0.05);
   pol41021->GetYaxis()->SetTitleSize(0.06);
   pol41021->GetYaxis()->SetTitleOffset(1.25);
   pol41021->GetYaxis()->SetTitleFont(42);
   pol41021->SetParameter(0,6.057871);
   pol41021->SetParError(0,0.4250308);
   pol41021->SetParLimits(0,0,0);
   pol41021->SetParameter(1,-0.006123125);
   pol41021->SetParError(1,0.0005777943);
   pol41021->SetParLimits(1,0,0);
   pol41021->SetParameter(2,2.745326e-06);
   pol41021->SetParError(2,2.758364e-07);
   pol41021->SetParLimits(2,0,0);
   pol41021->SetParameter(3,-5.226199e-10);
   pol41021->SetParError(3,5.525049e-11);
   pol41021->SetParLimits(3,0,0);
   pol41021->SetParameter(4,3.5775e-14);
   pol41021->SetParError(4,3.949788e-15);
   pol41021->SetParLimits(4,0,0);
   pol41021->Draw("Csame");
   
   Double_t _fx1021[12] = {
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
   Double_t _fy1021[12] = {
   1.919852,
   1.433276,
   1.265642,
   1.434526,
   1.028732,
   0.96887,
   1.118086,
   0.9308634,
   1.095857,
   0.5716623,
   0.9377058,
   1.113168};
   Double_t _fex1021[12] = {
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
   Double_t _fey1021[12] = {
   0.5986586,
   0.02100953,
   0.01657169,
   0.01834358,
   0.01315457,
   0.01278291,
   0.01445296,
   0.01203913,
   0.01310329,
   0.006508051,
   0.01424204,
   0.01723081};
   gre = new TGraphErrors(12,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,770,5930);
   Graph_Graph1021->SetMinimum(0.3698186);
   Graph_Graph1021->SetMaximum(2.713846);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *pol41022 = new TF1("pol4","pol4",1200,5500);
   pol41022->SetFillColor(19);
   pol41022->SetFillStyle(0);
   pol41022->SetLineColor(2);
   pol41022->SetLineWidth(2);
   pol41022->SetChisquare(1289.471);
   pol41022->SetNDF(7);
   pol41022->GetXaxis()->SetLabelFont(42);
   pol41022->GetXaxis()->SetLabelOffset(0.007);
   pol41022->GetXaxis()->SetLabelSize(0.05);
   pol41022->GetXaxis()->SetTitleSize(0.06);
   pol41022->GetXaxis()->SetTitleOffset(0.9);
   pol41022->GetXaxis()->SetTitleFont(42);
   pol41022->GetYaxis()->SetLabelFont(42);
   pol41022->GetYaxis()->SetLabelOffset(0.007);
   pol41022->GetYaxis()->SetLabelSize(0.05);
   pol41022->GetYaxis()->SetTitleSize(0.06);
   pol41022->GetYaxis()->SetTitleOffset(1.25);
   pol41022->GetYaxis()->SetTitleFont(42);
   pol41022->SetParameter(0,7.576601);
   pol41022->SetParError(0,0.2758434);
   pol41022->SetParLimits(0,0,0);
   pol41022->SetParameter(1,-0.008771038);
   pol41022->SetParError(1,0.0003739924);
   pol41022->SetParLimits(1,0,0);
   pol41022->SetParameter(2,4.301238e-06);
   pol41022->SetParError(2,1.778455e-07);
   pol41022->SetParLimits(2,0,0);
   pol41022->SetParameter(3,-9.04957e-10);
   pol41022->SetParError(3,3.545103e-11);
   pol41022->SetParLimits(3,0,0);
   pol41022->SetParameter(4,6.808775e-14);
   pol41022->SetParError(4,2.52227e-15);
   pol41022->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41022);
   gre->Draw("p");
   
   TF1 *pol41023 = new TF1("pol4","pol4",0,13000);
   pol41023->SetBit(TF1::kNotDraw);
   pol41023->SetFillColor(19);
   pol41023->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41023->SetMarkerColor(ci);
   pol41023->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol41023->SetLineColor(ci);
   pol41023->SetLineWidth(3);
   pol41023->SetChisquare(1289.471);
   pol41023->SetNDF(7);
   pol41023->GetXaxis()->SetLabelFont(42);
   pol41023->GetXaxis()->SetLabelOffset(0.007);
   pol41023->GetXaxis()->SetLabelSize(0.05);
   pol41023->GetXaxis()->SetTitleSize(0.06);
   pol41023->GetXaxis()->SetTitleOffset(0.9);
   pol41023->GetXaxis()->SetTitleFont(42);
   pol41023->GetYaxis()->SetLabelFont(42);
   pol41023->GetYaxis()->SetLabelOffset(0.007);
   pol41023->GetYaxis()->SetLabelSize(0.05);
   pol41023->GetYaxis()->SetTitleSize(0.06);
   pol41023->GetYaxis()->SetTitleOffset(1.25);
   pol41023->GetYaxis()->SetTitleFont(42);
   pol41023->SetParameter(0,7.576601);
   pol41023->SetParError(0,0.2758434);
   pol41023->SetParLimits(0,0,0);
   pol41023->SetParameter(1,-0.008771038);
   pol41023->SetParError(1,0.0003739924);
   pol41023->SetParLimits(1,0,0);
   pol41023->SetParameter(2,4.301238e-06);
   pol41023->SetParError(2,1.778455e-07);
   pol41023->SetParLimits(2,0,0);
   pol41023->SetParameter(3,-9.04957e-10);
   pol41023->SetParError(3,3.545103e-11);
   pol41023->SetParLimits(3,0,0);
   pol41023->SetParameter(4,6.808775e-14);
   pol41023->SetParError(4,2.52227e-15);
   pol41023->SetParLimits(4,0,0);
   pol41023->Draw("Csame");
   
   Double_t _fx1023[12] = {
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
   Double_t _fy1023[12] = {
   1.419272,
   1.310386,
   1.083921,
   1.282156,
   0.9310631,
   0.8738703,
   0.9903529,
   0.8417182,
   0.9705141,
   0.9493024,
   0.8040499,
   0.6466331};
   Double_t _fex1023[12] = {
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
   Double_t _fey1023[12] = {
   0.224098,
   0.01916062,
   0.01413806,
   0.01572239,
   0.01202552,
   0.01120715,
   0.01232008,
   0.01059606,
   0.01141316,
   0.0109567,
   0.01024316,
   0.009131662};
   gre = new TGraphErrors(12,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,770,5930);
   Graph_Graph1023->SetMinimum(0.5369147);
   Graph_Graph1023->SetMaximum(1.743957);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   
   TF1 *pol41024 = new TF1("pol4","pol4",1200,5500);
   pol41024->SetFillColor(19);
   pol41024->SetFillStyle(0);
   pol41024->SetLineColor(2);
   pol41024->SetLineWidth(2);
   pol41024->SetChisquare(391.4675);
   pol41024->SetNDF(7);
   pol41024->GetXaxis()->SetLabelFont(42);
   pol41024->GetXaxis()->SetLabelOffset(0.007);
   pol41024->GetXaxis()->SetLabelSize(0.05);
   pol41024->GetXaxis()->SetTitleSize(0.06);
   pol41024->GetXaxis()->SetTitleOffset(0.9);
   pol41024->GetXaxis()->SetTitleFont(42);
   pol41024->GetYaxis()->SetLabelFont(42);
   pol41024->GetYaxis()->SetLabelOffset(0.007);
   pol41024->GetYaxis()->SetLabelSize(0.05);
   pol41024->GetYaxis()->SetTitleSize(0.06);
   pol41024->GetYaxis()->SetTitleOffset(1.25);
   pol41024->GetYaxis()->SetTitleFont(42);
   pol41024->SetParameter(0,3.28603);
   pol41024->SetParError(0,0.2386024);
   pol41024->SetParLimits(0,0,0);
   pol41024->SetParameter(1,-0.002314695);
   pol41024->SetParError(1,0.0003220984);
   pol41024->SetParLimits(1,0,0);
   pol41024->SetParameter(2,7.644845e-07);
   pol41024->SetParError(2,1.525435e-07);
   pol41024->SetParLimits(2,0,0);
   pol41024->SetParameter(3,-9.572628e-11);
   pol41024->SetParError(3,3.030712e-11);
   pol41024->SetParLimits(3,0,0);
   pol41024->SetParameter(4,3.154436e-15);
   pol41024->SetParError(4,2.148558e-15);
   pol41024->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41024);
   gre->Draw("p");
   
   TF1 *pol41025 = new TF1("pol4","pol4",0,13000);
   pol41025->SetBit(TF1::kNotDraw);
   pol41025->SetFillColor(19);
   pol41025->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41025->SetMarkerColor(ci);
   pol41025->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol41025->SetLineColor(ci);
   pol41025->SetLineWidth(3);
   pol41025->SetChisquare(391.4675);
   pol41025->SetNDF(7);
   pol41025->GetXaxis()->SetLabelFont(42);
   pol41025->GetXaxis()->SetLabelOffset(0.007);
   pol41025->GetXaxis()->SetLabelSize(0.05);
   pol41025->GetXaxis()->SetTitleSize(0.06);
   pol41025->GetXaxis()->SetTitleOffset(0.9);
   pol41025->GetXaxis()->SetTitleFont(42);
   pol41025->GetYaxis()->SetLabelFont(42);
   pol41025->GetYaxis()->SetLabelOffset(0.007);
   pol41025->GetYaxis()->SetLabelSize(0.05);
   pol41025->GetYaxis()->SetTitleSize(0.06);
   pol41025->GetYaxis()->SetTitleOffset(1.25);
   pol41025->GetYaxis()->SetTitleFont(42);
   pol41025->SetParameter(0,3.28603);
   pol41025->SetParError(0,0.2386024);
   pol41025->SetParLimits(0,0,0);
   pol41025->SetParameter(1,-0.002314695);
   pol41025->SetParError(1,0.0003220984);
   pol41025->SetParLimits(1,0,0);
   pol41025->SetParameter(2,7.644845e-07);
   pol41025->SetParError(2,1.525435e-07);
   pol41025->SetParLimits(2,0,0);
   pol41025->SetParameter(3,-9.572628e-11);
   pol41025->SetParError(3,3.030712e-11);
   pol41025->SetParLimits(3,0,0);
   pol41025->SetParameter(4,3.154436e-15);
   pol41025->SetParError(4,2.148558e-15);
   pol41025->SetParLimits(4,0,0);
   pol41025->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol4","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
